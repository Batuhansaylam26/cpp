#include <iostream>
using namespace std;
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
	cout << leng() << endl;
	cout << leng2() << endl;

}

