#ifndef GUEST_H
#define GUEST_H
#include <chrono>

#include "User.h"
#include "../enums/UserRole.h"

class Guest final : public User {
private:
    Permission accessLevel;  // The level of access the guest has (e.g., "Read-Only", "Full Access")
    std::chrono::system_clock::time_point expirationDate;  // The date and time the guest's access expires

public:
    // Constructor
    Guest(const PersonalInfo &info,
        const std::chrono::system_clock::time_point &expirationDate,
        const Permission &accessLevel = Permission::READ_ONLY)
        : User(info), accessLevel(accessLevel), expirationDate(expirationDate) {}

    // Destructor
    ~Guest() override = default;

    // Getters
    [[nodiscard]] const Permission& getAccessLevel() const;
    [[nodiscard]] const std::chrono::system_clock::time_point& getExpirationDate() const;

    void displayPersonalInfo() const override;
};
#endif //GUEST_H