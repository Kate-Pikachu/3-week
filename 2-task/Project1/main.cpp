#include <iostream>

using namespace std;

int Hash_Function(int key) {
	static RandomNumber rnd;
	float f;

	f = key * rnd.fRandom(); // умножить ключ на случайное число из диапазона 0...1
	f = f - int(f); // взять дробную часть
	return 701 * f; 	// возвратить число в диапазоне 0...n-1
}

int main() {

}