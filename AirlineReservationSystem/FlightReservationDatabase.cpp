#include "pch.h"
#include <iostream>
#include "Flight.h"
#include <cstdio>
#include "Passenger.h"
#include "FlightReservationDatabase.h"

using namespace std;

namespace ARS
{
	void FlightReservationDatabase::listAllPassengers() const
	{
		for (const auto& passenger : mPassengers) {
			passenger.displayPassengerInfo();
		}
	}

	void FlightReservationDatabase::displayBooking() const
	{

	}

	void FlightReservationDatabase::displayBookedFlightInformation() const
	{

	}

}