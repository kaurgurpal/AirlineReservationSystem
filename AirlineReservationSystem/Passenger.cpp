#include "pch.h"
#include <iostream>
#include "Passenger.h"
#include "FlightReservationDatabase.h"
#include "Database.h"
using namespace std;

namespace ARS
{
	Passenger::Passenger()=default;
	Passenger::Passenger(const std::string & firstName, const std::string & lastName, int passengerPassportNumber, 
		long phoneNumber, const std::string & address, const std::string & email)
		:mFirstName(firstName),mLastName(lastName),mPassportNumber(passengerPassportNumber),mPhoneNumber(phoneNumber),
		mAddress(address),mEmail(email)
	{
	}

	void Passenger::setFirstName(const string& firstName)
	{
		mFirstName = firstName;
	}

	const string& Passenger::getFirstName() const
	{
		return mFirstName;
	}

	void Passenger::setLastName(const string& lastName)
	{
		mLastName = lastName;
	}

	const string& Passenger::getLastName() const
	{
		return mLastName;
	}


	void Passenger::setPassengerID(int ID) {
		mPassengerID = ID;
	}

	int Passenger::getPassengerID() const {
		return mPassengerID;
	}


	void Passenger::setPassengerPassportNumber(int passportNumber) {
		mPassportNumber = passportNumber;
	}

	int Passenger::getPassengerPassportNumber() const {
		return mPassportNumber;
	}

	void Passenger::setPhoneNumber(long phoneNumber) {
		mPhoneNumber = phoneNumber;
	}

	long Passenger::getPhoneNumber() const {
		return mPhoneNumber;
	}

	void Passenger::setAddress(const string& address)
	{
		mAddress = address;
	}

	const string& Passenger::getAddress() const
	{
		return mAddress;
	}

	void Passenger::setEmail(const std::string & email)
	{
		mEmail = email;
	}
	const string& Passenger::getEmail() const
	{
		return mEmail;
	}
}