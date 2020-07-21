#include <iostream>
#include <array>

struct Point { double dx, dy, dz; };

int main()
{
	// std::array �迭
	std::array<int, 3> values = { 11,22,33 };

	// C++17 ������ ���ε�
	auto [x, y, z] = values;

	Point point;
	point.dx = 1.0;
	point.dy = 2.0;
	point.dz = 3.0;

	// ����ü�� ���嵵 �����ϴ�.
	// �� ��� ����� non-static�ϰ� public�ϴٸ� �̷� ������ ������ �����ϴ�.
	auto [dx, dy, dsz] = point;

	return 0;
}