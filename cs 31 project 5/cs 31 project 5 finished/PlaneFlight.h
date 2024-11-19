//
//  PlaneFlight.h
//  cs 31 project 5
//
//  Created by Coco Li on 3/2/23.
//

#ifndef PlaneFlight_H
#define PlaneFlight_H

#include <string>

using namespace std;

class PlaneFlight{
    
private:
    double mCost, mMileage;  //member variables
    string mFromCity = "", mToCity = "", mName = ""; //member variables
    
public:
    PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage); //constructor
    
    double getCost();  //getter for cost
    void setCost(double cost); //setter for cost
    
    double getMileage(); //getter for milage
    void setMileage(double mileage); //setter for mileage
    
    string getName(); // getter for name
    void setName(string name); //setter for name
    
    string getFromCity();  //getter for From City
    void setFromCity(string from); //setter for From City
    
    string getToCity(); //getter for To City
    void setToCity(string to);  // setter for to City
    
};


#endif /* PlaneFlight_h */
