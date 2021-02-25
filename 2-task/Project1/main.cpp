#include <iostream>

using namespace std;

int Hash_Function(int key) {
	float f;
	float x;
	cout << "enter random number in the range 0 ... 1: ";
	cin >> x;
	cout << endl;
	f = key * x; // multiply the key by a random number in the range 0 ... 1
	f = f - int(f); // take the fractional part
	return 101 * f; 	// return a number in the range 0 ... n-1
}

int main() {


	system("pause");
	return EXIT_SUCCESS;
}