//
//  VacationAccount.cpp
//  cs 31 Project 6
//
//  Created by Coco Li on 3/13/23.
//

#include "VacationAccount.h"

VacationAccount :: VacationAccount(int EmployeeID){
    setID(EmployeeID);  //validating employeeID being passed
} //constructor

double VacationAccount:: getBalance(){
    return mBalance;
}

void VacationAccount:: setID(int EmployeeID){
    string stringEmployeeID = to_string(EmployeeID); // convert to a string to check length and each individual num
    string idNum = "";
    if (stringEmployeeID.size() == 6){
        for (int i = 0; i < stringEmployeeID.size(); i++){
            if (isdigit(stringEmployeeID[i])){
                idNum += stringEmployeeID[i];  // if it is a digit 0-9, then add it to idNum
            }
            else{
                mID = -1; //if it is not digit, mID is automatically -1
            }
        }
        mID = EmployeeID; // if the for loop is done and everything was a digit then mID is EmployeeID
    }
    else{
        mID = -1; //if the length is not 6 digits, it is an invalid ID number
    }
}

int VacationAccount:: getID(){
    return mID;
}

bool VacationAccount:: addVacationToAccount(BloodDonation donation){
    if(donation.getID() == getID() && donation.getID()!= -1 && donation.getWeight() != -1 && donation.getAge() != -1 && mID != -1){
        mBalance += 4;
        return true;
    }
    else{
        return false;
    }
}
