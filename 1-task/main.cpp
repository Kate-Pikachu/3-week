#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {

	auto begin_1 = steady_clock::now();

	set<int> st;
	st.insert(1);
	st.insert(3);
	st.insert(5);
	st.insert(7);
	st.insert(9);

	auto end_1 = steady_clock::now();
	auto delta_1 = duration_cast<nanoseconds>(end_1 - begin_1);
	std::cout << "Time in first case: " << delta_1.count() << " nanoseconds" << std::endl;
	 
	
	auto begin_2 = steady_clock::now();
	array<int,5> arr = { 1,3,5,7,9 };
	sort(arr.begin(), arr.end());
	auto end_2 = steady_clock::now();
	auto delta_2 = duration_cast<nanoseconds>(end_2 - begin_2);
	std::cout << "Time in second case (with array): " << delta_2.count() << " nanoseconds" << std::endl;


	auto begin_3 = steady_clock::now();
	vector<int> vec = { 1,3,5,7,9 };
	sort(vec.begin(), vec.end());
	auto end_3 = steady_clock::now();
	auto delta_3 = duration_cast<nanoseconds>(end_3 - begin_3);
	std::cout << "Time in third case (with vector): " << delta_3.count() << " nanoseconds" << std::endl;

	//удивительно, но получилась следующая таблица лидеров:
	// 1 место: вектор
	// 2 место: массив
	// 3 место: множество


	system("pause");
	return EXIT_SUCCESS;
}