//
//  VacationAccount.h
//  cs 31 Project 6
//
//  Created by Coco Li on 3/13/23.
//

#ifndef VacationAccount_H
#define VacationAccount_H
#include <string>
#include "BloodDonation.h"


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
    
};

#include <stdio.h>

#endif /* VacationAccount_hpp */
