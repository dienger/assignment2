#include "Jet.h"
#include <stdlib.h>
#include <time.h>

Jet::Jet(){
	/*Sets default parameters when none are given
	 * Seeds random generator because doing it in
	 * the mileageEstimate function conflicts with
	 * having time() function and time variable*/
	setBrand("Unknown");
	setModel("Unknown");
	setFuelType("diesel");
	setNumberOfEngines(1);
	srand(time(NULL));
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
	/*Sets the parameters given to the constructor
	 * Same random generator idea as above*/
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumberOfEngines(numberOfEngines);
	srand(time(NULL));
}

Jet::~Jet() = default;

void Jet::setNumberOfEngines(int numberOfEngines){
	/*If the engine number is positive then set it
	 * If there's zero or less engines declared then
	 * set it to one*/
	if(numberOfEngines > 0){
		myNumberOfEngines = numberOfEngines;
	}else{
		numberOfEngines = 1;
	}
}
    
double Jet::mileageEstimate(double time){
	/*First calculate the miles per minute - a rand number
	 * between 40 and 100*/
	double mileage = (rand() % 60) + 41;

	/*Add a bonus to the jets that have rocket fuel and
	 * more than 2 engines. It gets 5.5% more mileage per
	 * engine
	 * Otherwise just multiply the miles per minute by the time
	 * Time is given in seconds, so divide it by 60*/
	if(myNumberOfEngines > 2 && fuelType == "Rocket"){
		mileage = mileage * 1.055 * myNumberOfEngines * (time/60);
	}else{
		mileage = mileage * (time/60);
	}

	return mileage;
}
 
string Jet::toString(){
	/*Return the string that contains information about the
	 * jet*/
	string s = "-> Jet\n\t";
    	return "-> Jet\n" + Vehicle::toString() + "\n\tNumber of Engines: " +
           to_string(myNumberOfEngines);
}
