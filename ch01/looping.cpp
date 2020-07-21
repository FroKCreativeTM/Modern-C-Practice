#include <iostream>
#include <vector>
#include <deque>

#include <initializer_list> 

using namespace std;

// 이니셜라이저 리스트를 이용한 함수
// 이 때 들어오는 
int makeSum(initializer_list<int> list)
{
	int sum = 0;
	for (auto i : list)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int i = 0;
	vector<int> vec(10, 10);

	// 고전적
	for (i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << endl;

	// C++11/14
	for (auto t : vec)
	{
		cout << t << endl;
	}
	cout << endl;

	int sum1 = makeSum({ 10,20,30 });
	int sum2 = makeSum({ 40,50,60,70,80,90 });

	cout << sum1 << endl;
	cout << sum2 << endl;

	// 단 이건 안 된다.
	// 즉 원소중에 다른 자료형이 들어가면 에러가 뜬다.
	// int sum3 = makeSum({10, 20, 3.4});

	return 0;
}