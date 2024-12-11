#include <iostream>
#include "./../../include/media/CD.h"

// Getters
double CD::getDuration() const { return duration; }
int CD::getTrackCount() const { return trackCount; }
std::string CD::getReleaseDate() const { return releaseDate; }

// Override displayDetails method to show CD-specific info
void CD::displayDetails() const {
    // Call the base class displayDetails
    Media::displayDetails();

    std::cout << "Duration: " << getDuration() << " minutes" << std::endl;
    std::cout << "Number of tracks: " << getTrackCount() << std::endl;
    std::cout << "Release date: " << getReleaseDate() << std::endl;
}