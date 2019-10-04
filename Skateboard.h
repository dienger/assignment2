#ifndef skateboard
#define skateboard

#include "Vehicle.h"

class Skateboard : public Vehicle {

private:

public:
    explicit Skateboard(string brand, string model, int gearCount = 1);

    virtual ~Skateboard();
    virtual double mileageEstimate(double time);

    virtual string toString();
};


#endif
