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


//No uppercase method for  string but exists for char 


string ReplaceString() {
	string name = "Batuhan SAYLAM";
	return name.replace(0, 7, "Yafes");
}
// main method has to be in the end of the class (page)
void main() {
	cout << leng() << endl;
	cout << leng2() << endl;
	cout << ReplaceString() << endl;
}

