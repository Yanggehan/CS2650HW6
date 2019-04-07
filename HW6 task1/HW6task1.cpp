#include<iostream>
using namespace std;
template <class T>
T min(T num1, T num2)
{
	if (num1 < num2)
		return num1;
	else
		return num2;
}
template <class T>
T max(T num1, T num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
int main()
{
	int num1, num2;
	double num3, num4;
	cout << "testing int type" << endl;
	cout << "enter first int" << endl;
	cin >> num1;
	cout << "enter second int" << endl;
	cin >> num2;
	cout << "\n minimum is :" << min(num1, num2) << endl;
	cout << "\n maximum is :" << max(num1, num2) << endl;
	cout << "testing double type" << endl;
	cout << "enter first double" << endl;
	cin >> num3;
	cout << "enter second double" << endl;
	cin >> num4;
	cout << "\n minimum is :" << min(num3, num4) << endl;
	cout << "\n maximum is :" << max(num3, num4) << endl;

}