//
//  planeflight.cpp
//  cs 31 project 5
//
//  Created by Coco Li on 2/28/23.
//

#include <iostream>
#include "PlaneFlight.h"

//constructor
PlaneFlight :: PlaneFlight (string passengerName, string fromCity, string toCity, double cost, double mileage){
    setName(passengerName);
    setFromCity(fromCity);
    setToCity(toCity);
    setCost(cost);
    setMileage(mileage);
}

double PlaneFlight::getCost(){ //getter
    return mCost;
}

void PlaneFlight :: setCost(double cost){ //setter
    if (cost < 0){  
        mCost = -1;
    }
    else{
        mCost = cost;
    }
}

double PlaneFlight:: getMileage(){ //getter
    return mMileage;
}

void PlaneFlight:: setMileage(double mileage){ //setter
    if (mileage < 0){
        mMileage = -1;
    }
    else{
        mMileage = mileage;
    }
}

string PlaneFlight:: getName(){  //getter
    return mName;
}

void PlaneFlight :: setName(string name){ //setter
    if (name != ""){
        mName = name;
    }
}

string PlaneFlight :: getFromCity(){ //getter
    return mFromCity;
}

void PlaneFlight :: setFromCity(string from){ //setter
    if (from != "" && from != mToCity){
        mFromCity = from;
    }
}

string PlaneFlight :: getToCity(){ //getter
    return mToCity;
}
 
void PlaneFlight :: setToCity(string to){ //setter
    if (to != "" && to != mFromCity){
        mToCity = to;
    }
}

