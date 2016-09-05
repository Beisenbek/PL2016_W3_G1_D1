#include <iostream>

using namespace std;

int main(){

	char c;

	cin >> c;

	int x = (int)c;

	if( x < 58 && x > 47){
		cout << "yes";
	}else{
		cout << "no";	
	}

	return 0;
}