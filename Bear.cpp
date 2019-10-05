/*bear header and class by Jacob Dienger*/

#include "Bear.h"

Bear::Bear(string brand, string model, int age, string food){
	/*Sets bear member data to the parameters specified*/
	setBrand(brand);
	setModel(model);
	setAge(age);
	setFood(food);
}

Bear::~Bear() = default;

void Bear::setAge(int age){
	/*You can only ride bears if the bear is over
	 * the age of 3 */
	if(age > 2){
		myAge = age;
	}else{
		myAge = 3;
	}
}

void Bear::setFood(string food){
	/*set the food for the bear*/
	myFood = food;
}

double Bear::mileageEstimate(double time){
	/*Calculate the mileage, if the bear is
	 * between 10 and 20, then is goes a little
	 * faster, if it's a middle-aged bear and
	 * has eaten seals, then it goes even faster */
	double mileage = .083;
	if(myAge > 10 && myAge < 20){
		mileage = .416;
		if(myFood == "Seal"){
			mileage = .583;
		}
	}

	/*number of miles is the miles per minute times
	 * the time given divided by 60 since time is given in seconds*/
	return mileage * (time/60);
}

string Bear::toString(){
	/*Print out the bear data*/
	string s = "-> Bear\n\t";
    	return "-> Bear\n" + Vehicle::toString() + "\n\tAge of Bear: " +
           to_string(myAge) + "\n\tThis bear eats: " + myFood;
}
