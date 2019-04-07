
#include <iostream>

#include <vector>

using namespace std;
int  number(int num1) {
	int i = 1;
	int j;
	if (num1 <= 1)
		return 0;
	for (j = 2; j <= num1 - 1; j++) {

		if (num1 % j == 0) {

			i = 0;

			break;

		}

	}

	return i;



}

int main() {

	int n;

	vector<int>v;

	cout << "Enter a number: " << endl;

	cin >> n;

	for (int i = 1; i <= n; ++i)

		v.push_back(i);

	for (std::size_t i = 0; i < v.size(); ++i) {

		if (number(v[i]))

			printf("%d is prime\n", v[i]);

	}



}