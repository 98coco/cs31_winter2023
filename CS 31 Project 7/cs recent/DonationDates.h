//
//  DonationDates.hpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#ifndef DonationDates_hpp
#define DonationDates_hpp
#include <string>
#include "BloodDonation.h"

class DonationDates{
    
private:
    int mMonth;
    int mDay;
    int mYear;
    int mID;
    
public:
    DonationDates(int EmployeeID); // this date is the last time they donated

    int getID();
    
    void setEmployeeID(int EmployeeID);
    
    bool firstDonationDate(int Month,int Day, int Year, BloodDonation donor); //adding their donation date to their account
    bool canDonateAgain(int Month, int day, int year,BloodDonation donor); // this date is the day they want to donate again; passing blood donation to make sure the id's match
};

#include <stdio.h>

#endif /* DonationDates_hpp */
