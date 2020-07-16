#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void main() {
	//comment
	/*multi
	line
	comment
	*/
	string fblthp;
	int x = 1, y = 2, z = 3;
	cout << "Hello World! \n";
	getline(cin, fblthp);
	cout << fblthp << " concatenated to this string. \n";
	cout << fblthp.length() << "\n";
	cout << fblthp[0] << "\n";
	fblthp[0] = 'J';
	cout << fblthp << "\n";
	cout << (1 < 2);
}