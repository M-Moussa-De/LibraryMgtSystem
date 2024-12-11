#include <iostream>
#include "./../../include/user/Staff.h"

// Getters
const std::string& Staff::getJobTitle() const { return jobTitle; }
const std::string& Staff::getDepartment() const { return department; }
const int& Staff::getStaffID() const { return staffID; }

// Override displayDetails method to show Staff-specific info
void Staff::displayPersonalInfo() const {
    User::displayPersonalInfo();

    std::cout << "Job title: " << getJobTitle() << std::endl;
    std::cout << "Department: " << getDepartment() << std::endl;
    std::cout << "Staff ID: " << getStaffID() << std::endl;
}