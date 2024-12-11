#include <iostream>
#include "./../../include/user/Guest.h"

// Getters
const Permission& Guest::getAccessLevel() const { return accessLevel; }
const std::chrono::system_clock::time_point& Guest::getExpirationDate() const { return expirationDate; }

// Override displayDetails method to show Guest-specific info
void Guest::displayPersonalInfo() const {
  User::displayPersonalInfo();  // Call base class method to display general user info

  // Display specific guest details
  std::cout << "Access Level: " << static_cast<int>(getAccessLevel()) << std::endl;

  // Convert expiration time to a human-readable format
  const std::time_t expiration_time = std::chrono::system_clock::to_time_t(getExpirationDate());
  // Prints a readable time
  std::cout << "Access Expiration: " << std::ctime(&expiration_time);
}