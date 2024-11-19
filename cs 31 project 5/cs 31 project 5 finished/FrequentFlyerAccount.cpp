//
//  FrequentFlyerAccount.cpp
//  cs 31 project 5
//
//  Created by Coco Li on 3/2/23.
//

#include <iostream>
#include "FrequentFlyerAccount.h"

#include <string>
using namespace std;

//constructor
FrequentFlyerAccount:: FrequentFlyerAccount (string name){
    if (name != ""){
        mName = name; //creating account or searching account
    }
}

double FrequentFlyerAccount :: getBalance(){
    return mBalance;
}

string FrequentFlyerAccount :: getName(){
    return mName;
}

bool FrequentFlyerAccount:: addFlightToAccount (PlaneFlight flight){
    string passengerName = flight.getName(); //getting name of the person on the PlaneFlight flight
    
    if (passengerName == mName && flight.getCost() > 0 && flight.getToCity() != flight.getFromCity() && flight.getToCity() != "" && flight.getFromCity() != ""){  //only add to account when all these are true -- requirements listed on Additional FAQ
        mBalance += flight.getMileage();
        return true;
    }
    return false;
}

bool FrequentFlyerAccount:: freeFlight(string from, string to, double mileage,PlaneFlight &flight){
    if (from == to && from == "" && to == "" && mileage < 0){  //not qualified for a free flight
        return false;
    }
    else if (canEarnFreeFlight(mileage) == true){  //qualified for free flight --> change flight information
        flight.setFromCity(from);
        flight.setToCity(to);
        flight.setMileage(mileage);
        flight.setCost(0);
        flight.setName(mName);
        mBalance = mBalance - mileage;
        return true;
    }
        return false;
}

bool FrequentFlyerAccount:: canEarnFreeFlight(double mileage){  //checking if account has enough miles
    if (mBalance >= mileage){
        return true;
    }
    return false;
}



