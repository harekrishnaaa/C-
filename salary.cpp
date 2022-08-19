#include<iostream>//standard input output stream
using namespace std;

      class Employee//declaring class

      {
          
             char Name[25];//initializing char variable

             int Age;//initializing  integer variable

             char Desg[8];//initializing char variable

             long Salary;//initializing long variable

             public:

             void GetData();//GetData function

             void PutData();//GetData PutData function

      };
      void Employee :: GetData()          //Statement 1 : Defining GetData()
      {
              
              cout<<"\n\tEnter Employee Name : ";//asking employee name from the user
             cin>>Name;//taking employee name from the user as input
             cout<<"\n\tEnter Employee Age : ";//asking employee age from the user
             cin>>Age;//taking employee age from the user as input
             cout<<"\n\tEnter Employee Designation:";//asking employee designation from the user
            cin>>Desg;//taking employee designation as input form the user
             cout<<"\n\tEnter Employee Salary : ";//asking employee salary from the user
             cin>>Salary;//taking employee salary as input from the user

      }
      void Employee :: PutData()          //Statement 2 : Defining PutData()

      {

             cout<<"\nEmployee Name : "<<Name;//printing the employee name

             cout<<"\nEmployee Age : "<<Age;//printing the employee age

             cout<<"\nEmployee Designation:"<<Desg;//prinitng the employee designation

             cout<<"\nEmployee Salary : "<<Salary;//printing the employee salary

      }
      int main()//main function

      {
cout<<"Name-Subham Ghosh\nUID-21BCS4993"<<endl;
             Employee E[5];          //Statement 3 : Creating Object
             int i;//initializing integer variable
             for(i=0;i<5;i++)//for loop
             {
               E[i].GetData();         //Statement 4 : Calling GetData()
             }
             for(i=0;i<5;i++)//for loop
             {
               E[i].PutData();         //Statement 5 : Calling PutData()
             }
             
             return 0;
      }