//
//  DonationDates.cpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#include "DonationDates.h"

DonationDates :: DonationDates(int EmployeeID){
    setEmployeeID(EmployeeID);
}

void DonationDates :: setEmployeeID(int EmployeeID){
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

int DonationDates:: getID(){
    return mID;
}

//checking to see if their recent Donation Date is valid; adds the date for new donors to their account
bool DonationDates :: firstDonationDate(int month, int day, int year, BloodDonation donor){
    if (donor.getID() == mID && donor.getID() != -1 && donor.getWeight() != -1 && donor.getAge() != -1 ){ //valid donor
        if ((month <= 12 && month >= 1) && (day <= 31 && day >= 1) && year >= 2023){ //apply the new valid donation date to account
            mMonth = month;
            mDay = day;
            mYear = year;
            return true;
        }
    }
    return false;
}

//user inputs the day they want to donate again; passes in BloodDonation donor to make sure that the employee ID's match
bool DonationDates:: canDonateAgain(int month, int day, int year,BloodDonation donor){
    if ((month <= 12 && month > 1) && (day <= 31 && day > 1) && year >= 2023){ //making sure the past day is valid
        if (donor.mID != mID || donor.mID == -1 || donor.mAge == -1 || donor.mWeight == -1){ // if id's do not match up and id, age and weight is invalid they can't donate
            return false;
        }
        else if(mMonth == month && mDay == day && mYear == year){  //can't donate on the same day
            return false;
        }
        else if(mMonth >= month && (mDay <= day || mDay >= day) && (mYear >= year || mYear <= year)){  //dates have to be in chronological order
            return false;
        }
        else{
            mMonth = month;  //updates this new date of donation to the account
            mDay = day;
            mYear = year;
            return true; //slay can donate
        }
    }
    else{
        return false; //return false because date is not valid so they can't donate again
    }
}

