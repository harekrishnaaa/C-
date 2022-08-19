#include <iostream>//standard input output stream
using namespace std;
    int main()
    {
    int subjects, i; //initializing variables

    float marks, total=0.0f, averageMarks, percentage;//initializng variables

        // Input number of subjects
         cout<<"Name-Subham Ghosh\n"<<"UID-21BCS4993"<<endl;//Details
         cout << "Enter number of subjects:\n"; //asking number of subjects from user

    cin >> subjects; //taking  number of subjects as input from user5

        

    cout << "Enter marks of subjects:\n";//asking marks of subjects from user

        for(i = 0; i < subjects; i++){//running for loop in order to get marks for

       cin >> marks;//taking marks as input

       total += marks;//getting total of marks 

    }

         // Calculate Average

    averageMarks = total / subjects;//finding out the average 

    cout << "Total Marks = "<< total; //printing the total marks 

    cout << "\nAverage Marks = "<< averageMarks; //printing the total Average marks

        return 0; 

}