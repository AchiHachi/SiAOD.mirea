#include <iostream>
using namespace std;

// The task was completed by a student 
// of the INBO-09-20 group
// Babichev Ilia Igorevich

void outBits(unsigned int x) {
	int digit = sizeof(int) * 4;
	unsigned maska = (1 << (digit - 1));
	for (int i = 1; i <= digit; i++) {
		cout << ((x & maska) >> (digit - i));
		maska = maska >> 1;
	}
}

int AddBits(int x) {
	int mask = 0xAAAA;
	cout << "Mask = ";
	outBits(mask);
	cout << endl;
	x = mask | x;
	return x;
}

int DeleteBits() {
	int mask = 0xFC3F;
	int num;
	cout << "Mask = ";
	outBits(mask);
	cout << endl;
	cout << "Input number: ";
	cin >> num;
	outBits(num);
	cout << endl;
	num = mask & num;
	return num;
}

int Multiplication() {
	int num;
	int N = 5;

	cout << "Enter an integer: ";
	cin >> num;
	cout << "Input number: ";
	outBits(num);
	cout << endl;
	return num << N;
}

int Division() {
	int num;
	int N = 5;

	cout << "Enter an integer: ";
	cin >> num;
	cout << "Input number: ";
	outBits(num);
	cout << endl;
	return num >> N;
}

int EditBits() {
	int mask = 0x8000;
	cout << endl;
	outBits(mask);
	int num, n;

	cout << "Enter an integer: ";
	cin >> num;
	cout << "Input number: ";
	outBits(num);
	cout << endl;

	cout << "What bit are we changing? Enter the number(0-15): ";
	cin >> n;
	mask = mask >> 15 - n;
	return num | mask;
}

int main() {
	const int xZero = 0x0;
	int x = xZero;
	cout << "First task: " << endl;
	x = AddBits(x);
	cout << "Result = ";
	outBits(x);

	cout << endl;

	cout << endl << "Second task: " << endl;
	x = DeleteBits();
	cout << "Result = ";
	outBits(x);

	cout << endl;

	cout << endl << "Third task: " << endl;
	x = Multiplication();
	cout << "Result = ";
	outBits(x);

	cout << endl;

	cout << endl << "Fourth task: " << endl;
	x = Division();
	cout << "Result = ";
	outBits(x);

	cout << endl;

	cout << endl << "Fifth task: " << endl;
	x = EditBits();
	cout << "Result = ";
	outBits(x);

}
