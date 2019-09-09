#include "pch.h"
#include <iostream>
#include "FlightScheduleDatabase.h"
#include <Windows.h>

using namespace std;

namespace ARS
{
	FlightScheduleDatabase::FlightScheduleDatabase()
	{
		Flight f1{ "AA001", "American Airline", "Seattle SEA", "NEW York JFK", 0700, 1500, 380};
		Flight f2{ "ALK001", "Alaska Airline", "Seattle SEA", "Alaska HWE", 0600, 1000, 282 };
		Flight f3{ "SW929", "Southwest Airline", "Dallas DSF", "NEW York JFK", 0700, 1500, 380 };
		Flight f4{ "SP636", "Spirit Airline", "Chicago OHO", "NEW York JFK", 0700, 1500, 380 };
		Flight f5{ "DL772", "Delta Airline", "Houstan HOU", "San Francisco SFO", 0700, 1500, 380 };
		Flight f6{ "SUN737", "Sun Airline", "Arizona ARI", "Seattle SEA", 0700, 1500, 380 };
		Flight f7{ "JET111", "Jet Airline", "Portland POR", "Los Angeles LAX", 0700, 1500, 380 };
		Flight f8{ "IND838", "Indigo Airline", "Las Vegas LAS", "Detroit DTW", 0700, 1500, 380 };
		Flight f9{ "JBL729", "JetBlue Airline", "WashingtonDC WDC", "Miami MIA", 0700, 1500, 380 };
		Flight f10{ "FRN101", "Frontier Airline", "New York LGA", "Bostan BST", 0700, 1500, 380 };
		Flight f11{ "UNI919", "United Airline", "Louisville LSV", "Dallas DSF", 0700, 1500, 380 };
		Flight f12{ "HWI999", "Hawaiian Airline", "Seattle SEA", "Denver DNE", 0700, 1500, 380 };

		mFlights.push_back(f1);
		mFlights.push_back(f2);
		mFlights.push_back(f3);
		mFlights.push_back(f4);
		mFlights.push_back(f5);
		mFlights.push_back(f6);
		mFlights.push_back(f7);
		mFlights.push_back(f8);
		mFlights.push_back(f9);
		mFlights.push_back(f10);
		mFlights.push_back(f11);
		mFlights.push_back(f12);

	}
	void FlightScheduleDatabase::displayFlightsSchedule() const
	{
		

		printf("|%4s|%12s|%20s|%20s|%20s|%10s|%10s|%10s|", "Item", "Flight#", "Airline", "Source", "Destination", "Departure","Arrival" , "$ Price");
		printf("\n");
		cout << "============================================================================" << endl;
		int counter = 1;
		for (const auto& flight : mFlights) {
			flight.displayFlightInfo(counter);
			counter++;
		}
		//for (auto it = begin(mFlights); it != end(mFlights); ++it)
		//{
		//	Flight f;
		//	f.displayFlightInfo(it - mFlights.begin());
		//}
	}

	Flight FlightScheduleDatabase::getFlight(int itemNumber) const
	{
		return mFlights.at(itemNumber - 1);
	}
}