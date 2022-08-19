#include<bits/stdc++.h>
#define mod ll(1e9+7)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define pc putchar_unlocked
#define gc getchar_unlocked
#define gx getchar
#define be(v) v.begin(),v.end()
#define mem(s,v) memset(s,v,sizeof(s))
#define fr(i,a,n) for(int i=a;i<n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pi;
typedef pair<int,ll> pil;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<pil> vpil;
typedef vector<pi> vpii;
inline void print (int n) {int NN=n,rev,count=0;rev = NN;if(NN==0){pc('0');return;}while((rev%10)==0){count++;rev/=10;}rev=0;
while(NN!=0){rev=(rev<<3)+(rev<<1)+NN%10;NN/=10;}while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}while(count--)pc('0');}
inline void lprint(ll n){if(n<0LL){n=-n;pc('-');}int i=21;char o[21];do{o[--i]=(n%10LL)+'0';n/=10LL;}while(n);
do{pc(o[i]);}while(++i<21);}
inline void input(int& num){num=0;char c=gc();int flag=0;while(!((c>='0'&c<='9')||c=='-'))c=gc();if(c=='-'){flag=1;c=gc();}
while(c>='0'&&c<='9'){num=(num<<1)+(num<<3)+c-'0';c=gc();}if(flag==1)num=0-num;}
inline void linput(ll& num){num=0;char c=gc();int flag=0;while(!((c>='0'&c<='9')||c=='-'))c=gc();if(c=='-'){flag=1;c=gc();}
while(c>='0'&&c<='9'){num=(num<<1)+(num<<3)+c-'0';c=gc();}if(flag==1)num=0-num;}

inline void sscan(string  &a){char c=gx();while(c==' '||c=='\n')c=gx();while(c!='\n'&&c!=' '){a+=c;c=gx();}}
inline ll power(ll a,ll n,ll mod1) {ll b=a,ans=1;while(n){if(n&1) ans=(ans*b)%mod1; b=(b*b)%mod1; n>>=1;} return ans;}
int gcd(int a,int b){if(b==0)return a;else return(gcd(b,a%b));}

int main()
{
    int t;
   cin>>t;
    while(t--)
    {
         
        int n;
       cin>>n;
        int x,cou=0;
        vector<pair<int,int > > v;
        for(int i=1;i<=n;i++)
        { 
            string s;cin>>s;
            for(int j=0;j<n;j++)
            {
                if(s[j]=='1')
                {
                    cou++;
                  v.pb(mp(j+1,i));
                }
            }
        }
        cout<<cou<<endl;
        int sz=v.size();
        for(int i=0;i<sz;i++)
        {
            cout<<"0 1 0 1 0 1 "<<v[i].F<<" "<<v[i].S<<" "<<v[i].S<<endl;
        }
    }
    
    return 0;    
}

