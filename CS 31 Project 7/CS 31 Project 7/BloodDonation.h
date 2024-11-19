//
//  BloodDonation.hpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#ifndef BLOODDONATION_HPP
#define BLOODDONATION_HPP

#include <string>
#include <iostream>

using namespace std;

class DonationDates;
class VolunteerBloodDrive;

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
    
    friend VolunteerBloodDrive;
    friend DonationDates;

};

#endif /* BloodDonation_h */

