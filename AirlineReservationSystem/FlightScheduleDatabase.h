#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"

namespace ARS
{
	class FlightScheduleDatabase
	{
	public:
		FlightScheduleDatabase();
		void displayFlightsSchedule() const;
		Flight getFlight(int itemNumber) const;
	private:
		std::vector<Flight> mFlights;

	};


}