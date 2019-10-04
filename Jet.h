#ifndef jet
#define jet

#include "PoweredVehicle.h"


class Jet : public PoweredVehicle {

private:
    int myNumberOfEngines;
    int myMileage;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines = 1);

    virtual ~Jet();
    void setNumberOfEngines(int numberOfEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();

};

#endif
