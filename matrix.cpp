#include<iostream>//standard input output stream
using namespace std;
      int main()//main fucntion
      {
             int b,i,j,w,lr=0,lc=0,n,m;//declaring and initializing variables
             int a[10][10];//initializng array
             cout<<"Name-Subham Ghosh\nUID-21BCS4993"<<endl;//details
             cout<<"enter the no. of rows in matrix: ";//asking user to enter no of rows
             cin>>m;//taking no of rows as input
             cout<<"enter no. of columns in matrix: ";//asking user to enter the no of colomns
             cin>>n;//taking no of coloumns as input

             cout<<"enter the elements in matrix: ";//asking user to the elements in matrix
             for(i=0;i<m;i++)// running for loop 
             {
                     for(j=0;j<n;j++)//running for loop to enter the row and coloumns

                      {
                                  cin>>a[i][j];//taking the no of row and coloumns of matrix as input from the user
                                                }
                                    }
                                    cout<<"enter the base address: ";//asking user to enter the base address

                                    cin>>b;//taking the base address as input from the user

                                    cout<<"enter the storage size of one element stored in array: ";//asking user to enter the size of on element

                                    cin>>w;//taking the size of the element as input from the user

                                    i=m-1;//mathematical expression

                                    j=n-1;//mathematical expression
                                    cout<<"address of A[i][j] "<<b + w*(n*(i-lr)+(j-lc));//printing the address of the array

                                             return 0;

}





