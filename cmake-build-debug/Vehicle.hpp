//
// Created by jj554 on 2022-10-20.
//

#ifndef MIDTERMREVIEW_VEHICLE_HPP
#define MIDTERMREVIEW_VEHICLE_HPP
#include <string>

class Vehicle {
public:
    // Constructor
    Vehicle();
    Vehicle(std::string, double);

    // Member Variables
    std::string engine;
    double gasAmount;

    // Member Function
    void addGas(double);
    virtual void useGas(double);

    // Getter
    double getGas(){return this->gasAmount;}

    // Setter
    void setGas(double newAmt){this->gasAmount=newAmt;}

    // Destructor
    ~Vehicle();
};


#endif //MIDTERMREVIEW_VEHICLE_HPP
