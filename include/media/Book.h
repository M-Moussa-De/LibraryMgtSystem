#ifndef BOOK_H
#define BOOK_H
#include "Media.h"

class Book final : public Media {
private:
    int pagesNr;
public:
    // Constructor using helper struct
    Book(const MediaDetails& details, int pn)
        : Media(details), pagesNr(pn) {}
    // Destructor
    ~Book() override = default;

    [[nodiscard]] int getPagesNr() const;

    void displayDetails() const override;
};

#endif //BOOK_H