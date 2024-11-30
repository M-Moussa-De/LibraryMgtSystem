#include <gtest/gtest.h>
#include "./../../include/media/Book.h"
#include "./../../include/enums/MediaStatus.h"

// Test fixture for Book
class BookTest : public ::testing::Test {
protected:
    Book* book1;
    Book* book2;

    // Set up test objects
    void SetUp() override {
        const MediaDetails details1 {"C++ Programming", "Bjarne Stroustrup", "9780131103627", "Springer",
            MediaGenre::ART, MediaLanguage::ENGLISH, "1st Edition", MediaStatus::AVAILABLE};
        const MediaDetails details2{"Another Media", "Another Author", "0987654321", "Another Publisher",
            MediaGenre::HISTORY, MediaLanguage::ENGLISH, "2nd Edition", MediaStatus::RESERVED};
        book1 = new Book(details1, 1024);
        book2 = new Book(details2, 198);
    }

    // Tear down test objects
    void TearDown() override {
        delete book1;
        delete book2;
    }
};

// Test 1: Check if the constructor initializes the Book object correctly
TEST_F(BookTest, ConstructorTest) {
    EXPECT_EQ(book1->getTitle(), "C++ Programming");
    EXPECT_EQ(book1->getCreator(), "Bjarne Stroustrup");
    EXPECT_EQ(book1->getISBN(), "9780131103627");
    EXPECT_EQ(book1->getPublisher(), "Springer");
    EXPECT_EQ(book1->getGenre(), MediaGenre::ART);
    EXPECT_EQ(book1->getLanguage(), MediaLanguage::ENGLISH);
    EXPECT_EQ(book1->getEdition(), "1st Edition");
    EXPECT_EQ(book1->getStatus(), MediaStatus::AVAILABLE);
    EXPECT_EQ(book1->getPagesNr(), 1024);
}

// Test 2: Check if the getPagesNr() method returns the correct number of pages
TEST_F(BookTest, GetPagesNrTest) {
    EXPECT_EQ(book1->getPagesNr(), 1024);
    EXPECT_EQ(book2->getPagesNr(), 198);
}

// Test 3: Check if displayDetails prints the expected output
TEST_F(BookTest, DisplayDetailsTest) {
    // Redirect std::cout to a string stream to capture the output
    testing::internal::CaptureStdout();
    book1->displayDetails();
    const std::string output = testing::internal::GetCapturedStdout();

    std::string expected_output = "Title: C++ Programming\nCreator: Bjarne Stroustrup\nISBN: 9780131103627\nPublisher: "
                                  "Springer\nGenre: Art\nLanguage: English\nStatus: Available\nPages number: 1024\n";
    EXPECT_EQ(output, expected_output);
}