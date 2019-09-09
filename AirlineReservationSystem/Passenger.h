#pragma once
#include <string>

namespace ARS
{
	class Passenger
	{
	public:
		Passenger();
		Passenger(const std::string& firstName, const std::string& lastName,
			int passengerPassportNumber, long phoneNumber, const std::string& address, const std::string& email);
		
		//Getter and Setters

		void setFirstName(const std::string& firstName);
		const std::string& getFirstName() const;

		void setLastName(const std::string& lastName);
		const std::string& getLastName() const;

		void setPassengerID(int passengerID);
		int getPassengerID() const;

		void setPassengerPassportNumber(int passengerPassportNumber);
		int getPassengerPassportNumber() const;

		void setPhoneNumber(long phoneNumber);
		long getPhoneNumber() const;

		void setAddress(const std::string& address);
		const std::string& getAddress() const;

		void setEmail(const std::string& email);
		const std::string& getEmail() const;

	private:
		std::string mFirstName;
		std::string mLastName;
		int mPassengerID = -1;
		int mPassportNumber = -1;
		long mPhoneNumber = -1;
		std::string mAddress;
		std::string mEmail;

	};
}