#include <iostream>
using namespace std;

struct Employee
{
	int age;
	double sale;
};

int main()
{
	// 포인터로 가리키는 대상이 스코프를 벗어나거나 삭제될 때
	// 할당된 메모리나 리소스도 자동으로 삭제된다.
	// 그렇기에 만약 return 문이 실행되거나 exception이 실행된다고 해도
	// 할당된 메모리나 리소스를 해제할 수 있다는 장점 덕분에
	// 만약 함수에 return 문이 많다고 해도 각각에 리소스를 해제하는 코드를 
	// 작성할 필요가 없기 때문에 함수를 간결하게 작성할 수 있다
	// 생성 방법은 make_unique 함수이다. (C++14)
	auto tEmployee = make_unique<Employee>;

	// 그 이전 버전 ( ~ C++11) - 물론 지금도 사용 가능
	std::unique_ptr<Employee> tEmployee2(new Employee);

	// 스마트 포인터는 일반적 포인터와 사용방법이 같다.
	if (tEmployee2) {
		cout << "tEmployee2는 생성되어있는 객체입니다." << endl;
	}

	// 배열에도 사용 가능하다.
	// 다음과 같이 쓰면 Employee 객체를 10개 생성한 것과 같다.
	auto arrEmp = make_unique<Employee[]>(10);

	// shared_ptr은 데이터를 공유하는 포인터이다.
	// 이 포인터에 대한 대입 연산이 발생한다면, 레퍼런스 카운터가 증가한다.
	// 그래서 데이터는 레퍼런스 카운터 만큼 사용(소유)하고 있다는 뜻이 된다.
	// 만약 shared_ptr가 스코프를 벗어난다면, 카운터는 감소하며, 0이 된다면 데이터를 
	// 가지고 있는 데이터를 아무도 안 가지고 있기 때문에 객체는 해제된다.
	// 생성 방법은 make_shared를 이용해서 생성하며 unique_ptr과 사용 방법은 같다.
	auto stEmployee = make_shared<Employee>();

	// C++17부터는 shared_ptr 또한 배열 생성이 가능해졌다.
	// 단 make_shared를 이용하지 않고 고전적인 선언을 해야한다. 
	std::shared_ptr<Employee[]> arrSharedEmp(new Employee[10]);
	cout << "Salary : " << arrSharedEmp[0].sale << endl;

	return 0;
}