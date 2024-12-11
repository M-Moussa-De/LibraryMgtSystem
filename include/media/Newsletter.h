#ifndef NEWSLETTER_H
#define NEWSLETTER_H

#include "Media.h"

class Newsletter final : public Media {
  private:
    int issueNumber;
    int numPages;
    std::string targetAudience;

  public:
    // Constructor using helper struct
    Newsletter(const MediaDetails &details, const int issueNumber, const int numPages, const std::string &targetAudience)
        : Media(details), issueNumber(issueNumber), numPages(numPages) {};

    // Destructor
    ~Newsletter() override = default;

    //Getters
    [[nodiscard]]int getIssueNumber() const;
    [[nodiscard]]int getNumPages() const;
    [[nodiscard]]std::string getTargetAudience() const;

    void displayDetails() const override;
};
#endif //NEWSLETTER_H
