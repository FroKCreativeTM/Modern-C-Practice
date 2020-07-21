#include <iostream>
#include <stdexcept>

#include "CDataBase.h"

using namespace std;

namespace Record 
{
    CEmployee& Record::CDataBase::AddEmployee(const std::string& firstName, const std::string& lastName)
    {
        CEmployee theEmployee(firstName, lastName);
        theEmployee.SetEmployeeNumber(m_nNextEmployeeNumber);
        theEmployee.Hire();
        m_vecEmployee.push_back(theEmployee);
        return m_vecEmployee[m_vecEmployee.size() - 1];
    }

    CEmployee& Record::CDataBase::GetEmployee(int employeeNumber)
    {
        for (auto employee : m_vecEmployee)
        {
            if (employee.GetEmployeeNumber() == employeeNumber)
            {
                return employee;
            }
        }
        throw logic_error("No employee found");
    }

    CEmployee& Record::CDataBase::GetEmployee(const std::string& firstName, const std::string& lastName)
    {
        for (auto employee : m_vecEmployee)
        {
            if (employee.GetFirstName() == firstName && employee.GetLastName() == lastName)
            {
                return employee;
            }
        }
        throw logic_error("No employee found");
    }

    void Record::CDataBase::DisplayAll() const
    {
        for (const auto& employee : m_vecEmployee)
        {
            employee.Display();
        }
    }

    void Record::CDataBase::DisplayCurrent() const
    {
        for (const auto& employee : m_vecEmployee)
        {
            if (employee.IsHired())
            {
                employee.Display();
            }
        }
    }

    void Record::CDataBase::DisplayFormer() const
    {
        for (const auto& employee : m_vecEmployee)
        {
            if (!employee.IsHired())
            {
                employee.Display();
            }
        }
    }
}