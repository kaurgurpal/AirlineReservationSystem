#pragma once
#include <string>

namespace ARS
{
	class Flight
	{
	public:

		Flight()=default;
		Flight(const std::string& flightNumber, const std::string&airline, 
			const std::string& source, const std::string& destination, int departureTime, int arrivalTime, int price);

		//getter and setter

		void setFlightNumber(const std::string& flightNumber);
		const std::string& getFlightNumber() const;

		void setAirline(const std::string& airline);
		const std::string& getAirline() const;

		void setSource(const std::string& source);
		const std::string& getSource() const;

		void setDestination(const std::string& destination);
		const std::string& getDestination() const;

		void setDepartureTime(int departureTime);
		int getDepartureTime() const;

		void setArrivalTime(int arrivalTime);
		int getArrivalTime() const;

		void setPrice(int price);
		int getPrice() const;

	private:
		std::string mFlightNumber;
		std::string mAirline;
		std::string mSource;
		std::string mDestination;
		int mDepartureTime = -1;
		int mArrivalTime = -1;
		int mPrice = -1;
	};
}
