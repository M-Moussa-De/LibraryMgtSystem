#include "./../../include/user/Student.h"

#include <iostream>

// Getters
const std::string& Student::getFaculty() const { return faculty; }
const int& Student::getSemester() const { return semester; }
const int& Student::getMatriculationNr() const { return immatriculationNr; }

// Override displayDetails method to show Student-specific info
void Student::displayPersonalInfo() const {
    User::displayPersonalInfo();

    std::cout << "Semester: " << getSemester() << std::endl;
    std::cout << "MatriculationNr: " << getMatriculationNr() << std::endl;
}