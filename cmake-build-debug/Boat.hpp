//
// Created by jj554 on 2022-10-20.
//

#ifndef MIDTERMREVIEW_CAR_HPP
#define MIDTERMREVIEW_CAR_HPP

#endif //MIDTERMREVIEW_CAR_HPP
#include "Vehicle.hpp"
class Boat{
public:
    std::string hull;
    Boat();
    Boat(std::string);
    inline Boat(const Boat& target):hull(target.hull){};
//    void useGas(double);

    Boat& operator=(Boat);
    void myswap(Boat&, Boat&);
};