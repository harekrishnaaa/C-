#include<iostream>
using namespace std;
class calculate {
public:
	float m1, m2;
	//		float div1,div2;
	float mul(float,float);
	float div(float,float);
//	float setValue(){
//		cout << "Enter two numbers: " << endl;
//	cin >> m1 >> m2;
//	}
	void getResult(void);
	
};
void calculate::getResult() {

	cout << "The multiplication of two numbers are: " << mul(m1, m2) << endl;
	cout << "The division of the two numbers are: " << div(m1, m2) << endl;

}
inline float calculate::div(float c, float d) {
	return(m1 / m2);
}
inline float calculate::mul(float a, float b) {
	return(m1 * m2);
}
//void calculate::setValue() {
//	cout << "Enter two numbers: " << endl;
//	cin >> m1 >> m2;
//}
int main()
{
	calculate a;
//	a.setValue();
	a.mul(2,3);
	a.div(4,5);

	a.getResult();
	return 0;

}
