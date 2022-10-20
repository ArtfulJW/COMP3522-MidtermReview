//
// Created by jj554 on 2022-10-20.
//

#include "Boat.hpp"
#include <iostream>

Boat::Boat(){
    this->hull = "";
}
Boat::Boat(std::string hull):hull(hull){}

//void Boat::useGas(double burnAmt){
//    std::cout << "Boat burn gas " << burnAmt << std::endl;
//}

//Boat::Boat(const Boat& target){
//    this->hull = target.hull;
//}

Boat &Boat::operator=(Boat other) {
    myswap(*this, other);
    return *this;
}

void Boat::myswap(Boat& first, Boat& second) {
//    std::swap(first.hull, second.hull);
    std::string x = second.hull;
    second.hull = first.hull;
    first.hull = x;
}



