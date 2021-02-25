#include <iostream>
#include <array>
#include <unordered_set>

using namespace std;

int Hash_Function(float key) {
	float f;
	float x;
	cout << "enter random number in the range 0 ... 1: ";
	cin >> x;
	cout << endl;
	f = key * x; // multiply the key by a random number in the range 0 ... 1
	f = f - int(f); // take the fractional part
	return 6 * f; 	// return a number in the range 0 ... n-1
}

int main() {
	//array<float,3> arr = { 1.345, 2.4, 5.3 };

	unordered_set<float> st;
	st.insert(1);
	st.insert(3);
	st.insert(5);
	st.insert(7);
	st.insert(9);

	Hash_Function(st);
	cout << "end" << endl;

	system("pause");
	return EXIT_SUCCESS;
}