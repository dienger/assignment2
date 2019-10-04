#include "Skateboard.h"
#include <stdlib.h>

Skateboard::Skateboard(string brand, string model){
	setBrand(brand);
	setModel(model);
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
	double mileage = ((rand() % 5)/10) + 0.1;
	if(time > 25 && time < 250){
		double powerUp = (rand() % static_cast<int>(((time - (time/3)))) + (time/3));
		mileage = mileage * ((time + powerUp)/60);
	}else{
		mileage = mileage * (time/60);
	}

	return mileage;
}

string Skateboard::toString(){
    string s = "-> Skateboard\n\t";
    return "-> Skateboard\n" + Vehicle::toString();
}
