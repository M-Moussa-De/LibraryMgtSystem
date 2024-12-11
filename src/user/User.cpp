#include <iostream>
#include <string>
#include "./../../include/user/User.h"

// Getters
const std::string& User::getFirstname() const { return firstname; }
const std::string& User::getLastname() const { return lastname; }
const std::string& User::getEmail() const { return email; }
const std::string& User::getPhone() const { return phone; }
const std::string& User::getStreet() const { return address.getStreet(); }
const std::string& User::getHouseNr() const { return address.getHouseNr(); }
const std::string& User::getZip() const { return address.getZip(); }
const std::string& User::getCity() const { return address.getCity(); }
const std::string& User::getCountry() const { return address.getCountry(); }
const std::vector<shared_ptr<Media>>& User::getBorrowedMedia() const { return borrowedMedia; }

// Pure virtual function for derived classes to implement
void User::displayPersonalInfo() const {
  std::cout << "Firstname: " << getFirstname() << std::endl;
  std::cout << "Lastname: " << getLastname() << std::endl;
  std::cout << "Email: " << getEmail() << std::endl;
  std::cout << "Phone: " << getPhone() << std::endl;
  std::cout << "Street: " << getStreet() << std::endl;
  std::cout << "HouseNr: " << getHouseNr() << std::endl;
  std::cout << "Zip: " << getZip() << std::endl;
  std::cout << "City: " << getCity() << std::endl;
  std::cout << "Country: " << getCountry() << std::endl;
}

void User::displayBorrowedMedia() const {
    if (borrowedMedia.empty()) {
        std::cout << "No borrowed media." << std::endl;
        return;
    }

    std::cout << "Borrowed Media:" << std::endl;
    for (const auto& media : borrowedMedia) {
      std::cout << "Title: " << media->getTitle() << std::endl;
      std::cout << "Creator: " << media->getCreator() << std::endl;
      std::cout << "Status: " << media->statusEnumToString(media->getStatus()) << std::endl;
    }
}