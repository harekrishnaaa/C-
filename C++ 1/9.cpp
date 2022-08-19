 #include<iostream>
 using namespace std;
 
int exactly3Divisors(int N)
    {
        int c=0,c1=0;
for(int i=N;i>=1;i--)
{
    for(int j=1;j<=N;j++)
    {
        if(N%j==0)
        {
            c++;
        }
    }
    if(c==3)
    {
        c1++
    }
    
}

   return c1;
        }
        int main()
        {
        	int n;
        	cout<<exactly3Divisors(n)<<endl;
		}
