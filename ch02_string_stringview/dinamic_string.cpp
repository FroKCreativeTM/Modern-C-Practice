#include <iostream>
#include <string>

// ������ C ���
char* copyString(const char* str)
{
	char* result = new char[strlen(str) + 1];
	strcpy(result, str);
	return result;
}

char* appendString(const char* str1, const char* str2, const char* str3)
{
	char* result = new char[strlen(str1) + strlen(str2) + strlen(str3) + 1];
	strcpy(result, str1);
	strcpy(result, str2);
	strcpy(result, str3);
	return result;
}

int main()
{


	return 0;
}