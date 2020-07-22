#include <iostream>
#include <stdexcept>
#include <exception>

#include "CDataBase.h"

using namespace std;
using namespace Record;

int DisplayMenu();
void DoHire(CDataBase& db);
void DoFire(CDataBase& db);
void DoPromote(CDataBase& db);
void DoDemote(CDataBase& db);

int main()
{
	CDataBase myDB;
	bool done = false;

	while (!done)
	{
		int nSelection = DisplayMenu();

		switch (nSelection)
		{
		case 0 : 
			done = true;
			break;

		case 1:
			DoHire(myDB);
			break;
		case 2:
			DoFire(myDB);
			break;
		case 3:
			DoPromote(myDB);
			break;
		case 4:
			myDB.DisplayAll();
			break;
		case 5:
			myDB.DisplayCurrent();
			break;
		case 6:
			myDB.DisplayFormer();
			break;
		default:
			cerr << "Unknown command." << endl;
			break;
		}
	}

	return 0;
}

int DisplayMenu()
{
	int selection = 0;

	cout << endl;
	cout << "Employee Database" << endl;
	cout << "=================" << endl;
	cout << "1) Hire a new employee" << endl;
	cout << "2) Fire an employee" << endl;
	cout << "3) Promote an employee" << endl;
	cout << "4) List all employees" << endl;
	cout << "5) List all current employees" << endl;
	cout << "6) List all former employees" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "===> ";
	cin >> selection;

	return selection;
}

void DoHire(CDataBase& db)
{
	string firstName;
	string lastName;

	cout << "First name : ";
	cin >> firstName;

	cout << "Last name : ";
	cin >> lastName;

	db.AddEmployee(firstName, lastName);
}

void DoFire(CDataBase& db)
{
	int nEmployeeNumber;

	cout << "Employee number : ";
	cin >> nEmployeeNumber;

	try
	{
		CEmployee& delEmployee = db.GetEmployee(nEmployeeNumber);
		delEmployee.Fire();
		cout << "Employee " << nEmployeeNumber << "terminate." << endl;
	}
	catch (const std::logic_error& err)
	{
		cerr << "Unable to terminate employee : " << err.what() << endl;
	}

}

void DoPromote(CDataBase& db)
{
	int nEmployeeNumber;
	int nRaiseAmount;

	cout << "Employee Number : ";
	cin >> nEmployeeNumber;

	cout << "How mush of a raise : ";
	cin >> nRaiseAmount;

	try
	{
		CEmployee& promoteEmployee = db.GetEmployee(nEmployeeNumber);
		promoteEmployee.Promote(nRaiseAmount);
	}
	catch (const std::logic_error& err)
	{
		cerr << "Unable to promote employee : " << err.what() << endl;
	}
}

void DoDemote(CDataBase& db)
{
}
