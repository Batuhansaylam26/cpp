#include <iostream>
using namespace std;
/*
int main() {
	cout << "Hello World! " << endl;
	cout << "Hello" << endl;
	cout << "World" << endl;
	int num = 5 + 4 + 3;
	cout << num << endl ;
	cout << 3 + 4 + 5 << endl;

	return 0;
}
*/

double balance = 10000.00;
double interest_rate = 0.05;
double account() {
	for (int i = 1;i < 5;i++) {
		double interest = balance * interest_rate;
		balance = balance + interest;
	}
	return balance;
};
float balance1 = 10000.00f;
float interest_rate1 = 0.05;
float account1() {
	for (int i = 1;i < 5;i++) {
		float interest1 = balance1 * interest_rate1;
		balance1 = balance1 + interest1;
	}
	return balance1;
};
string name = "Batuhan SAYLAM";
int leng() {
	return name.length();
}
int leng2() {
	string name = "Batuhan SAYLAM";
	return name.length();
}
// main method has to be in the end of the class (page)
void main() {
	cout << "Hello World! " << endl;
	cout << "Hello" << endl;
	cout << "World" << endl;
	int num = 5 + 4 + 3;
	cout << num << endl;
	cout << 3 + 4 + 5 << endl;
	double AccountReturn = account();
	cout << AccountReturn << endl;
	cout << account1() << endl;
	cout << leng() << endl;
	cout << leng2() << endl;

}

