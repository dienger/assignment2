#include "Jet.h"
#include <stdlib.h>

Jet::Jet(){
	setBrand("Unknown");
	setModel("Unknown");
	setFuelType("diesel");
	setNumberOfEngines(1);
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

void Jet::setNumberOfEngines(int numberOfEngines){
	if(numberOfEngines > 0){
		myNumberOfEngines = numberOfEngines;
	}else{
		numberOfEngines = 1;
	}
}
    
double Jet::mileageEstimate(double time){
	double mileage = (rand() % 60) + 41;
	if(myNumberOfEngines > 2 && fuelType == "Rocket"){
		mileage = mileage * 1.055 * myNumberOfEngines * (time/60);
	}else{
		mileage = mileage * (time/60);
	}

	return mileage;
}
 
string Jet::toString(){
	string s = "-> Jet\n\t";
    	return "-> Jet\n" + Vehicle::toString() + "\n\tNumber of Engines: " +
           to_string(myNumberOfEngines);
}
