#ifndef skateboard
#define skateboard

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    /*Constructor with parameters, no default*/
    explicit Skateboard(string brand, string model);

    /*Destructor*/
    virtual ~Skateboard();

    /*Function to get the miles gone in a given
     * time (in seconds)*/
    virtual double mileageEstimate(double time);

    /*Function that returns information about the
     * vehicle*/
    virtual string toString();
};


#endif
