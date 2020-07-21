#include <iostream>
using namespace std;

struct Employee
{
	int age;
	double sale;
};

int main()
{
	// �����ͷ� ����Ű�� ����� �������� ����ų� ������ ��
	// �Ҵ�� �޸𸮳� ���ҽ��� �ڵ����� �����ȴ�.
	// �׷��⿡ ���� return ���� ����ǰų� exception�� ����ȴٰ� �ص�
	// �Ҵ�� �޸𸮳� ���ҽ��� ������ �� �ִٴ� ���� ���п�
	// ���� �Լ��� return ���� ���ٰ� �ص� ������ ���ҽ��� �����ϴ� �ڵ带 
	// �ۼ��� �ʿ䰡 ���� ������ �Լ��� �����ϰ� �ۼ��� �� �ִ�
	// ���� ����� make_unique �Լ��̴�. (C++14)
	auto tEmployee = make_unique<Employee>;

	// �� ���� ���� ( ~ C++11) - ���� ���ݵ� ��� ����
	std::unique_ptr<Employee> tEmployee2(new Employee);

	// ����Ʈ �����ʹ� �Ϲ��� �����Ϳ� ������� ����.
	if (tEmployee2) {
		cout << "tEmployee2�� �����Ǿ��ִ� ��ü�Դϴ�." << endl;
	}

	// �迭���� ��� �����ϴ�.
	// ������ ���� ���� Employee ��ü�� 10�� ������ �Ͱ� ����.
	auto arrEmp = make_unique<Employee[]>(10);

	// shared_ptr�� �����͸� �����ϴ� �������̴�.
	// �� �����Ϳ� ���� ���� ������ �߻��Ѵٸ�, ���۷��� ī���Ͱ� �����Ѵ�.
	// �׷��� �����ʹ� ���۷��� ī���� ��ŭ ���(����)�ϰ� �ִٴ� ���� �ȴ�.
	// ���� shared_ptr�� �������� ����ٸ�, ī���ʹ� �����ϸ�, 0�� �ȴٸ� �����͸� 
	// ������ �ִ� �����͸� �ƹ��� �� ������ �ֱ� ������ ��ü�� �����ȴ�.
	// ���� ����� make_shared�� �̿��ؼ� �����ϸ� unique_ptr�� ��� ����� ����.
	auto stEmployee = make_shared<Employee>();

	// C++17���ʹ� shared_ptr ���� �迭 ������ ����������.
	// �� make_shared�� �̿����� �ʰ� �������� ������ �ؾ��Ѵ�. 
	std::shared_ptr<Employee[]> arrSharedEmp(new Employee[10]);
	cout << "Salary : " << arrSharedEmp[0].sale << endl;

	return 0;
}