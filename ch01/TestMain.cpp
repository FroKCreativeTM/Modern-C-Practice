#include <iostream>

#include "CDataBase.h"

using namespace std;
using namespace Record;

int main()
{
	CDataBase myDB;
	CEmployee& emp1 = myDB.AddEmployee("Greg", "Wallis");

	CEmployee& emp2 = myDB.AddEmployee("Marc", "White");
	emp2.SetSalary(10000);

	CEmployee& emp3 = myDB.AddEmployee("John", "Doe");
	emp3.SetSalary(10000);
	emp3.Promote();

	cout << "All employees : " << endl << endl;
	myDB.DisplayAll();

	cout << endl << "Current employees : " << endl << endl;
	myDB.DisplayCurrent();

	cout << endl << "Former employees : " << endl << endl;
	myDB.DisplayFormer();

	return 0;
}