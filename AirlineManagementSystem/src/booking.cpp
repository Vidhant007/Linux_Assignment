#include <iostream>
#include "booking.h"

Booking::Booking(const Flight& flightObj, const Passenger& passengerObj)
    : flight(flightObj), passenger(passengerObj) {}

void Booking::displayBookingDetails() {
    std::cout << "Booking Details:" << std::endl;
    flight.displayFlightDetails();
    std::cout << std::endl;
    passenger.displayPassengerDetails();
}
