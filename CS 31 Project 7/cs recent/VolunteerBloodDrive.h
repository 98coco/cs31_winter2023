//
//  VolunteerBloodDrive.hpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#ifndef VOLUNTEERBLOODDRIVE_H
#define VOLUNTEERBLOODDRIVE_H

#include "BloodDonation.h"


//volunteer account
//for those who can't donate, if they volunteer at a blood drive they can earn hours to be used towards their vacation days
//for every hour they donate their balance increases by 4
//people who can donate are not allowed to make a volunteer account because their balance for vacation days are added based on donation

class VolunteerBloodDrive{
    
private:
    
    int mVolunteerID,mVolunteeredHours;
    int mMonth, mDay, mYear;
    
public:

    
    VolunteerBloodDrive(int VolunteerID,int VolunteeredHours); //creating an account when they volunteer
    
    VolunteerBloodDrive(int VolunteerID) : VolunteerBloodDrive{VolunteerID, 0}{
    } //creating an account before volunteering
    //set default volunteered hours to 0 --> constructor delegation
    
    int getVolunteerID();
    int getVolunteeredHours();
    
    void setVolunteerID(int VolunteerID);
    void setVolunteeredHours(int VolunteerHours);
    
    bool canVolunteer(int month, int day,int year,BloodDonation Donor);  //checks if the employee can volunteer
    //volunteer id and employee id can't match because they are for separate things
    
    bool addVolunteerHours(int month, int day,int year, int VolunteeredHours, BloodDonation Donor);
    bool redeemVolunteerHours(int points, BloodDonation donor);
};


#include <stdio.h>

#endif /* VolunteerBloodDrive_hpp */
