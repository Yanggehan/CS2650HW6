#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
	string name;
	int number;
	string date;
public: 
	Employee()
	{
		name = "";
		number = 0;
		date = "";
	}
	Employee(string name1, int number1, string date1)
{
	name = name1;
	number = number1;
	date = date1;
	
}
class  InvalidEmployeeNumber  {

		};
		void setname(string name1) { name = name1; }
		void setnumber(int num1) { 
			if (num1 < 0 || num1>9999)
				throw  InvalidEmployeeNumber();
			else
				number = num1;
		}
		void setdate(string date1) { date = date1; }
		string getname() { return name; }
		int getnumber() { return number; }
		string getdate() { return date; }
};
class productionworke : public Employee
{
private: int shift;
		 double pay;
public:
	productionworke(int shift1, double pay1) {
		shift = shift1;
		pay = pay1;
	}
	class InvalidShift {};
	class InvalidPayRate {};
	void setShift(int shift1) {
		if (shift < 0 || shift1>2) {
			throw  InvalidShift();
		}
		else
			shift = shift1;
	}
	void setpay(double pay1) {
		if (pay1 <1) {
			throw  InvalidPayRate();
		}
		else
			pay = pay1;
	}
	int getshift() { return shift; }
	double getpay() { return pay; }

};
int main() {
	int num1,shift1;
	double pay1;
	string name1, date1;
	cout << "enter the name" << endl;
	cin >> name1;
	cout << "enter the number" << endl;
	cin >> num1;
	cout << "enter the date" << endl;
	cin >> date1;
	cout << "enter the shift" << endl;
	cin >> shift1;
	cout << "enter the pay" << endl;
	cin >> pay1;
	
	Employee Employee1(name1, num1, date1);
	productionworke productionworke1(shift1, pay1);
	try {
		
		Employee1.setnumber(num1);
		productionworke1.setShift(shift1);
		productionworke1.setpay(pay1);
		
	}
	catch (Employee::InvalidEmployeeNumber)
	{
		cout << "Invalid Employee Number " << endl;
	}
	catch (productionworke::InvalidShift)
	{
		cout << "Invalid shift " << endl;
	}
	catch (productionworke::InvalidPayRate)
	{
		cout << "Invalid pay " << endl;
	}
	cout << "name : " << Employee1.getname() << endl;
	cout << "number : " << Employee1.getnumber() << endl;
	cout << "date : " << Employee1.getdate() << endl;
	cout << "shift : " << productionworke1.getshift() << endl;
	cout << "pay : " << productionworke1.getshift() << endl;
}