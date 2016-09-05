#include <iostream>

using namespace std;

int main(){

	char c1,c2;

	cin >> c1 >> c2;

	cout << int(c1)-48 << endl;
	cout << (int)c1-48 << endl;
	cout << int(c2)-48 << endl;

	cout << int(c1)-48 + int(c2)-48;

	cout << endl;

	return 0;
}