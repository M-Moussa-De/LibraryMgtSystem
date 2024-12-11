#ifndef USER_H
#define USER_H

#include <memory>
#include <string>
#include <vector>
#include "../media/Media.h"
#include "./../structs/Address.h"
#include "./../structs/PersonalInfo.h"

class User {
private:
    std::string firstname;
    std::string lastname;
    std::string email;
    std::string phone;
    Address address;
    std::vector<std::shared_ptr<Media>> borrowedMedia;  // A vector to track borrowed media

public:
    // Constructor
    User(const PersonalInfo& info)
    : firstname(info.firstname), lastname(info.lastname), email(info.email),
    phone(info.phone), address(info.address) {}

    // Destructor
    virtual ~User() = default;

    // Getters
    [[nodiscard]] const std::string& getFirstname() const;
    [[nodiscard]] const std::string& getLastname() const;
    [[nodiscard]] const std::string& getEmail() const;
    [[nodiscard]] const std::string& getPhone() const;
    [[nodiscard]] const std::string& getStreet() const;
    [[nodiscard]] const std::string& getHouseNr() const;
    [[nodiscard]] const std::string& getZip() const;
    [[nodiscard]] const std::string& getCity() const;
    [[nodiscard]] const std::string& getCountry() const;
    [[nodiscard]] const std::vector<std::shared_ptr<Media>>& getBorrowedMedia() const;

    void displayBorrowedMedia() const;

    // Pure virtual function for derived classes to implement
    virtual void displayPersonalInfo() const = 0;
};
#endif //USER_H
