#include <iostream>
#include <chrono>
#include <vector>
#include <random>

std::size_t Hash_Function(float k) {

	//float f;
	//f = k * 0.57; // multiply the key by a random number in the range 0 ... 1
	//f = f - int(f); // take the fractional part
	//return 2 * f;
	return (unsigned&) k % 101;
}

int main() {
	using namespace std::chrono;
	float q = 1.23;

	auto begin_1 = steady_clock::now();
	std::cout << "result: " <<Hash_Function(q) << std::endl;
	auto end_1 = steady_clock::now();
	auto delta_1 = duration_cast<nanoseconds>(end_1 - begin_1);
	std::cout << "Time: " << delta_1.count() << " nanoseconds" << std::endl;


	std::random_device rd;
	std::mt19937 mersenne(rd());

	std::vector<float> vec;

	for (auto i = 0; i < 100; i++) {
		vec.push_back(static_cast<float>(mersenne()));
	}
	std::sort(vec.begin(), vec.end());
	std::cout << "number		hash" << std::endl;
	auto num = 1;
	for (auto i = 0; i < 100; i++) {
		std::cout << num << "		 " << Hash_Function(i) << std::endl;
		++num;
	}

	system("pause");
	return EXIT_SUCCESS;
}