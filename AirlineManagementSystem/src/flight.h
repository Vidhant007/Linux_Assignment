#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

class Flight {
private:
    std::string flightNumber;
    std::string departureLocation;
    std::string arrivalLocation;
    std::string departureDate;
    std::string departureTime;
    int availableSeats;

public:
    Flight(const std::string& number, const std::string& departure, const std::string& arrival,
           const std::string& date, const std::string& time, int seats);

    void displayFlightDetails();
};

#endif  
