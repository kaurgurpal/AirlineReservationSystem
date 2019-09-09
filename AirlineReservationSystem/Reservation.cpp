#include "pch.h"
#include <iostream>
#include "Reservation.h"

using namespace std;

namespace ARS
{
	Reservation::Reservation(int confirmationNumber, const std::string& flightNumber, 
		int travelDate, int numberOfPassengers)
		:mConfirmationNumber(confirmationNumber), mFlightNumber(flightNumber), 
		mTravelDate(travelDate), mNumberOfPassengers(numberOfPassengers) 
	{}
	
	void Reservation::setConfirmationNumber(int confirmationNumber)
	{
		mConfirmationNumber = confirmationNumber;
	}

	 int Reservation::getConfirmationNumber() const
	{
		return mConfirmationNumber;
	}

	void Reservation::setFlightNumber(const std::string & flightNumber)
	{
		mFlightNumber = flightNumber;
	}

	const std::string & Reservation::getFlightNumber() const
	{
		return mFlightNumber;
	}

	void Reservation::setTravelDate(int travelDate)
	{
		mTravelDate = travelDate;
	}

	int Reservation::getTravelDate() const
	{
		return mTravelDate;
	}

	void Reservation::setNumberOfPassengers(int numberOfPassengers)
	{
		mNumberOfPassengers = numberOfPassengers;
	}

	int Reservation::getNumberofPassengers() const
	{
		return mNumberOfPassengers;
	}


}