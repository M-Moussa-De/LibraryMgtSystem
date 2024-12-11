#ifndef AUTH_H
#define AUTH_H

#include <string>
#include <unordered_map>
#include <memory>
#include "../enums/UserRole.h"
#include "./../user/User.h"

class Auth {
private:
    // Store users (this could be replaced with a database in a real-world scenario)
    std::unordered_map<std::string, std::shared_ptr<User>> users;

    // Simulate a session with a map of active users (usernames to sessions)
    std::unordered_map<std::string, std::string> activeSessions; // username -> sessionId

public:
    // Constructor
    Auth() = delete;
    // Destructor
    ~Auth() = default;

    // Sign up a new user
    bool signUp(const std::string& username, const std::string& password, UserRole userRole);

    // Sign in a user, creating a session
    bool signIn(const std::string& username, const std::string& password);

    // Log out a user
    void logout(const std::string& username);

    // Check if a user is authenticated
    bool isAuthenticated(const std::string& username);

    // Get the current user's role or permission level
    UserRole getUserRole(const std::string& username) const;

    // Hash password using BCrypt
    std::string hashPassword(const std::string& password) const;

    // Check if the entered password matches the stored hash
    bool verifyPassword(const std::string& password, const std::string& hashedPassword) const;

private:
    // Create username as a combination from firstname + lastname
    const std::string& createUsername(const std::string& fname, const std::string& lname);
};
#endif //AUTH_H
