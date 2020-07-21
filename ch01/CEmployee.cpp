#include <iostream>
#include "CEmployee.h"

Record::CEmployee::CEmployee(const std::string& firstName, const std::string& lastName)
    : m_strFirstName(firstName), m_strLastName(lastName)
{
}

Record::CEmployee::~CEmployee()
{
}

void Record::CEmployee::Promote(int raiseAmount)
{
    SetSalary(GetSalary() + raiseAmount);
}

void Record::CEmployee::Demote(int demeritAmount)
{
    SetSalary(GetSalary() - demeritAmount);
}

void Record::CEmployee::Hire()
{
    m_bHired = true;
}

void Record::CEmployee::Fire()
{
    m_bHired = false;
}

void Record::CEmployee::Display() const
{
    std::cout << "Employee Name : " << GetLastName() << ", " << GetFirstName() << std::endl;
    std::cout << "===========================================" << std::endl;
    std::cout << (IsHired() ? "Current Employee" : "Former Employee") << std::endl;
    std::cout << "Employee Number : " << GetEmployeeNumber() << std::endl;
    std::cout << "Salary : $" << GetSalary() << std::endl;
    std::cout << std::endl;
}

const std::string& Record::CEmployee::GetFirstName() const
{
    // TODO: 여기에 return 문을 삽입합니다.
    return m_strFirstName;
}

void Record::CEmployee::SetFirstName(const std::string& firstName)
{
    m_strFirstName = firstName;
}

const std::string& Record::CEmployee::GetLastName() const
{
    // TODO: 여기에 return 문을 삽입합니다.
    return m_strLastName;
}

void Record::CEmployee::SetLastName(const std::string& lastName)
{
    m_strLastName = lastName;
}

int Record::CEmployee::GetEmployeeNumber() const
{
    return m_nEmployeeNumber;
}

void Record::CEmployee::SetEmployeeNumber(int employeeNumber)
{
    m_nEmployeeNumber = employeeNumber;
}

int Record::CEmployee::GetSalary() const
{
    return m_nSalary;
}

void Record::CEmployee::SetSalary(int newSalary)
{
    m_nSalary = newSalary;
}

bool Record::CEmployee::IsHired() const
{
    return m_bHired;
}
