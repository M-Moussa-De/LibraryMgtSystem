#ifndef PERSONALINFO_H
#define PERSONALINFO_H

#include <string>
using namespace std;
#include "./Address.h"

struct PersonalInfo {
    std::string firstname;
    std::string lastname;
    std::string email;
    std::string phone;
    Address address;

    PersonalInfo(const std::string& firstname, const std::string& lastname,
     const std::string& email, const std::string& phone,
     const Address& address)
    : firstname(firstname), lastname(lastname), email(email), phone(phone), address(address) {}
};
#endif //PERSONALINFO_H