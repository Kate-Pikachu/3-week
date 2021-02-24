#include <iostream>
#include <array>
#include <set>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {

	auto begin_1 = steady_clock::now();

	set<int> st;
	st.insert(1);
	st.insert(3);
	st.insert(5);
	st.insert(7);
	st.insert(9);

	auto end_1 = steady_clock::now();

	auto delta_1 = duration_cast<milliseconds>(end_2 - begin_2);
	std::cout << "Time in second case: " << delta_1.count() << " milliseconds" << std::endl;

	
	auto begin_2 = steady_clock::now();

	array<int,5> arr = { 1,3,5,7,9 };
	sort(arr.begin(), arr.end());

	auto end_2 = steady_clock::now();

	auto delta_2 = duration_cast<milliseconds>(end_2 - begin_2);
	std::cout << "Time in second case: " << delta_2.count() << " milliseconds" << std::endl;

	system("pause");
	return EXIT_SUCCESS;
}