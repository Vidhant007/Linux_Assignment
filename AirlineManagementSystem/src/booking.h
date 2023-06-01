#ifndef BOOKING_H
#define BOOKING_H

#include "flight.h"
#include "passenger.h"

class Booking {
private:
    Flight flight;
    Passenger passenger;

public:
    Booking(const Flight& flightObj, const Passenger& passengerObj);

    void displayBookingDetails();
};

#endif  
