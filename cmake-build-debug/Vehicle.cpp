//
// Created by jj554 on 2022-10-20.
//

#include "Vehicle.hpp"
#include <iostream>
Vehicle::Vehicle(){
    this->engine = "V0";
    this->gasAmount = 0.0;
}
Vehicle::Vehicle(std::string engine, double gas):engine(engine),gasAmount(gas){}

void Vehicle::addGas(double input){
    this->setGas(this->getGas() + input);
}

void Vehicle::useGas(double burnAmt) {
//    if ((this->getGas() - burnAmt) <= 0 ){
//        std::cout << "Car only burn " << this->getGas() << std::endl;
//        this->setGas(0);
//    } else {
//        std::cout << "Car Burned " << burnAmt << std::endl;
//        this->setGas(this->getGas() - burnAmt);
//    }
    std::cout << "Vehicle use Gas" << std::endl;
}

Vehicle::~Vehicle() {
    //delete this;
}
