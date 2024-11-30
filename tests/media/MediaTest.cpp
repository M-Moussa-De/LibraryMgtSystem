#include <gtest/gtest.h>
#include <string>
#include "./../../include/media//Media.h"
#include "./../../include/enums/MediaStatus.h"

// Mock derived class to allow instantiation of the abstract class 'Media'
class MockMedia final : public Media {
public:
    MockMedia(const MediaDetails &details)
        : Media(details) {}

    void displayDetails() const override {
        std::cout << "MockMedia details: "
                  << "\nTitle: " << getTitle()
                  << ",\nCreator: " << getCreator()
                  << ",\nISBN: " << getISBN()
                  << ",\nStatus: " << statusEnumToString(getStatus())
                  << std::endl;
    }
};

// Test fixture for Media
class MediaTest : public ::testing::Test {
protected:
    MockMedia* media1{};
    MockMedia* media2{};

    // Set up test objects
    void SetUp() override {
        // Creating MediaDetails instances
        const MediaDetails details1{"Media Title", "Author Name", "1234567890", "Publisher Name",
            MediaGenre::ART, MediaLanguage::ENGLISH, "1st Edition", MediaStatus::CHECKED_OUT};
        const MediaDetails details2{"Another Media", "Another Author", "0987654321", "Another Publisher",
            MediaGenre::HISTORY, MediaLanguage::ENGLISH, "2nd Edition", MediaStatus::RESERVED};

        media1 = new MockMedia(details1);
        media2 = new MockMedia(details2);
    }

    // Tear down test objects
    void TearDown() override {
        delete media1;
        delete media2;
    }
};

// Test 1: Check if getTitle() returns the correct title
TEST_F(MediaTest, GetTitleTest) {
    EXPECT_EQ(media1->getTitle(), "Media Title");
    EXPECT_EQ(media2->getTitle(), "Another Media");
}

// Test 2: Check if getCreator() returns the correct creator
TEST_F(MediaTest, GetCreatorTest) {
    EXPECT_EQ(media1->getCreator(), "Author Name");
    EXPECT_EQ(media2->getCreator(), "Another Author");
}

// Test 3: Check if getISBN() returns the correct ISBN
TEST_F(MediaTest, GetISBNTest) {
    EXPECT_EQ(media1->getISBN(), "1234567890");
    EXPECT_EQ(media2->getISBN(), "0987654321");
}

// Test 4: Check if getStatus() returns the correct status
TEST_F(MediaTest, GetStatusTest) {
    EXPECT_EQ(media1->getStatus(), MediaStatus::CHECKED_OUT);
    EXPECT_EQ(media2->getStatus(), MediaStatus::RESERVED);
}

// Test 5: Check the string output of statusEnumToString
TEST_F(MediaTest, StatusEnumToStringTest) {
    EXPECT_EQ(media1->statusEnumToString(media1->getStatus()), "Checked out");
    EXPECT_EQ(media2->statusEnumToString(media2->getStatus()), "Reserved");
}

// Test 6: Check if displayDetails prints correctly (you can check if the output is as expected)
TEST_F(MediaTest, DisplayDetailsTest) {
    // Redirect std::cout to a string stream to capture the output
    testing::internal::CaptureStdout();
    media1->displayDetails();
    const std::string output = testing::internal::GetCapturedStdout();

    const std::string expected_output = "MockMedia details: \nTitle: Media Title,\nCreator: Author Name,\nISBN: 1234567890,\nStatus: Checked out\n";
    EXPECT_EQ(output, expected_output);
}