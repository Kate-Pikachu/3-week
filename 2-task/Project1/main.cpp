#include <iostream>

using namespace std;

int Hash_Function(int key) {
	static RandomNumber rnd;
	float f;

	f = key * rnd.fRandom(); // �������� ���� �� ��������� ����� �� ��������� 0...1
	f = f - int(f); // ����� ������� �����
	return 701 * f; 	// ���������� ����� � ��������� 0...n-1
}

int main() {

}