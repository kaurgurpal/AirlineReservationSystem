#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Flight.h"
#include "Passenger.h"
#include "Reservation.h"

using namespace std;

namespace ARS
{
	class Database
	{
	public:
		Database();
		
		
		//Flights methods
		vector<Flight>& getFlightsSchedule() ;
		
		Flight& getFlight(int itemNumber) ;
		
		
		//Passengers methods
		vector<Passenger>& getPassengersInfo() ;
		
		void addPassengerInfo(const std::string& firstName, const std::string& lastName,
			int passengerPassportNumber, long phoneNumber, const std::string& address, const std::string& email);

		//Reservation methods
		int addReservation(Flight& SelectedFlight, int travelDate, int numberOfPassengers) ;
		
		Reservation getReservation(int confirmationNumber);

	private:
		vector<Flight> mFlights;
		vector<Passenger> mPassengers;
		vector<Reservation> mReservations;

	};


}