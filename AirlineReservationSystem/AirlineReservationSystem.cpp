// AirlineReservationSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include "Database.h"

using namespace std;
using namespace ARS;

int displayMainMenu();
void bookFlight(Database& db);
void showFlightsSchedule(Database& db);
void displayPassengersInfo(Database& db);
void displayFlightDetails(Database& db);
void displayTicketInformation(Database& db);
int flightSelection;

int main()
{
	Database db;
	while (true)
	{
		int selection = displayMainMenu();
		switch (selection) {
		case 0:

			return 0;
		case 1:
			bookFlight(db);
			break;
		case 2:
			showFlightsSchedule(db);
			break;
		case 3:
			displayPassengersInfo(db);
			break;
		case 4:
			displayFlightDetails(db);
			break;
		case 5:
			displayTicketInformation(db);
			break;
		default:
			cerr << "Unknown command." << endl;
			break;
		}
	}
}

int displayMainMenu()
{
	int selection;
	cout << endl;
	cout << "Flight Reservation" << endl;
	cout << "-----------------" << endl;
	cout << "1) Find Flight" << endl;
	cout << "2) Show Flights Schedule" << endl;
	cout << "3) Display Passengers Info" << endl;
	cout << "4) Display Flight Details" << endl;
	cout << "5) Display Ticket Information" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> ";
	cin >> selection;
	return selection;
}

void bookFlight(Database& db)
{
	cout << "Please Choose from the following options: " << endl;
	cout << "<--------------------->" << endl;
	
	showFlightsSchedule(db);
	cout << "<--------------------->" << endl;
	
	cout << "Enter the number to start reservation: " << endl;
	cin >> flightSelection;
	Flight fRef;
	fRef = db.getFlight(flightSelection);
	
	int travelDate;
	int numberOfPassengers;
	string firstName;
	string lastName;
	string address;
	long phoneNumber;
	int passportNumber;
	string email;
	int confirmationNumber;
	
	cout << "Enter the Date of travel (MMDDYYYY): " << endl;
	cin >> travelDate;
	cout << "Number of Travelers: " << endl;
	cin >> numberOfPassengers;
	vector<Passenger> tempPassenger;
	for (int i = 0; i < numberOfPassengers;i++) {
		
		cout << "Please enter passenger "<<i+1<<" details:" << endl;
		cout << "------------------" << endl;
		cout << "First name: " << endl;
		cin.get();
		getline(cin, firstName);
		cout << "Last name: " << endl;
		getline(cin, lastName);
		cout << "Address: " << endl;
		getline(cin, address);
		cout << "Phone number: " << endl;
		cin >> phoneNumber;
		cin.get();
		cout << "Passport number: " << endl;
		cin >> passportNumber;
		cin.get();
		cout << "Email: " << endl;
		getline(cin, email);
		cout << "------------------" << endl;
		Passenger p(firstName, lastName, passportNumber, phoneNumber, address, email);
		tempPassenger.push_back(p);
	}
	char confirmation;
	cout << "Please confirm the booking? (y/n)" << endl;
	cin >> confirmation;
	if (confirmation=='y' || confirmation=='Y')
	{
		for (const auto&  pr : tempPassenger)
		{
			db.addPassengerInfo(pr.getFirstName(), pr.getLastName(),pr.getPassengerPassportNumber(), pr.getPhoneNumber(), pr.getAddress(), pr.getEmail());
		}
		
		confirmationNumber=db.addReservation(fRef, travelDate, numberOfPassengers);
		cout << "CONGRATULATIONS!!! Enjoy in " << fRef.getDestination() << endl;
		cout << "Your confirmation number is: "<<confirmationNumber <<endl;
	}
}

void showFlightsSchedule(Database& db)
{
	printf("|%4s|%12s|%20s|%20s|%20s|%10s|%10s|%10s|", "Item", "Flight#", "Airline", "Source", "Destination", "Departure", "Arrival", "$ Price");
	printf("\n");
	cout << "============================================================================" << endl;
	int counter = 1;
	vector<Flight> flights= db.getFlightsSchedule();
	for (const auto& f : flights)
	{
		printf("|%4d|%12s|%20s|%20s|%20s|%10d|%10d|%10d|",counter ,f.getFlightNumber().c_str(), f.getAirline().c_str(), f.getSource().c_str(), 
			f.getDestination().c_str(), f.getDepartureTime(), f.getArrivalTime(), f.getPrice());
		printf("\n");
		counter++;
	}
}

void displayPassengersInfo(Database& db)
{
	vector<Passenger> passengers = db.getPassengersInfo();
	for (const auto&  pr : passengers)
	{
		cout << "-------------------" << endl;
		cout << "Name: " << pr.getLastName() << ", " << pr.getFirstName() << endl;
		cout << "Address:" << pr.getAddress() << endl;
		cout << "Phone Number:" << pr.getPhoneNumber() << endl;
		//cout << "ID : " << getPassengerID() << endl;
		cout << "Passport Number: " << pr.getPhoneNumber() << endl;
		cout << "Email: " << pr.getEmail() << endl;
		cout << endl;
		cout << "-------------------" << endl;
	}
}

void displayFlightDetails(Database& db)
{
	Flight f=db.getFlight(flightSelection);
	printf("|%12s|%20s|%20s|%20s|%10s|%10s|%10s|", "Flight#", "Airline", "Source", "Destination", "Departure", "Arrival", "$ Price");
	printf("\n");
	cout << "----------------------------" << endl;
	printf("|%12s|%20s|%20s|%20s|%10d|%10d|%10d|",f.getFlightNumber().c_str(), f.getAirline().c_str(), f.getSource().c_str(), f.getDestination().c_str(), f.getDepartureTime(), f.getArrivalTime(), f.getPrice());
	printf("\n");
	cout << "----------------------------" << endl;

}
void displayTicketInformation(Database& db)
{
	int confirmationNumber=-1;
	cout << "Please enter the confirmation number: " << endl;
	cin >> confirmationNumber;

	Reservation frR = db.getReservation(confirmationNumber);	
	if (frR.getConfirmationNumber()==-1)
	{
		cout << "Reservation doesn't exist with confirmation number: "<<confirmationNumber<< endl;
	}
	else
	{
		cout << "<-------->Confirmation Number: " << confirmationNumber << " <-------->" << endl;
		cout << endl;
		cout << "Travel Date: " << frR.getTravelDate() << endl;
		cout << "--------------------" << endl;
		displayFlightDetails(db);
		cout << "--------------------" << endl;
		cout << endl;
		cout << "Number of Passengers: "<<frR.getNumberofPassengers()<<endl;
		displayPassengersInfo(db);
		cout << endl;
	}
}
