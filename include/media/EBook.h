#ifndef EBOOK_H
#define EBOOK_H

#include "Media.h"

class EBook final : public Media{
private:
    std::string fileFormat;
    double fileSize; // File size in MB

public:
    // Constructor using helper struct
    EBook(const MediaDetails& details, const double fileSize)
    : Media(details), fileSize(fileSize) {}

    // Destructor
    ~EBook() override = default;

    // Getters
    [[nodiscard]] std::string getFileFormat() const;
    [[nodiscard]] double getFileSize() const;

    void displayDetails() const override;
};
#endif //EBOOK_H