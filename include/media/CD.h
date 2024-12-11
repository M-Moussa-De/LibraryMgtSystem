#ifndef CD_H
#define CD_H
#include "Media.h"

class CD final : public Media{
private:
    double duration;  // Total duration of the CD in minutes
    int trackCount;   // Number of tracks on the CD
    std::string releaseDate;  // Release date of the CD

public:
    // Constructor using helper struct
    CD(const MediaDetails& details, const double duration, const int trackCount, const std::string& releaseDate)
        : Media(details), duration(duration), trackCount(trackCount), releaseDate(releaseDate) {}

    // Destructor
    ~CD() override = default;

    // Getters
    [[nodiscard]]double getDuration() const;
    [[nodiscard]]int getTrackCount() const;
    [[nodiscard]]std::string getReleaseDate() const;

    void displayDetails() const override;
};
#endif //CD_H
