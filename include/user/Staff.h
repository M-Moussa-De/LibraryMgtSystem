#ifndef STAFF_H
#define STAFF_H

#include "User.h"

class Staff final : User {
private:
    std::string jobTitle;
    std::string department;
    int staffID;

public:
    // Constructor
    Staff(const PersonalInfo &info, const std::string &jobTitle, const std::string &department, const int staffID)
     : User(info), jobTitle(jobTitle), department(department), staffID(staffID) {}

    // Destructor
    ~Staff() override = default;

    // Getters
    [[nodiscard]] const std::string& getJobTitle() const;
    [[nodiscard]] const std::string& getDepartment() const;
    [[nodiscard]] const int& getStaffID() const;

    // Display staff-specific info
    void displayPersonalInfo() const override;
};
#endif //STAFF_H
