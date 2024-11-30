#include <iostream>
#include "./../../include/media/Media.h"

// Getters
std::string Media::getTitle() const { return title; }
std::string Media::getCreator() const { return creator; }
std::string Media::getISBN() const { return ISBN; }
std::string Media::getPublisher() const { return publisher; }
MediaGenre Media::getGenre() const { return genre; }
MediaLanguage Media::getLanguage() const { return language; }
std::string Media::getEdition() const { return edition; }
MediaStatus Media::getStatus() const { return status; }

void Media::displayDetails() const {
    std::cout << "Title: " << getTitle()
              << "\nCreator: " << getCreator()
              << "\nISBN: " << getISBN()
              << "\nPublisher: " << getPublisher()
              << "\nGenre: " << genreEnumFromString(getGenre())
              << "\nLanguage: " << languageEnumFromString(getLanguage())
              << "\nStatus: " << statusEnumToString(getStatus())
              << std::endl;
}

// Enums to string function
std::string Media::genreEnumFromString(const MediaGenre genre) {
    switch (genre) {
        case MediaGenre::ART: return "Art";
        case MediaGenre::FICTION: return "Fiction";
        case MediaGenre::HISTORY: return "History";
        case MediaGenre::SCIENCE: return "Science";
        case MediaGenre::ECONOMICS: return "Economics";
        case MediaGenre::LITERATURE: return "Literature";
        case MediaGenre::NON_FICTION: return "Non-Fiction";
        case MediaGenre::PHILOSOPHY: return "Philosophy";
        case MediaGenre::PSYCHOLOGY: return "Psychology";
        case MediaGenre::TECHNOLOGY: return "Technology";
        default: return "Unknown genre";
    }
}
std::string Media::languageEnumFromString(const MediaLanguage language) {
    switch (language) {
        case MediaLanguage::ARABIC: return "Arabic";
        case MediaLanguage::FRENCH: return "French";
        case MediaLanguage::ITALIAN: return "Italian";
        case MediaLanguage::GERMAN: return "German";
        case MediaLanguage::CHINESE: return "Chinese";
        case MediaLanguage::ENGLISH: return "English";
        case MediaLanguage::RUSSIAN: return "Russian";
        case MediaLanguage::SPANISH: return "Spanish";
        case MediaLanguage::JAPANESE: return "Japanese";
        case MediaLanguage::PORTUGUESE: return "Portuguese";
        default: return "Unknown language";
    }
}
std::string Media::statusEnumToString(const MediaStatus status) {
        switch (status) {
            case MediaStatus::AVAILABLE: return "Available";
            case MediaStatus::UNAVAILABLE: return "Unavailable";
            case MediaStatus::RESERVED: return "Reserved";
            case MediaStatus::CHECKED_OUT: return "Checked out";
            case MediaStatus::LIBRARY_ONLY: return "Library only";
            default: return "Unknown status";
    }
}
