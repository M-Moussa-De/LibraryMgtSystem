#ifndef STUDENT_H
#define STUDENT_H
#include "User.h"

class Student final : public User{
private:
    std::string faculty;
    int semester;
    int immatriculationNr;

public:
    // Constructor
    Student(const PersonalInfo &info, const std::string &faculty, const int &semester, const int &immatriculationNr)
        : User(info), faculty(faculty), semester(semester), immatriculationNr(immatriculationNr) {
        if (semester < 1 || semester > 10) {
            throw std::invalid_argument("Invalid semester value");
        }
        if (immatriculationNr < 0) {
            throw std::invalid_argument("Invalid matriculation number");
        }
    };

    // Destructor
    ~Student() override = default;

    // Getters
    [[nodiscard]] const std::string& getFaculty() const;
    [[nodiscard]] const int& getSemester() const;
    [[nodiscard]] const int& getMatriculationNr() const;

    void displayPersonalInfo() const override;
};
#endif //STUDENT_H
