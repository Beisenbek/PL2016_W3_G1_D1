#include <iostream>

using namespace std;

int main(){

	int a,b,c;

	cin >> a >> b >> c;

	cout << char(a) << char(b) << char(c);

	cout << endl;

	string s;

	getline(cin,s);
	getline(cin,s);

	s = s + char(a);
	s = s + char(b);
	s = s + char(c);

	cout << s << " " << s.length();


	return 0;
}