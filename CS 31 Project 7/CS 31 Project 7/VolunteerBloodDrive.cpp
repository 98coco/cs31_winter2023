//
//  VolunteerBloodDrive.cpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#include "VolunteerBloodDrive.h"

VolunteerBloodDrive :: VolunteerBloodDrive(int VolunteerID,int VolunteeredHours){
    setVolunteerID(VolunteerID);
    setVolunteeredHours(VolunteeredHours);
}

void VolunteerBloodDrive :: setVolunteerID(int VolunteerID){ //making sure volunteer ID is valid
    string stringVolunteerID = to_string(VolunteerID); // convert to a string to check length and each individual num
    string idNum = "";
    if (stringVolunteerID.size() == 6){
        for (int i = 0; i < stringVolunteerID.size(); i++){
            if (isdigit(stringVolunteerID[i])){
                idNum += stringVolunteerID[i];  // if it is a digit 0-9, then add it to idNum
            }
            else{
                mVolunteerID = -1; //if it is not digit, mID is automatically -1
            }
        }
        mVolunteerID  = VolunteerID; // if the for loop is done and everything was a digit then mID is EmployeeID
    }
    else{
        mVolunteerID  = -1; //if the length is not 6 digits, it is an invalid ID number
    }
}

void VolunteerBloodDrive :: setVolunteeredHours(int VolunteerHours){ //setting volunteer hours into the account
    if (VolunteerHours > 4 || VolunteerHours < 0){
        mVolunteeredHours = -1;
    }
    else{
        mVolunteeredHours =  VolunteerHours; //Hours used to redeem points
    }
}


int VolunteerBloodDrive:: getVolunteerID(){
    return mVolunteerID;
}

int VolunteerBloodDrive:: getVolunteeredHours(){
    return mVolunteeredHours;
}

bool VolunteerBloodDrive:: canVolunteer(int month, int day,int year,BloodDonation Donor){
    if (Donor.getID() == mVolunteerID){ //volunteerId matches
        return false;
    }
    else if(mVolunteerID == -1){
        return false;
    }
    else if (Donor.getID() == -1){  //can't volunteer because they do not have a valid employee ID
        return false;
    }
    else if (Donor.getID() != mVolunteerID && Donor.getAge() == -1 && Donor.getWeight() == -1 && (month <= 12 && month >= 1) && (day <= 31 && day >= 1) && year >= 2023){ //can volunteer because they do not meet the requirements to donate blood
        mMonth = month;  // set the current day they make their account to the most recent volunteer day
        mDay = day;
        mYear = year;
        return true;
    }
    return false;
}

bool VolunteerBloodDrive:: addVolunteerHours(int month, int day,int year, int VolunteeredHours, BloodDonation Donor){ //when the volunteer wants to add hours to account use this function
    // can access all private members mID, mAge, and mWeight of Blood Donation because Volunteer Blood Drive is a friend of BloodDonation
    
    if (Donor.mID == mVolunteerID){
        return false; //can't add hours because account is invalid
    }
    else if (Donor.mID == -1){
        return false; //can't add hours because account is invalid
    }
    else if (Donor.mID != mVolunteerID && Donor.mAge == -1 && Donor.mWeight == -1){ //can volunteer because they do not meet the requirements to donate blood && have a valid day
        if( VolunteeredHours <= 4 && VolunteeredHours > 0){
            if(mMonth == month && mDay == day && mYear == year){  //can't volunteer more than once a day
                return false;
            }
            else if(mMonth >= month && mDay >= day && mYear >= year){  //dates have to be in chronological order
                return false;
            }
            else{
                mMonth = month;
                mDay = day;
                mYear = year;
                mVolunteeredHours = VolunteeredHours + mVolunteeredHours;
                return true;
            }
        }
        else{
            return false; //return false because their volunteer hours are invalid
        }
    }
    return false; //can't add hours because account is invalid
}

bool VolunteerBloodDrive :: redeemVolunteerHours(int points, BloodDonation donor){
    if (donor.mID != mVolunteerID && donor.mID != -1 && donor.mAge == -1 && donor.mWeight == -1){
        if (points <= mVolunteeredHours){
            mVolunteeredHours = mVolunteeredHours - points;
            return true;
        }
    }
    return false;
}
