//
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#include <stdio.h>
#include <iostream>
#include "BloodDonation.h"

BloodDonation:: BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight){
    setID(EmployeeID);
    setAge(EmployeeAge);
    setWeight(EmployeeWeight);
}

int BloodDonation:: getID(){
    return mID;
}

void BloodDonation:: setID(int EmployeeID){
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

int BloodDonation :: getAge(){
    return mAge;
}

void BloodDonation:: setAge(int EmployeeAge){
    if (EmployeeAge < 21 || EmployeeAge > 65){
        mAge = -1;
    }
    else{
        mAge = EmployeeAge;
    }
}

double BloodDonation:: getWeight(){
    return mWeight;
}

void BloodDonation:: setWeight(double EmployeeWeight){
    if (EmployeeWeight >= 101.00 && EmployeeWeight <= 280.00){
        mWeight = EmployeeWeight;
    }
    else{
        mWeight = -1;
    }
}
