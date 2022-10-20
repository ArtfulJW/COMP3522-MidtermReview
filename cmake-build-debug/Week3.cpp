//
// Created by jj554 on 2022-10-20.
//
#include "Vehicle.hpp"
#include "Boat.hpp"
#include <iostream>

int main(){
    Vehicle a = Vehicle("V10",129);
    Boat b = Boat("Wood");
//    a->useGas(12);
//    b->useGas(10);
//    b->addGas(10);
//    std::cout << b->getGas() << std::endl;

    // Polymorphism
//    Boat* boat;
//    Vehicle* vehicle;
//    vehicle = b;
//    vehicle->useGas(1);

//    b->attachHook(a);
//    std::cout << b->hook->getGas() << std::endl;

    // Copy Constructor
    Boat d{b};
    b.hull = "Metal";
    std::cout << d.hull << " " << b.hull << std::endl;

    std::cout << "HELL" << std::endl;
    Boat z = Boat("Plastic");
    std::cout << d.hull << " " << b.hull << " " << z.hull<< std::endl;
    return 0;
}