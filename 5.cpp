#include <iostream>
#include <map>

using namespace std;

int main(){

	string s;

	cin >> s;

	std::map<string, string> m;

	m["hellp"]="heeelp!";
	m["hello"]="hi!";

	cout << m[s];

	return 0;
}