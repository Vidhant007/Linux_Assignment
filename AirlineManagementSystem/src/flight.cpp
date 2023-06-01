#include <iostream>
#include <string>

class Flight {
public:
    Flight(const std::string& number, const std::string& departure, const std::string& arrival,
           const std::string& date, const std::string& time, int seats);

    void displayFlightDetails();

private:
    std::string flightNumber;
    std::string departureLocation;
    std::string arrivalLocation;
    std::string departureDate;
    std::string departureTime;
    int availableSeats;
};

Flight::Flight(const std::string& number, const std::string& departure, const std::string& arrival,
               const std::string& date, const std::string& time, int seats)
    : flightNumber(number), departureLocation(departure), arrivalLocation(arrival),
      departureDate(date), departureTime(time), availableSeats(seats) {}

void Flight::displayFlightDetails() {
    std::cout << "Flight Number: " << flightNumber << std::endl;
    std::cout << "Departure: " << departureLocation << std::endl;
    std::cout << "Arrival: " << arrivalLocation << std::endl;
    std::cout << "Date: " << departureDate << std::endl;
    std::cout << "Time: " << departureTime << std::endl;
    std::cout << "Available Seats: " << availableSeats << std::endl;
}

