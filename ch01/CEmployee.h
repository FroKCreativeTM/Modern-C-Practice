#pragma once		// ���� ������ ���� �� �ҷ����� �ʰ� ���ش�.

#include <string>


namespace Record
{
	const int cnDefaultStartingSalary = 30000;

	class CEmployee
	{
	private : 
		std::string m_strFirstName;
		std::string m_strLastName;
		int m_nEmployeeNumber = -1;
		int m_nSalary = cnDefaultStartingSalary;
		bool m_bHired = false;

	public : 
		CEmployee() = default;
		CEmployee(const std::string& firstName, const std::string& lastName);
		~CEmployee();

	public : 
		void Promote(int raiseAmount = 1000);
		void Demote(int demeritAmount = 1000);
		void Hire();
		void Fire();
		void Display() const;

	public :
		// get, set
		const std::string& GetFirstName() const;
		void SetFirstName(const std::string& firstName);
		const std::string& GetLastName() const;
		void SetLastName(const std::string& lastName);
		int GetEmployeeNumber() const;
		void SetEmployeeNumber(int employeeNumber);
		int GetSalary() const;
		void SetSalary(int newSalary);
		bool IsHired() const;
	};
}
