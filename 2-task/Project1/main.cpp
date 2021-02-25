#include <iostream>

std::size_t Hash_Function(float key) {

	float f;

	f = key * 0.57; // multiply the key by a random number in the range 0 ... 1
	f = f - int(f); // take the fractional part
	return 2 * f;
}

int main() {

	float q = 1.23;
	std::cout << "result: " <<Hash_Function(q) << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}