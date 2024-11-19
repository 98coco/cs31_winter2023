//
//  main.cpp
//  cs 31 Project 6
//
//  Created by Coco Li on 3/13/23.
//

#include "VacationAccount.h"
#include "BloodDonation.h"
#include <cassert>

#include <iostream>
using namespace std;


int main() {
    
//    BloodDonation donor1(752401, 45, 99.56);
//    BloodDonation donor2(889543, 55, 109.50);
//    BloodDonation donor3(89643244, 65, 187.55);
//    BloodDonation donor4(855565, 66, 127.00);
//    BloodDonation donor5(123, 10, 280.00); // all invlaid
//
//    VacationAccount account1(752401);
//    VacationAccount account2(889543);
//    VacationAccount account3(89643244);
//    VacationAccount account4(855565);
//    VacationAccount account5(123);
//
//    assert(donor1.getID( ) == 752401);
//    assert(donor1.getAge() == 45);
//    assert(donor1.getWeight() == -1);  // checks invalid weight
//
//    assert(donor2.getAge( ) ==55);
//    assert(donor2.getWeight() == 109.50);
//    assert(donor2.getID() == 889543);
//
//    assert(donor3.getID() == -1); //checks invalid ID
//    assert(donor3.getAge() == 65);
//    assert(donor3.getWeight() == 187.550000 );
//
//    assert(donor4.getID() == 855565);
//    assert(donor4.getAge() == -1); //checks invalid Age
//    assert(donor4.getWeight() == 127.00);
//
//    assert(donor5.getAge() == -1);
//    assert(donor5.getWeight() == 280.00);
//    assert(donor5.getID() == -1);
//
//    // account balance starts at zero...
//    assert(account2.getBalance( ) == 0.000000 );
//    assert(account2.getID( ) ==  889543);
//
//    // Vacation adds to vacation balance
//    assert(account2.addVacationToAccount(donor2) == true );
//    assert(account2.addVacationToAccount(donor1) == false );
//    assert(account2.getBalance( ) == 4.000000 );
//
//    assert(account2.addVacationToAccount(donor2) == true ); //donor donated again
//    assert(account2.getBalance( ) == 8.000000 ); //add 4 to the balance
//    assert(account2.addVacationToAccount(donor2) == true ); //donor donated again
//    assert(account2.getBalance( ) == 12.000000 );
//
//    assert(account5.getID() == -1); //invalid id
//    assert(account5.addVacationToAccount(donor5) == false);
//    assert(account5.getBalance() == 0); //if invalid id, the balance should still return 0 because balance is at 0 for all accounts in the begginning of time
//
//    assert(account3.addVacationToAccount(donor3) == false); //invalid account
//
//    assert(account4.getBalance() == 0);
//    assert(account4.addVacationToAccount(donor4) == false); // false because age is not within range
//
//    assert(account4.addVacationToAccount(donor3) == false); //false because account ID's do not match
//
//    assert(account1.getID() == 752401);  //making sure getID works correctly in vacation account
//    assert(account2.getID() == 889543);
//    assert(account3.getID() == -1);
//    assert(account4.getID() == 855565);
//    assert(account5.getID() == -1);
//
//    BloodDonation donerMessedUpData(1000000, 20, 281);
//    VacationAccount accountMessedUpData(1000000);
//
//    assert(donerMessedUpData.getAge() == -1);
//    assert(donerMessedUpData.getWeight() == -1);
//    assert(donerMessedUpData.getID() == -1);
//
//    assert(accountMessedUpData.getID() == -1);
//    assert(accountMessedUpData.getBalance() == 0);
//
//
//    VacationAccount account100(314122);
//    BloodDonation doner100(314122, 56, 164.77);
//
//    assert(account100.addVacationToAccount(doner100) == true);
//    assert(account100.getBalance() == 4.000);
//    assert(account100.bonusHours(doner100) == true);
//    assert(account100.getBalance() == 14.0000);
//
//
//    VacationAccount account101(315122);
//    BloodDonation doner101(315122, 35, 141.07);
//
//    assert(account101.addVacationToAccount(doner101) == true);
//    assert(account101.getBalance() == 4.000);
//    assert(account101.bonusHours(doner101) == false);
//    assert(account101.getBalance() == 4.000);
//
//    VacationAccount account102(315);
//    BloodDonation doner102(315, 59, 142.18);
//
//    assert(account102.addVacationToAccount(doner102) == false);
//    assert(account102.getBalance() == 0.000);
//    assert(account102.bonusHours(doner102) == false);
//    assert(account102.getBalance() == 0.000);
//
//    double *p1,p2,p3;
//
//    double array[4] = {1.0,2.0,3.0,4.0};
//
//    p1 = array; //1
//    p2 = array[0] + 1.0; //2
//    p3 = array[0] + 2.0; //3
//
//    cout << *p1 << endl;
//    cout << p2 << endl;
//    cout << p3 << endl;
//
//    cout << "all test past!" << endl;
    
    int *entry;
    entry = new int[10];

    int number;

//    for (int i = 0; i < 10; i++){
//        cin >> number;
//        entry[i] = number;
//    }
//
//    for (int i = 0; i < 10; i++){
//        cout << entry[i] << endl;
//    }
    
    for (int i = 0; i < 10; i++){
        cin >> number;
        *(entry +i) = number;
    }
    
    for (int i = 0; i < 10; i++){
        cout << entry[i] << endl;
    }
    
//
  
//    int foo(string s ="CS 31", char grade ='A');
//    int foo(double d, int i, string s);
//    int foo(string first = "john", string last);
    
    return 0;
}
