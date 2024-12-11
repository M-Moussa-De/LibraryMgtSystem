#include <iostream>
#include "./../../include/media/EBook.h"

// Getters
[[nodiscard]] std::string EBook::getFileFormat() const { return fileFormat; }
[[nodiscard]] double EBook::getFileSize() const { return fileSize; }

// Override displayDetails method to show ebook-specific info
void EBook::displayDetails() const {
    // Call the base class displayDetails
    Media::displayDetails();

    std::cout << "File format: " << getFileFormat() << std::endl;
    std::cout << "File size: " << getFileSize() << " MB" << std::endl;
}