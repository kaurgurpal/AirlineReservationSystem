#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reservation.h"

namespace ARS
{
	class FlightReservationDatabase
	{
	public:
		FlightReservationDatabase() = default;
		
		void displayBooking() const;
		void listAllPassengers() const;
		void displayBookedFlightInformation() const;
	private:
		std::vector<Passenger> mPassengers;
		std::vector<Reservation> mReservations;
	};

	
}
