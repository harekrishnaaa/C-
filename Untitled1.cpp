#include <iostream>
using namespace std;

int main() {
	
	int n;
	int tst;
	int a,b;
	cin >> tst;

	while(tst--){
	    cin >> a >> b;
	     if(a<=b)
	        cout << b << " ";
  	     else
	        cout<<a<<" ";
	    
	    cout<<(a+b)<< endl;
	    
	}
	return 0;
}

