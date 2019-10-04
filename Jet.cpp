#include "Jet.h"

Jet::Jet(){
	setBrand("Unknown");
	setModel("Unknown");
	setNumberOfEngines(1);

}

Jet::Jet(string brand, string model, string fuelType, string engineSize){

}

Jet::~Jet(){}

string Jet::getEngineSize(){
	return myEngineSize;
}

void Jet::setEngineSize(string engineSize){

}
 
void Jet::setNumberOfEngines(int numberOfEngines){

}
    
double Jet::mileageEstimate(double time){

}
 
string Jet::toString(){

}
