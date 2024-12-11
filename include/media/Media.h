#ifndef MEDIA_H
#define MEDIA_H

#include <string>
#include "../enums/MediaGenre.h"
#include "../enums/MediaLanguage.h"
#include "../enums/MediaStatus.h"
#include "./../structs/MediaDetails.h"

class Media {
private:
    std::string title;
    std::string creator;
    std::string ISBN;
    std::string publisher;
    MediaGenre genre;
    MediaLanguage language;
    std::string edition;
    MediaStatus status;

public:
    // Constructor
    Media(const MediaDetails& details)
    : title(details.title), creator(details.creator), ISBN(details.isbn),
      publisher(details.publisher), genre(details.genre), language(details.language),
      edition(details.edition), status(details.status) {}

    // Virtual Destructor
    virtual ~Media() = default;

    // Getters
    [[nodiscard]] std::string getTitle() const;
    [[nodiscard]] std::string getCreator() const;
    [[nodiscard]] std::string getISBN() const;
    [[nodiscard]] std::string getPublisher() const;
    [[nodiscard]] MediaGenre getGenre() const;
    [[nodiscard]] MediaLanguage getLanguage() const;
    [[nodiscard]] std::string getEdition() const;
    [[nodiscard]] MediaStatus getStatus() const;

    // Pure virtual function for derived classes to implement
    virtual void displayDetails() const = 0;

    // Enum to string functions
    [[nodiscard]] static std::string genreEnumFromString(MediaGenre genre);
    [[nodiscard]] static std::string languageEnumFromString(MediaLanguage language);
    [[nodiscard]] static std::string statusEnumToString(MediaStatus status);
};

#endif //MEDIA_H