#include <iostream>
#include <string>

const std::string message = "Test";

int foo() 
{
	return 0;
}

int main() 
{
	// �Լ��� ���� Ÿ���� �ڵ����� �߷��ؼ� �־��ִ� Ű�����̴�.
	// ������ ���ε�, ǥ���� Ÿ�� �߷�, ��Ÿ�� ���ø� �Ű�����, decltype, ���׸����� ���� ����ϴ� ����̴�.
	auto t = 10;

	// �μ��� ������ ǥ������ Ÿ���� �˾Ƴ���.
	decltype(t) y = 20;

	// �̷� ���� �Լ� ǥ�� ���� �����ϴ�.
	decltype(foo()) z = foo();
}