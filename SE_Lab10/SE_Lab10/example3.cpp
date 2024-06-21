#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	setlocale(LC_ALL, "ru");
	std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target1 = 3;
	int num_items1 = count(v.begin(), v.end(), target1);

	std::cout << "�����: " << target1 << " ����������: " << num_items1 << '\n';

	int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
	
	std::cout << "���������� ���������, ������� 3: " << num_items3 << '\n';

	std::cout << std::endl << "������, ������ ����������: " << std::endl;
	for (auto i : v) [i]() {if (i % 3 == 0) std::cout << i << " "; }();
	
	std::cout << std::endl << "������ � �����������: " << std::endl;
	for (auto i : v) [](auto i) {if (i % 3 == 0) std::cout << i << " "; }(i);
	
	std::cout << std::endl << "������ ��� ����������: " << std::endl;
	for (auto i : v) [i] {if (i % 3 == 0) std::cout << i << " "; }();

	return 0;
}