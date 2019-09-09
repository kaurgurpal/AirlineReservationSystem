#pragma once
#include <string>
#include <vector>
#include "Flight.h"

namespace ARS
{
	class Reservation
	{
	public:
		Reservation()=default;
		Reservation(int confirmationNumber, const std::string& flightNumber, int travelDate, int numberOfPassengers);

		//getters and setters

		void setConfirmationNumber(int confirmationNumber);
		int getConfirmationNumber() const;

		void setFlightNumber(const std::string& flightNumber);
		const std::string& getFlightNumber() const;

		void setTravelDate(int travelDate);
		int getTravelDate() const;

		void setNumberOfPassengers(int numberOfPassengers);
		int getNumberofPassengers() const;

	private:
		int mConfirmationNumber=-1;
		std::string mFlightNumber;
		int	mTravelDate = 00000000;
		int	mNumberOfPassengers = 0;
		
	};
}