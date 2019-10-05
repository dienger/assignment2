/*Jet class and header by Jacob Dienger*/

#ifndef jet
#define jet

#include "PoweredVehicle.h"


class Jet : public PoweredVehicle {

private:
    /*Member data to determine how the vehicle functions*/
    int myNumberOfEngines;
    int myMileage;

public:
    /*Default constructor*/
    Jet();

    /*Constructor with parameters*/
    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines = 1);

    /*Destructor*/
    virtual ~Jet();

    /*Setter for engine number*/
    void setNumberOfEngines(int numberOfEngines);

    /*Function to get the number of miles*/
    virtual double mileageEstimate(double time);

    /*Function that returns string containing vehicle details*/
    virtual string toString();

};

#endif
