#include <iostream>

using namespace std;

int main(){

	int a;

	cin >> a;

	cout << (1.0*a)/2 << endl;
	cout << double(a)/2 << endl;
	cout << (double)a/2 << endl;
	cout << static_cast<double>(a)/2;

	cout << endl;

	return 0;
}