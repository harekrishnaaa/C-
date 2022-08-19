#include<bits/stdc++.h>
using namespace std;
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define ll int
#define endl '\n'
#define double double
#define ld double
#define FOR(i,a,n) for (ll i=(a);i<=(n);++i)
#define RFOR(i,a,n) for (ll i=(n);i>=(a);--i)
#define FI(i,n) for (ll i=0; i<(n); ++i)
#define ZERO(a) memset((a),0,sizeof((a)))
#define MINUS(a) memset((a),-1,sizeof((a)))
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define all(g) g.begin(),g.end()
#define sz(x) (ll)x.size()
int fastMax(int x, int y) { return (((y-x)>>(32-1))&(x^y))^y; }
int fastMin(int x, int y) { return (((y-x)>>(32-1))&(x^y))^x; }
 
// #include <ext/pb_ds/assoc_container.hpp> // Common file
// #include <ext/pb_ds/tree_policy.hpp>     // Including tree_order_statistics_node_updat
// using namespace __gnu_pbds;
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int MOD = 998244353;
const int MAXN = 245;
vector<int> graph[MAXN];
int parent[MAXN],children[MAXN],newSelina[1020005];
int dp[MAXN][2][2], F[MAXN], mmi[MAXN];

int power(int x,int y){
    int res = 1;

    while(y){
        if(y&1) res = (res*x)%MOD;
        x = (x*x)%MOD;
        y >>= 1;
    }

    return res;
}

void dfs(int u,int p){
    parent[u] = p;

    for(int v:graph[u]){
        if(v == p) continue;
        dfs(v,u);
        children[u]++;
    }
}

void solve(){
    int n; cin>>n;

    for(int i=1;i<n;i++){
        int u,v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    dfs(1,0);

    int cur = 1,prev = 0;

    int m; cin>>m;

    for(int i=1;i<=m;i++){
        int tim; cin>>tim;
        if(tim <= 1020000) newSelina[tim]++;
    }

    for(int i=1;i<=n;i++) mmi[i] = power(children[i],MOD-2);

    int q; cin>>q;

    for(int tim=1;tim<=q;tim++,swap(cur,prev)){
        dp[1][cur][0] = newSelina[tim];

        for(int v:graph[1]) dp[1][cur][0] = (dp[1][cur][0] + dp[v][prev][1])%MOD;

        for(int u=2;u<=n;u++){
            dp[u][cur][0] = dp[u][cur][1] = 0;
            if(children[u]) dp[u][cur][0] = (dp[u][cur][0] + (dp[parent[u]][prev][0]*mmi[parent[u]])%MOD)%MOD;
            else dp[u][cur][1] = (dp[u][cur][1] + (dp[parent[u]][prev][0]*mmi[parent[u]])%MOD)%MOD;
            
            for(int v:graph[u]){
                if(v == parent[u]) continue;
                dp[u][cur][1] = (dp[v][prev][1] + dp[u][cur][1])%MOD;
            }
        }

        for(int u=1;u<=n;u++) F[u] = (F[u] + dp[u][cur][0] + dp[u][cur][1])%MOD;
    }

    for(int i=1;i<=n;i++) cout<<F[i]<<" ";
}

signed main(){

   FastRead;    


    int t;
    t = 1; 
    // cin>>t; 
    FOR(i,1,t){
        // cout<<"Case #"<<i<<": ";
        solve();
    }
}
