#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
private:
    std::string name;
    int age;
    std::string email;
    std::string contactNumber;

public:
    Passenger(const std::string& passengerName, int passengerAge,
              const std::string& passengerEmail, const std::string& contact);

    void displayPassengerDetails();
};

#endif 
