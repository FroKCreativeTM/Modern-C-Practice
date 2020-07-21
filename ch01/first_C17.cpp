#include <iostream>

#include "enum_class.h"
#include "nested_header.h"

int main()
{
	// C++17�� �� ��� ��ø namespace
	MyNetworkLibrary::Networking::FTP::CFTP ftp;

	std::byte b{ 42 };						// �ܼ��� �� ����Ʈ�� �����ϴ� byte. �ǹ̰� ��Ȯ�ϴ�.

	std::cout << 0b00010001 << std::endl;	// ������ ���� ����� �� �ִ�.
	int n = 0b00010001;						// ����ó�� ������ �� ���� �ִ�.

	// static_cast�� �̿��� ĳ���� ���
	// ����� ĳ�������� ���� ������ ����̴�.
	float f = 3.14f;
	int t = static_cast<int>(f);

	std::cout << t << std::endl;

	// enum class�� �̿��� ����
	enumClassType myEnum = enumClassType::ECT_NONE;

	// C++17���ʹ� if �� ���� initializer�� �ִ� ���� �߰��Ǿ���.
	// if(MyNetworkLibrary::Networking::FTP::CFTP innerFPT = MyNetworkLibrary::Networking::FTP::CFTP::getThisFtp(); 
	//		<����>)

	// �Ʒ��� ���� ����� break�� �� �ϸ� �귯������ �Ͱ� ���ٴ� �ǹ̿���
	// ������ ����̶�� �θ���.
	// ���� �ǵ������� �����縦 ������ٸ� �����Ϸ����� �̸�
	// �Ʒ��� ���� �Ӽ��� �����ؼ� �˷��� �� �ִ�.
	// �� ����ġ ���� initializer�� �ִ� ���� �����ϴ�.
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