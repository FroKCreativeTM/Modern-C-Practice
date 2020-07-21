#pragma once

#include <vector>
#include "CEmployee.h"

namespace Record 
{
	const int cnFirstEmployeeNumber = 1000;

	class CDataBase
	{
	private:
		std::vector<CEmployee> m_vecEmployee;
		int m_nNextEmployeeNumber = cnFirstEmployeeNumber;

	public : 
		CEmployee& AddEmployee(const std::string& firstName, const std::string& lastName);
		CEmployee& GetEmployee(int employeeNumber);
		CEmployee& GetEmployee(const std::string& firstName, const std::string& lastName);

		void DisplayAll() const;
		void DisplayCurrent() const;
		void DisplayFormer() const;
	};
}

