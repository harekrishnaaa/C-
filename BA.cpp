#include<bits/stdc++.h>
using namespace std;

void haki(){
	int b,c;
	cin >> b >> c;
	if(b%c==0){
		cout << 1 << "\n";
	}
	else{
		int g=__gcd(b,c);
		int l=(b*c)/g;
		cout << (l/b) << "\n";
	}
}
main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T=1;
	cin >> T;
	while(T--){
		haki();
	}
}
