#ifndef jet
#define jet

#include "PoweredVehicle.h"


class Jet : public PoweredVehicle {

private:
    string myEngineSize;
    int myNumberOfEngines;
    int myMileage;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 string engineSize);

    virtual ~Jet();
    string getEngineSize();
    void setEngineSize(string engineSize);
    void setNumberOfEngines(int numberOfEngines);
    virtual double mileageEstimate(double time);
    virtual string toString();

};

#endif
