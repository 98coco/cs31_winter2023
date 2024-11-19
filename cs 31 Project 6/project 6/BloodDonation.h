//
//  BloodDonation.h
//  cs 31 Project 6
//
//  Created by Coco Li on 3/13/23.
//

#ifndef BloodDonation_H
#define BloodDonation_H

#include <iostream>
#include <string>

using namespace std;

class BloodDonation{
    
private:
    
    int mID, mAge;
    double mWeight;
    
public:
    BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight); //constructor
    
    int getID();
    void setID(int EmployeeID);
    
    int getAge();
    void setAge(int EmployeeAge);
    
    double getWeight();
    void setWeight(double EmployeeWeight);

};

#endif /* BloodDonation_h */
