#include <iostream>
#include <string>

class Passenger {
public:
    Passenger(const std::string& passengerName, int passengerAge,
              const std::string& passengerEmail, const std::string& contact);

    void displayPassengerDetails();

private:
    std::string name;
    int age;
    std::string email;
    std::string contactNumber;
};

Passenger::Passenger(const std::string& passengerName, int passengerAge,
                     const std::string& passengerEmail, const std::string& contact)
    : name(passengerName), age(passengerAge), email(passengerEmail), contactNumber(contact) {}

void Passenger::displayPassengerDetails() {
    std::cout << "Passenger Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Contact Number: " << contactNumber << std::endl;
}




