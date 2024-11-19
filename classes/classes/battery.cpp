//
//  battery.cpp
//  classes
//
//  Created by Coco Li on 3/21/23.
//

#include "battery.h"

battery :: battery(double volts){
    setVolts(volts);
}
void battery:: setVolts(double Volts){
    myVolts = Volts;
}

double battery :: getVolts() const{
    return myVolts; 
}
