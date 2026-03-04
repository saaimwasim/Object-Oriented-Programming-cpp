#include <iostream>
using namespace std;

class RideFare {
	public:
		string passengerName;
		int rideID;
		double baseFare;
		void displayRideDetails() {
			cout<<"Passenger: "<<passengerName<<endl;
			cout<<"Ride ID: "<<rideID<<endl;
		}
};

class economyRide: public RideFare {
	public:
		double distanceKm;
		double calculateFare() {
			return baseFare + (distanceKm * 8);
		}
		
		void displayRideDetails () {
			RideFare::displayRideDetails();
			cout<<"Final Fare: "<<calculateFare()<<"\n \n";
		}		
};

class luxuryRide: public RideFare {
	public:
		double distanceKm;
		double serviceCharge;
		double calculateFare() {
			return baseFare + (distanceKm * 12) + serviceCharge;
		}
		
		void displayRideDetails () {
			RideFare::displayRideDetails();
			cout<<"Final Fare: "<<calculateFare()<<endl;
		}
};

int main () {
	economyRide e;
	e.passengerName = "Sara";
	e.rideID = 201;
	e.baseFare = 100;
	e.distanceKm = 15;
	
	luxuryRide l;
	l.passengerName = "Ahmed";
	l.rideID = 305;
	l.baseFare = 120;
	l.distanceKm = 10;
	l.serviceCharge = 80;
	
	e.displayRideDetails();
	l.displayRideDetails();
	
	return 0;
}
