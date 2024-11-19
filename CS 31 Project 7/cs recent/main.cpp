//
//  main.cpp
//  CS 31 Project 7
//
//  Created by Coco Li on 3/21/23.
//

#include "BloodDonation.h"
#include "VacationAccount.h"
#include "DonationDates.h"
#include "VolunteerBloodDrive.h"

#include <iostream>
#include <cassert>


int main() {
//project 7 test cases
    BloodDonation donor2(889543, 55, 109.50);
    BloodDonation donor3(234323,20, 100.00);
    BloodDonation donor5(232,15,120.9);
    BloodDonation donor6(789233, 18, 100.00);
  
    VacationAccount account2(889543);
    
    DonationDates EmployeeDonor1(889543);
    
    assert(EmployeeDonor1.getID() == 889543);
    assert(EmployeeDonor1.firstDonationDate(3,28,2023, donor2) == true); //checking if it gives a valid date
    assert(EmployeeDonor1.canDonateAgain(3, 28, 2023, donor2) == false); //can't donate on the same day
    assert(EmployeeDonor1.canDonateAgain(4,5,2023,donor2) == true);
    assert(EmployeeDonor1.canDonateAgain(3, 27, 2023, donor2) == false); //checking to see whether or not dates that are passed is in chronological order.
    
    //adding balance --> testing redeemVacationAccount method
    assert(account2.addVacationToAccount(donor2) == true );
    assert(account2.getBalance( ) == 4.000000 );
    assert(account2.addVacationToAccount(donor2) == true ); //donor donated again
    assert(account2.getBalance( ) == 8.000000 ); //add 4 to the balance
    assert(account2.addVacationToAccount(donor2) == true ); //donor donated again
    assert(account2.getBalance( ) == 12.000000 );
    
    assert(account2.redeemVacationAccount(12, donor2) == true);
    assert(account2.getBalance() == 0);
    
    VolunteerBloodDrive volunteer1(889543, 4);
    VolunteerBloodDrive volunteer2(567832);
    VolunteerBloodDrive volunteer3(1245);
    VolunteerBloodDrive volunteer4(329420,2);
     
    assert(volunteer1.canVolunteer(12, 4, 2023, donor2) == false); //donor2 can donate blood so they can't be a volunteer
    assert(volunteer2.canVolunteer(2, 3, 2025, donor5) == false); //invalid employeeID -- can't donate
    assert(volunteer2.canVolunteer(6, 7, 2024, donor3) == true); //can volunteer because they can't donate blood
    assert(volunteer3.canVolunteer(10,18,2023, donor6) == false); //invalid volunteerID
    
    assert(volunteer1.getVolunteerID() == 889543);
    assert(volunteer2.getVolunteeredHours() == 0); //checking to see if constructor delegation worked
    
    assert(volunteer2.addVolunteerHours(3, 29, 2023, 4, donor3) == true);
    assert(volunteer2.addVolunteerHours(4, 5, 2023, 5, donor3) == false); //can't volunteer for more than 4 hours
    assert(volunteer2.addVolunteerHours(3, 29, 2023, 1, donor3) == false); //can't volunteer on the same day again
    assert(volunteer2.addVolunteerHours(2, 28, 2023, 3, donor3) == false); //volunteer days have to be in chronological order
    assert(volunteer2.addVolunteerHours(5, 6, 2024, 3, donor3) == true); //can volunteer
    
    assert(volunteer2.redeemVolunteerHours(400, donor3) == false); //volunteer does not have enough points in their account
    assert(volunteer2.getVolunteeredHours() == 7);
    assert(volunteer2.redeemVolunteerHours(7, donor3) == true); //volunteer has enough points
    assert(volunteer2.getVolunteeredHours() == 0);
    
    assert(volunteer4.canVolunteer(6, 5, 2023, donor6) == true);
    assert(volunteer4.getVolunteerID() == 329420);
    assert(volunteer4.addVolunteerHours(7, 28, 2025, 4, donor6) == true);
    assert(volunteer4.getVolunteeredHours() == 6);
    assert(volunteer4.addVolunteerHours(7, 24, 2025, 2, donor6) == false);
    assert(volunteer4.addVolunteerHours(7, 30, 2025, 4, donor6) == true);
    assert(volunteer4.addVolunteerHours(7, 30, 2025, -1, donor6) == false); //invalid volunteer hour
    assert(volunteer4.addVolunteerHours(8, 25, 2025, 3, donor6) == true);
    assert(volunteer4.redeemVolunteerHours(13, donor6) == true);
    assert(volunteer4.getVolunteeredHours() == 0); //because they redeemed their volunteer points for vacation

    cout << "all test past!" << endl;
}
