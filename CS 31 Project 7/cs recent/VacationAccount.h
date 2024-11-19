//
//  VacationAccount.hpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#ifndef VACATIONACCOUNT_H
#define VACATIONACCOUNT_H
#include <string>
#include "BloodDonation.h"


using namespace std;

class VacationAccount{
    
private:
    
    int mID;
    double mBalance = 0;

public:
    
    VacationAccount(int EmployeeID); // constructor
    double getBalance();
    int getID();
    
    void setID(int EmployeeID); //setter for employee id
    
    bool addVacationToAccount(BloodDonation donation);
    bool redeemVacationAccount(int points,BloodDonation donation);
    
};

#include <stdio.h>


#include <stdio.h>

#endif /* VacationAccount_hpp */
