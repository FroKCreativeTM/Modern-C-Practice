#include <iostream>
#include <string>

const std::string message = "Test";

int foo() 
{
	return 0;
}

int main() 
{
	// 함수의 리턴 타입을 자동으로 추론해서 넣어주는 키워드이다.
	// 구조적 바인딩, 표현식 타입 추론, 비타입 템플릿 매개변수, decltype, 제네릭에서 자주 사용하는 방식이다.
	auto t = 10;

	// 인수로 지정한 표현식의 타입을 알아낸다.
	decltype(t) y = 20;

	// 이런 식의 함수 표현 또한 가능하다.
	decltype(foo()) z = foo();
}