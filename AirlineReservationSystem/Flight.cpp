#include "pch.h"
#include <iostream>
#include <cstdio>
#include "Flight.h"

using namespace std;

namespace ARS
{
	Flight::Flight(const std::string& flightNumber, const std::string&airline, const std::string& source, 
		const std::string& destination, int departureTime, int arrivalTime, int price)
	{
		mFlightNumber = flightNumber;
		mAirline = airline;
		mSource = source;
		mDestination = destination;
		mDepartureTime = departureTime;
		mArrivalTime = arrivalTime;
		mPrice = price;
	}

	void Flight::setFlightNumber(const string& flightNumber)
	{
		mFlightNumber = flightNumber;
	}

	const string& Flight::getFlightNumber() const
	{
		return mFlightNumber;
	}

	void Flight::setAirline(const string& Airline)
	{
		mAirline = Airline;
	}

	const string& Flight::getAirline() const
	{
		return mAirline;
	}
	void Flight::setSource(const string& Source)
	{
		mSource = Source;
	}

	const string& Flight::getSource() const
	{
		return mSource;
	}

	void Flight::setDestination(const string& Destination)
	{
		mDestination = Destination;
	}
	
	const string& Flight::getDestination() const
	{
		return mDestination;
	}

	void Flight::setDepartureTime(int departureTime) {
		mDepartureTime = departureTime;
	}

	int Flight::getDepartureTime() const {
		return mDepartureTime;
	}
	void Flight::setArrivalTime(int arrivalTime) {
		mArrivalTime = arrivalTime;
	}

	int Flight::getArrivalTime() const {
		return mArrivalTime;
	}

	void Flight::setPrice(int price) {
		mPrice = price;
	}

	int Flight::getPrice() const {
		return mPrice;
	}
	
}