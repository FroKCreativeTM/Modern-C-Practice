#include <iostream>

#include "enum_class.h"
#include "nested_header.h"

int main()
{
	// C++17의 새 기능 중첩 namespace
	MyNetworkLibrary::Networking::FTP::CFTP ftp;

	std::byte b{ 42 };						// 단순히 한 바이트만 저장하는 byte. 의미가 명확하다.

	std::cout << 0b00010001 << std::endl;	// 이진수 값을 출력할 수 있다.
	int n = 0b00010001;						// 다음처럼 저장을 할 수도 있다.

	// static_cast를 이용한 캐스팅 방법
	// 명시적 캐스팅으로 제일 안전한 방법이다.
	float f = 3.14f;
	int t = static_cast<int>(f);

	std::cout << t << std::endl;

	// enum class를 이용한 변수
	enumClassType myEnum = enumClassType::ECT_NONE;

	// C++17부터는 if 문 만에 initializer를 넣는 것이 추가되었다.
	// if(MyNetworkLibrary::Networking::FTP::CFTP innerFPT = MyNetworkLibrary::Networking::FTP::CFTP::getThisFtp(); 
	//		<조건>)

	// 아래와 같은 방식을 break를 안 하며 흘러내리는 것과 같다는 의미에서
	// 폴스루 방식이라고 부른다.
	// 만약 의도적으로 폴스루를 만들었다면 컴파일러에게 미리
	// 아래와 같은 속성을 지정해서 알려줄 수 있다.
	// 또 스위치 또한 initializer를 넣는 것이 가능하다.
	[[__fallthrough]]
	switch (myEnum)
	{
	case enumClassType::ECT_NONE :
		std::cout << "ECT_NONE" << std::endl;
		break;
	case enumClassType::ECT_PLAYER :
		std::cout << "ECT_PLAYER" << std::endl;
		break;
	case enumClassType::ECT_MONSTER :
		std::cout << "ECT_MONSTER" << std::endl;
		break;
	case enumClassType::ECT_NPC :
		std::cout << "ECT_NPC" << std::endl;
		break;
	default:
		break;
	}

	return 0;
}