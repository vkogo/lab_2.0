#include<iostream>
using namespace std;
int main()
{
	double a, z1, z2;
	double PI = 4 * atan(1);
	cout << "Enter value A ->  ";
	cin >> a;

	z1 = cos(3 * PI / 8 - a / 4) * cos(3 * PI / 8 - a / 4) - (-cos(11 * PI / 8 + a / 4) * cos(3 * PI / 8 + a / 4));//correct
	z2 = sqrt(2) / 2 * sin(a / 2); //correct

	cout << "RESULT Z1 = " << z1 << endl;
	cout << "RESULT Z2 = " << z2 << endl;
}