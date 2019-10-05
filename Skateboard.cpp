/*Skateboard header and class by Jacob Dienger*/

#include "Skateboard.h"
#include <stdlib.h>
#include <time.h>

Skateboard::Skateboard(string brand, string model){
	/*Set the given parameters
	 * Seed the random number here bc
	 * time() function and time variable
	 * conflict in the mileageEstimate function*/
	setBrand(brand);
	setModel(model);
	srand(time(NULL));
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
	/*Mileage is a random number of miles per minute between 0.1 and 0.5*/
	double mileage = ((rand() % 5)/10) + 0.1;

	/*If 25 < time < 250 then add a bonus to the time
	 * between 1/3 and 1 of the total time, multiply result
	 * by miles per minute to get total mileage
	 * Otherwise just do miles per minute times time
	 * Time is divided by 60 because time is given in seconds*/
	if(time > 25 && time < 250){
		double powerUp = (rand() % static_cast<int>(((time - (time/3)))) + (time/3));
		mileage = mileage * ((time + powerUp)/60);
	}else{
		mileage = mileage * (time/60);
	}

	return mileage;
}

string Skateboard::toString(){
    /*Return a string containing information about the skateboard*/
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
