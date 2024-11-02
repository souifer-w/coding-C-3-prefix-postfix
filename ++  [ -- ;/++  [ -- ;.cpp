#include <iostream>
using namespace std;

int main() {
	int A = 10;
	int B = A++;
	cout << " B =" << B << endl;
	cout << " A =" << A << endl;
	
	B = ++A;
	cout << "B =" << B << endl;
	cout << " A =" << A << endl;

	return 0;
}