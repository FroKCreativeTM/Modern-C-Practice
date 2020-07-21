#include <iostream>
#include <array>

struct Point { double dx, dy, dz; };

int main()
{
	// std::array 배열
	std::array<int, 3> values = { 11,22,33 };

	// C++17 구조적 바인딩
	auto [x, y, z] = values;

	Point point;
	point.dx = 1.0;
	point.dy = 2.0;
	point.dz = 3.0;

	// 구조체의 저장도 가능하다.
	// 즉 모든 멤버가 non-static하고 public하다면 이런 식으로 저장이 가능하다.
	auto [dx, dy, dsz] = point;

	return 0;
}