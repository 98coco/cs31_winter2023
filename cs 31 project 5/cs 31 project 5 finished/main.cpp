//
//  main.cpp
//  cs 31 project 5
//
//  Created by Coco Li on 3/4/23.
//

#include "PlaneFlight.h"
#include "FrequentFlyerAccount.h"
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

int main(){

    PlaneFlight f1("Coco", "LAX", "JFK", 50.00, 2469);
    PlaneFlight f2("","","London",60.00, 3000);
    PlaneFlight f3("Peyton","LAS","",98.00, 458);
    PlaneFlight f4("Hydro","LAX","LAX",-75.00, -489);
    PlaneFlight f5("Anna","LAX","Tokyo", 0, -489);
    PlaneFlight f6("","","", -2, -489);
    
    assert(f1.getName() == "Coco");
    assert(f1.getFromCity() == "LAX");
    assert(f1.getToCity() == "JFK");
    assert(std:: to_string(f1.getCost()) == "50.000000");
    assert(std:: to_string(f1.getMileage()) == "2469.000000");
    
    assert(f2.getName() == "");  // empty string ignore
    assert(f2.getFromCity() == ""); // empty string ignore
    assert(f2.getToCity() == "London"); // not an empty string and not equal to getFromCity so this should return London
    assert(std:: to_string(f2.getCost()) == "60.000000");
    assert(std:: to_string(f2.getMileage()) == "3000.000000");
    
    assert(f3.getName() == "Peyton");
    assert(f3.getFromCity() == "LAS"); // not an empty string and not equal to getFromCity so this should return LAS
    assert(f3.getToCity() == "");
    assert(std:: to_string(f3.getCost()) == "98.000000");
    assert(std:: to_string(f3.getMileage()) == "458.000000");
    
    assert(f4.getName() == "Hydro");
    assert(f4.getFromCity() == "LAX");  // checks when FromCity and ToCity are the same
    // returns LAX because the class sets mFromCity to LAX before setting mToCity in the constructor
    assert(f4.getToCity() == ""); //does not return getToCity since LAX is already set in mFromCity and now the compiler is comparing the current string taken in with mFromCity; basically ignoring getToCity's value
    assert(f4.getCost() == -1);
    assert(f4.getMileage() == -1);
    
    assert(f5.getName() == "Anna");
    assert(f5.getFromCity() == "LAX");
    assert(f5.getToCity() == "Tokyo");
    assert(f5.getCost() == 0);
    assert(f5.getMileage() == -1);
    
    assert(f6.getName() == "");
    assert(f6.getFromCity() == "");
    assert(f6.getToCity() == "");
    assert(f6.getCost() == -1);
    assert(f6.getMileage() == -1);
    
    FrequentFlyerAccount a1("Coco");
    FrequentFlyerAccount a3("Peyton");
    FrequentFlyerAccount a4("Hydro");
    FrequentFlyerAccount a6("Chloe"); //testing to show that names don't match
    
    assert(a1.getName() == "Coco");
    assert(a3.getName() == "Peyton");
    assert(a4.getName() == "Hydro");
    assert(a6.getName() == "Chloe");
    
    assert(a1.addFlightToAccount(f1) == true);
    assert(std:: to_string(a1.getBalance()) == "2469.000000"); //hasnt changed yet because free flight has not been called
    assert(a1.canEarnFreeFlight(245) == true);
    assert(a1.freeFlight("LAX","NYC", 45, f6) == true);
    assert(std:: to_string(a1.getBalance()) == "2424.000000");
    
    assert(f6.getName() == "Coco");   //changed flight
    assert(f6.getFromCity() == "LAX");
    assert(f6.getToCity() == "NYC");
    assert(f6.getCost() == 0);
    assert(f6.getMileage() == 45);

    assert(a3.addFlightToAccount(f3) == false); //false because of empty string in f3 for toCity
    assert(a3.canEarnFreeFlight(600) == false);
    assert(a3.freeFlight("LAX","Tokyo",600,f3) == false); //not enough points to get a free flight
    
    assert(a4.addFlightToAccount(f6) == false); //checking to whether or not names match
    assert(a4.addFlightToAccount(f4) == false); // returns false because can't add to acc when cities aren't the same, and price is less than 0
    
    PlaneFlight f7("Hydro","LAX","LAX", 34, 340);
    FrequentFlyerAccount a7("Hydro");
    assert(a7.addFlightToAccount(f7) == false); //should return false because the cities are the same for f7 --> account isnt added

    assert(a6.addFlightToAccount(f6) == false); //names do not match
    
    assert(a1.addFlightToAccount(f1) == true);
    assert(a1.canEarnFreeFlight(300) == true);
    assert(std:: to_string(a1.getBalance()) == "4893.000000");
    assert(a1.freeFlight("LAX", "NYC", 5000, f1) == false);
    
    assert(f1.getName() == "Coco");
    assert(f1.getFromCity() == "LAX");
    assert(f1.getToCity() == "JFK");
    assert(std:: to_string(f1.getCost()) == "50.000000");
    assert(std:: to_string(f1.getMileage()) == "2469.000000");  // because we did not change flight f1 is the same
    
    assert(a1.freeFlight("China", "Seattle", 4000, f6) == true);

    assert(f6.getName() == "Coco");   //changed flight
    assert(f6.getFromCity() == "China");
    assert(f6.getToCity() == "Seattle");
    assert(f6.getCost() == 0);
    assert(f6.getMileage() == 4000);
    assert(std:: to_string(a1.getBalance()) == "893.000000");
    
    PlaneFlight shortleg( "Howard", "LAX", "LAS", 49.00, 285 );
    PlaneFlight longleg( "Howard", "LAS", "NYC", 399.00, 2800 );
    PlaneFlight sample( "Sample", "Sample", "Sample", 0, 1 );
    PlaneFlight happy( "Coco", "Sample", "Sample", 0, 1 );
    PlaneFlight hello("Coco","LA","NY", 23.00, 0);
    FrequentFlyerAccount test("Coco");
    assert(test.addFlightToAccount(hello) == true);
    assert(test.freeFlight("Tokyo","New York", 356, hello) == false);

    PlaneFlight Anna("Anna","LAX", "Tokyo",234.00, 350);
    Anna.setToCity("LAX");
    assert(Anna.getToCity()=="Tokyo");
    assert(happy.getFromCity() == "Sample");
    assert(happy.getToCity() == "");

    FrequentFlyerAccount account( "Howard" );
    assert( shortleg.getFromCity( ) == "LAX" );
    assert( shortleg.getToCity( ) == "LAS" );
    assert( shortleg.getName( ) == "Howard" );
    assert( std::to_string( shortleg.getCost( ) ) == "49.000000" );
    assert( std::to_string( shortleg.getMileage( ) ) == "285.000000" );

   // account balance starts at zero...
   assert( std::to_string( account.getBalance( ) ) == "0.000000" );
   assert( account.getName( ) == "Howard" );
   assert( account.canEarnFreeFlight( 3300.00 ) == false );

   // flights add to an account balance
   assert( account.addFlightToAccount( shortleg ) == true );  // returns true because the names match
   assert( account.addFlightToAccount( longleg ) == true );   // returns true because the names match
   assert( std::to_string( account.getBalance( ) ) == "3085.000000" );
                   // free flights reduce an account balance
    if (account.canEarnFreeFlight( 285 )){
            assert( account.freeFlight( "LAS", "LAX", 285, sample ) == true );  // Howard earned a free flight...
            assert( sample.getName( ) == "Howard" );
            assert( std::to_string( sample.getCost( ) ) == "0.000000" );
            assert( sample.getFromCity( ) == "LAS" );
            assert( sample.getToCity( ) == "LAX" );
            assert( std::to_string( sample.getMileage( ) ) == "285.000000" );
            // account has been reduced for this free flight...
            assert( std::to_string( account.getBalance( ) ) == "2800.000000" );
        }

        else{

        assert(false);  // there are enough miles in the account...

        }

        // non-matching names are ignored
        PlaneFlight muffin( "Muffin", "LAX", "Doggie Heaven", 500, 500 );
        assert( account.addFlightToAccount( muffin ) == false );
        assert( std::to_string(account.getBalance( ) ) == "2800.000000" );

    cout << "all tests passed!" << endl;
    return( 0 );
}
