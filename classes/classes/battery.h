//
//  battery.hpp
//  classes
//
//  Created by Coco Li on 3/21/23.
//

#ifndef BATTERY_H
#define BATTERY_H

class battery{
private:
    double myVolts;
public:
    battery() : battery{1.5}{}; //constructor delgation
    battery(double volts);
    double getVolts() const;
    void setVolts(double Volts);
    
};
#include <stdio.h>

#endif /* battery_hpp */
