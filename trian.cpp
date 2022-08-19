#include<iostream> 
 #include<conio.h> 
 using namespace std;
 class tri 
 { 
      private: 
      int m,n; 
      public: 
      void setdata(int,int); 
      void area(); 
 }; 
               void tri::setdata(int u,int v) 
           { 
                  m=u; 
                  n=v;            
           } 
                void tri::area() 
          { 
                 int a=0.5*m*n; 
                 cout<<"\nArea of Triangle= "<<a; 
          } 
                int main() 
     { 
                 
                 tri f;  
                 int bb,hh;  
                 cout<<"Enter the base : "<<endl; 
                 cin>>bb; 
                 cout<<"Enter the height: "<<endl;
                 cin>>hh;
                 f.setdata(bb,hh); 
                 f.area(); 
                       
      } 
