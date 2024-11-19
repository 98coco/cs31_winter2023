//
// CS 31 Project 2: payment.cpp
// Created by Coco Li on 1/26/23.
// UID: 905917242
//

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // user inputs:
    
    string State, Month;
    int Day, Year;
    double Purchase,Total,stateTaxRate = 0,avgLocalTaxRate = 0,Levy = 0; //declaring and initializing
    
    cout << "State Name: ";
    getline(cin, State);
    cin.clear(); // helps clear with the error flags if someone inputs cin incorrectly
    
    cout << "Purchase amount: ";
    cin >> Purchase;
    cin.clear();
    cin.ignore(10000,'\n'); // helps ignore the next 10000 whitespaces or until new line character -- allows to clear the keyboard buffer especially sicne we are using getline next
    
    cout << "Provide the month: ";
    getline(cin,Month);
    cin.clear();
    
    cout << "Provide the day: ";
    cin >> Day;
    cin.clear();
    cin.ignore(10000,'\n');
    
    cout << "Provide the year: ";
    cin >> Year;
    cin.clear();
    
    // checking invalids:
    
    if (State != "Alabama" && State != "Alaska" && State != "Arizona" && State != "Arkansas" && State != "California" && State != "Colorado" && State != "Connecticut" && State != "Delaware" && State != "Florida" && State != "Georgia" && State != "Hawaii" && State != "Idaho" && State != "Illinois" && State != "Indiana" && State != "Iowa" && State != "Kansas" && State != "Kentucky" && State != "Louisiana" && State != "Maine" && State != "Maryland" && State != "Massachusetts" && State != "Michigan" && State != "Minnesota" && State != "Mississippi" && State != "Missouri" && State != "Montana" && State != "Nebraska" && State != "Nevada" && State != "New Hampshire" && State != "New Jersey" && State != "New Mexico" && State != "New York" && State != "North Carolina" && State != "North Dakota" && State != "Ohio" && State != "Oklahoma" && State != "Oregon" && State != "Pennsylvania" && State != "Rhode Island" && State != "South Carolina" && State != "South Dakota" && State != "Tennessee" && State != "Texas" && State != "Utah" && State != "Vermont" && State != "Virginia" && State != "Washington" && State != "West Virginia" && State != "Wisconsin" && State != "Wyoming"){
        
        cout << "Invalid state!\n";
    }
    
    else if (Purchase <= 0){
        cout << "Invalid amount!\n";
    }
    
    else if (Month != "January" && Month != "February" && Month != "March" && Month != "April" && Month != "May" && Month != "June" && Month != "July" && Month != "August" && Month != "September" && Month != "October" && Month != "November" && Month != "December" ){
        cout << "Invalid month!\n";
    }
    
    else if ((Day < 1 ) || (Day > 31)){
        cout << "Invalid day!\n";
    }
    
    else if ((Year < 1) || (Year > 2025)){
        cout << "Invalid year!\n";
    }
    
    // states & taxes:
    
    else{
        if (State == "Alabama"){
            if ((Month == "July" && Day == 15) || (Month == "July" && Day == 16) || (Month == "July" && Day == 17)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .04;
                avgLocalTaxRate = .0514;
                Levy = 0;
            }
        }
        
        if (State == "Alaska"){
            stateTaxRate = 0;
            avgLocalTaxRate = .0143;
            Levy = 0;
        }
        
        if (State == "Arizona"){
            stateTaxRate = .0560;
            avgLocalTaxRate = .0277;
            Levy = 0;
        }
        
        if (State == "Arkansas"){
            if ((Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                Total = Purchase;
                stateTaxRate = .0650;
                avgLocalTaxRate = .0293;
                Levy = 0;
            }
        }
        
        if (State == "California"){
            stateTaxRate = .0725;
            avgLocalTaxRate = .0131;
            Levy = .01;
        }
        
        if (State == "Colorado"){
            stateTaxRate = .029;
            avgLocalTaxRate = .0473;
            Levy = 0;
        }
        
        if (State == "Connecticut"){
            if ((Month == "August" && Day == 21) || (Month == "August" && Day == 22) || (Month == "August" && Day == 23) || (Month == "August" && Day == 24) || (Month == "August" && Day == 25) || (Month == "August" && Day == 26) || (Month == "August" && Day == 27)) {
                Total = Purchase;
            }
            else{
                stateTaxRate = .0635;
                avgLocalTaxRate = 0;
                Levy = 0;
            }
        }
        
        if (State == "Florida"){
            stateTaxRate = .06;
            avgLocalTaxRate = .0105;
            Levy = 0;
        }
        
        if (State == "Georgia"){
            stateTaxRate = .04;
            avgLocalTaxRate = .0329;
            Levy = 0;
        }
        
        if (State == "Hawaii"){
            stateTaxRate = .04;
            avgLocalTaxRate = .0041;
            Levy = 0;
        }
        
        if (State == "Idaho"){
            stateTaxRate = .06;
            avgLocalTaxRate = .0003;
            Levy = 0;
        }
        
        if (State == "Illinois"){
            stateTaxRate = .0625;
            avgLocalTaxRate = .0249;
            Levy = 0;
        }
        
        if (State == "Indiana"){
            stateTaxRate = .07;
            avgLocalTaxRate = 0;
            Levy = 0;
        }
        
        if (State == "Iowa"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .06;
                avgLocalTaxRate = .0082;
                Levy = 0;
            }
        }
        
        if (State == "Kansas"){
            stateTaxRate = .0650;
            avgLocalTaxRate = .0217;
            Levy = 0;
        }
        
        if (State == "Kentucky"){
            stateTaxRate = .06;
            avgLocalTaxRate = 0;
            Levy = 0;
        }
        
        if (State == "Louisiana"){
            stateTaxRate = .0445;
            avgLocalTaxRate = .05;
            Levy = 0;
        }
        
        if (State == "Maine"){
            stateTaxRate = .0550;
            avgLocalTaxRate = 0;
            Levy = 0;
        }
        
        if (State == "Maryland"){
            if ((Month == "August" && Day == 14) || (Month == "August" && Day == 15) || (Month == "August" && Day == 16) || (Month == "August" && Day == 17) || (Month == "August" && Day == 18) || (Month == "August" && Day == 19) || (Month == "August" && Day == 20)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .06;
                avgLocalTaxRate = 0;
                Levy = 0;
            }
        }
        
        if (State == "Massachusetts"){
            if ((Month == "August" && Day == 14) || (Month == "August" && Day == 15)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0625;
                avgLocalTaxRate = 0;
                Levy = 0;
            }
        }
        
        if (State == "Michigan"){
            stateTaxRate = .06;
            avgLocalTaxRate = 0;
            Levy = 0;
        }
        
        if (State == "Minnesota"){
            stateTaxRate = .0688;
            avgLocalTaxRate = .0055;
            Levy = 0;
        }
        
        if (State == "Mississippi"){
            if ((Month == "July" && Day == 29) || (Month == "July" && Day == 30)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .07;
                avgLocalTaxRate = .0007;
                Levy = 0;
            }
        }
        
        if (State == "Missouri"){
            if ((Month == "April" && Day == 19) || (Month == "April" && Day == 20) || (Month == "April" && Day == 21) ||(Month == "April" && Day == 22) ||(Month == "April" && Day == 23) ||  (Month == "April" && Day == 24) ||(Month == "April" && Day == 25)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0423;
                avgLocalTaxRate = .039;
                Levy = 0;
            }
        }
        
        if (State == "Nebraska"){
            stateTaxRate = .0550;
            avgLocalTaxRate = .0135;
            Levy = 0;
        }
        
        if (State == "Nevada"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0685;
                avgLocalTaxRate = .0129;
                Levy = 0;
            }
        }
        
        if (State == "New Jersey"){
            stateTaxRate = .0663;
            avgLocalTaxRate = -.0003;
            Levy = 0;
        }
        
        if (State == "New Mexico"){
            stateTaxRate = .0513;
            avgLocalTaxRate = .0269;
            Levy = 0;
        }
        
        if (State == "New York"){
            stateTaxRate = .04;
            avgLocalTaxRate = .0449;
            Levy = 0;
        }
        
        if (State == "North Carolina"){
            stateTaxRate = .0475;
            avgLocalTaxRate = .0222;
            Levy = 0;
        }
        
        if (State == "North Dakota"){
            stateTaxRate = .05;
            avgLocalTaxRate = .0185;
            Levy = 0;
        }
        
        if (State == "Ohio"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0575;
                avgLocalTaxRate = .0142;
                Levy = 0;
            }
        }
        
        if (State == "Oklahoma"){
            if ((Month == "August" && Day == 6) || (Month == "August" && Day == 7) || (Month == "August" && Day == 8)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0450;
                avgLocalTaxRate = .0442;
                Levy = 0;
            }
        }
        
        if (State == "Pennsylvania"){
            stateTaxRate = .06;
            avgLocalTaxRate = .0034;
            Levy = 0;
        }
        
        if (State == "Rhode Island"){
            stateTaxRate = .07;
            avgLocalTaxRate = 0;
            Levy = 0;
        }
        
        if (State == "South Carolina"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .06;
                avgLocalTaxRate = .0143;
                Levy = 0;
            }
        }
        
        if (State == "South Dakota"){
            stateTaxRate = .0450;
            avgLocalTaxRate = .0190;
            Levy = 0;
        }
        
        if (State == "Tennessee"){
            if ((Month == "July" && Day == 29) || (Month == "July" && Day == 30) || (Month == "July" && Day == 31)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .07;
                avgLocalTaxRate = .0247;
                Levy = 0;
            }
        }
        
        if (State == "Texas"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .0625;
                avgLocalTaxRate = .0194;
                Levy = 0;
            }
        }
        
        if (State == "Utah"){
            stateTaxRate = .0595;
            avgLocalTaxRate = .0099;
            Levy = .0125;
        }
        
        if (State == "Vermont"){
            stateTaxRate = .06;
            avgLocalTaxRate = .0018;
            Levy = 0;
        }
        
        if (State == "Virginia"){
            stateTaxRate = .0530;
            avgLocalTaxRate = .0035;
            Levy = .01;
        }
        
        if (State == "Washington "){
            stateTaxRate = .0650;
            avgLocalTaxRate = .0267;
            Levy = 0;
        }
        
        if (State == "West Virginia"){
            if ((Month == "August" && Day == 5) || (Month == "August" && Day == 6) || (Month == "August" && Day == 7)){
                Total = Purchase;
            }
            else{
                stateTaxRate = .06;
                avgLocalTaxRate = .0039;
                Levy = 0;
            }
        }
        
        if (State == "Wisconsin"){
            stateTaxRate = .05;
            avgLocalTaxRate = .0044;
            Levy = 0;
        }
        
        if (State == "Wyoming"){
            stateTaxRate = .04;
            avgLocalTaxRate = .0136;
            Levy = 0;
        }
        
        if (State == "Delaware" || State == "Montana" || State == "New Hampshire" || State == "Oregon"){
            Total = Purchase;
        }
        Total = (Purchase * stateTaxRate) + (Purchase * avgLocalTaxRate) + (Purchase * Levy) + Purchase;
        cout.precision(2);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout << "Please pay a total of " << '$' << Total << '\n';
                
    }
    return 0;
}
