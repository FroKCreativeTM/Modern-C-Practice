#include <iostream>
#include <stdexcept>

using namespace std;

double divideNumber(double numerator, double denominator) 
{
	if (denominator == 0) 
	{
		throw invalid_argument("Denominator cannot be 0");
	} 
	return numerator / denominator;
}

int main() 
{
	try
	{
		cout << divideNumber(2.5, 0.5) << endl;
		cout << divideNumber(2.3, 0.0) << endl;
		cout << divideNumber(4.5, 2.5) << endl;
	}
	catch (const std::invalid_argument& exception)
	{
		cout << "Exception caught : " << exception.what() << endl;
	}

	return 0;
}