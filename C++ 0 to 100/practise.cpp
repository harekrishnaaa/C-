#include <iostream>
using namespace std;
class Report {
private:
  int m1,m2,m3,m4,m5;
  int total;
  int average;
public:
  string name;

  int roll;
  void setData(int,int,int,int,int);
  void aver(void);
  void tot(void);
  void getData(){
    cout<<"The name of the student is "<<name<<endl;
    cout<<"The average of the 5 subjects are "<<average<<endl;
    cout<<"The roll number of the student is "<<roll<<endl;
    cout<<"The total of the 5 subjects is "<<total<<endl;
  }
};
void Report:: tot(void)
{
  total=m1+m2+m3+m4+m5;
}
void Report :: setData(int mm1,int mm2,int mm3,int mm4,int mm5){
  m1=mm1;
  m2=mm2;
  m3=mm3;
  m4=mm4;
  m5=mm5;
}
void Report::aver(void){
  average=total/5;
}

int main()
{

  Report Shubham;
  Shubham.name="Shubham";
  Shubham.roll=214993;

  Shubham.setData(78,98,78,68,98);
  Shubham.tot();
  Shubham.aver();
  Shubham.getData();

  return 0;
}
