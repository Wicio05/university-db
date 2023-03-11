#pragma once
#include <string>

enum class Gender
{
    Male,
    Female
};

class Student
{
public:
    Student(
        std::string name, 
        std::string lastName, 
        std::string adrress, 
        int ID, 
        std::string pesel,
        Gender gender);

    Gender g;
};