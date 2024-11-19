//
//  FrequentFlyerAccount.hpp
//  cs 31 project 5
//
//  Created by Coco Li on 3/2/23.
//

#ifndef FrequentFlyerAccount_H
#define FrequentFlyerAccount_H

#include <stdio.h>
#include <string>
#include "PlaneFlight.h"

using namespace std;

class FrequentFlyerAccount{
    
private:
    
    string mName;
    double mBalance = 0;
    
public:
    
    double getBalance(); //getters
    string getName(); //getters

    FrequentFlyerAccount(string name);  //constructor
    bool addFlightToAccount(PlaneFlight flight);  //adding flight to acc if name matches
    bool canEarnFreeFlight(double mileage); // checking to see if account has enough miles
    bool freeFlight(string from, string to, double mileage,PlaneFlight &flight);  //changing flight info when there is a free flight
    
};


#endif /* FrequentFlyerAccount_H */
