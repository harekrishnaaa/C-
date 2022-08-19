#include <iostream> 
using namespace std;

int prime(int n){// to check whether the number is prime or not
    int flag = 0;
    
    if(n == 0 || n == 1){
        flag = 1;
    } 
    else if(n<0){
        flag = 1;
    }
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = 1;
            break;
        }
    }
    
    if(flag==0){
        return 1;
    }
    else {
        return 0;
    }
}

int main()//main function
{   
    int t;//initialising variable for test case
    cin>>t;//taking input from user

while(t--){//while loop to run test cases
    int n,num1,num2,temp1,temp2=0;//initializing variables
    cin>>n;//taking input
    
    for(int i=2;i<10000;i++){//running for loop to find prime numbers which can be used
        if(prime(i)){
            int temp = n-i;
            if(prime(temp)){ 
                temp1 = temp - i;
                if(temp1>temp2){
                    num1 = i;
                    num2 = temp;
                    temp2 = temp - i;
                }
            }
        }
    }  
    
    int sum = (num2+num1); 
    
    if(sum==n)
    cout<<num1<<" "<<num2<<endl; 
    else 
    cout<<"-1 -1"<<endl;
   
}
    return 0;//terminating the programming by returning 0
}

