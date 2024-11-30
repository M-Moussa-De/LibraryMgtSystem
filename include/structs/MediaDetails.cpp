#include <string>
#include "../enums/MediaGenre.h"
#include "../enums/MediaLanguage.h"
#include "../enums/MediaStatus.h"
using namespace std;

// A struct to group parameters together
struct MediaDetails {
    std::string title;
    std::string creator;
    std::string isbn;
    std::string publisher;
    MediaGenre genre;
    MediaLanguage language;
    std::string edition;
    MediaStatus status;

    MediaDetails(const std::string &t, const std::string &c, const std::string &isbn,
                 const std::string &p, MediaGenre g, MediaLanguage l, const std::string &e, const MediaStatus s = MediaStatus::AVAILABLE)
        : title(t), creator(c), isbn(isbn), publisher(p), genre(g), language(l), edition(e), status(s) {}
};
