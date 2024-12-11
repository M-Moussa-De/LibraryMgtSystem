#include <iostream>
#include "./../../include/media/Newsletter.h"

// Getters
int Newsletter::getIssueNumber() const { return issueNumber; }
int Newsletter::getNumPages() const { return numPages; }
std::string Newsletter::getTargetAudience() const { return targetAudience; }

// Override displayDetails method to show CD-specific info
void Newsletter::displayDetails() const {
  // Call the base class displayDetails
  Media::displayDetails();

  std::cout << targetAudience << std::endl;
  std::cout << numPages << std::endl;
  std::cout << issueNumber << std::endl;
}