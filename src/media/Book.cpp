#include <iostream>
#include "./../../include/media/Book.h"

// Getters
int Book::getPagesNr() const { return pagesNr; }

void Book::displayDetails() const {
  Media::displayDetails();

  std::cout << "Pages number: " << getPagesNr() << std::endl;
}