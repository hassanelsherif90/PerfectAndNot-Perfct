#include <iostream>
#include <string>

using namespace std;



float ReadPosativeNumber(string Message) {

	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

bool CheckNumber(int Number) {
	int sum = 0;
	for (int i = 1; i < Number; i++) {
		if (Number % i == 0) {
			sum += i;
		}

	}
	return Number == sum;
}


void Result(int Number) {
	if (CheckNumber(Number))
	{
		cout << Number <<"  Is Perfect " << endl;
	}
	else {
		cout << Number << " Is Not Perfect " << endl;
	}
}
int main() {

	Result(ReadPosativeNumber("Please Enter Posative "));

	return 0;
}