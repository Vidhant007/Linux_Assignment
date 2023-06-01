#include <iostream>
#include "flight.h"
#include "passenger.h"
#include "booking.h"

int main() {
    Flight flight1("Flight_A", "Mumbai", "Maharashtra", "05-06-2023", "7:00",215);
    Flight flight2("Flight_B", "Kolkata", "Bengal", "12-06-2023", "19:00", 175);
    Flight flight3("Flight_C", "Chennai", "Tamil Nadu", "18-06-2023", "15:00", 175);


    Passenger passenger1("Vidhant Maan Thapa", 19, "thapavidhant@gmail.com", "9520304737");
    Passenger passenger2("Divya Roopa", 18, "droopa2001@gmail.com", "9528951797");
    Passenger passenger3("Tyler Durden", 24, "heyitstyler@gmail.com", "9110789989");


    Booking booking1(flight1, passenger1);
    Booking booking2(flight2, passenger2);
    Booking booking3(flight3, passenger3);


    std::cout << "Flight Details:" << std::endl;
    flight1.displayFlightDetails();
    flight2.displayFlightDetails();
    flight3.displayFlightDetails();


    std::cout << "\nPassenger Details:" << std::endl;
    passenger1.displayPassengerDetails();
    passenger2.displayPassengerDetails();
    passenger3.displayPassengerDetails();


    std::cout << "\nBooking Details:" << std::endl;
    booking1.displayBookingDetails();
    booking2.displayBookingDetails();
    booking3.displayBookingDetails();


    return 0;
}
