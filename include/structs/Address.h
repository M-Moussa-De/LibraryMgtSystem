#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

struct Address {
    std::string street;
    std::string houseNr;
    std::string zip;
    std::string city;
    std::string country;

    Address(const std::string &street, const std::string &houseNr, const std::string &zip,
        const std::string &city, const std::string &country) :
        street(street), houseNr(houseNr), zip(zip), city(city), country(country) {}

    //Getters
    [[nodiscard]]std::string getStreet() const { return street; }
    [[nodiscard]]std::string getHouseNr() const { return houseNr; }
    [[nodiscard]]std::string getZip() const { return zip; }
    [[nodiscard]]std::string getCity() const { return city; }
    [[nodiscard]]std::string getCountry() const { return country; }
};
#endif //ADDRESS_H