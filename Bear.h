#ifndef bear
#define bear

#include "Vehicle.h"

class Bear : public Vehicle{
private:
    /*Member data to determine how fast the bear goes*/
    int myAge;
    string myFood;

public:
    /*constructor, allowed to enter all arguments, first 3, 2, 1, or no arguments*/
    explicit Bear(string brand = "Arctic", string model = "Polar Bear", int age = 3, string food = "waterfowl");

    /*Destructor*/
    virtual ~Bear();
    
    /*Setter for age*/
    void setAge(int age);

    /*Setter for food*/
    void setFood(string food);

    /*Get the mileage for a certain amount of time for this bear*/
    virtual double mileageEstimate(double time);

    /*Return a string with all the data about the bear*/
    virtual string toString();

};

#endif
