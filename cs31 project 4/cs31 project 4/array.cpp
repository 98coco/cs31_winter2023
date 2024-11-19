//
//  main.cpp
//  cs31 project 4
//
//  Created by Coco Li on 2/17/23.
// UID: 905 917 242

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int locateMaximum (const string array[], int n ){
    int currentIndex = 0;
    string currentMax;
    for (int i = 0; i < n; i++){
        if (array[i] > currentMax){
            currentIndex = i;
            currentMax = array[i];
        }
        if (array[i] == currentMax){  // if the current element is the same as the current maximum
            currentIndex = currentIndex; // the current index will be the first occurence of that maximum
        }
    }
    return currentIndex;
}

int oneFloat (string s){  // checking to see if it is a float for one string
    int amount = 0;
    string currentString;
    int decimalCount = 0;
    if (s == "."){
        return amount;  // test case is only a .
    }
    for (int i = 0; i < s.size(); i++){
        if (isdigit(s[i])){
            currentString += s[i];
        }
        else if (s[i] == '.'){  //counting decimals
            currentString += s[i];
            decimalCount++;
        }
        else{
            return amount;  // anything that isn't a period or digit automatically returns the amount
        }
    }
    if (decimalCount > 1){ // if there is more than one decimal then just return the amount
        return amount;
    }
    amount++; // if there is only one decimal and/or it is an int, add one to amount to show that the string is a float
    return amount;
}

int countFloatingPointValues( const string array[ ], int  n ){
    int amountOfFloats = 0;
    if (n <= 0){
        return -1;
    }
    else{
        for (int i = 0; i < n; i++){ // gets one string from the array
            if (oneFloat(array[i]) == 1){ // call oneFloat and if it is 1 then the index value is a float
                amountOfFloats++; // if it passes the if statement add one to amountOfFloats
            }
        }
    }
    return amountOfFloats;
}

bool oneNoCapital(string s){ // checks for capitals in one string
    for (int i = 0; i < s.size(); i++){
        if (isupper(s[i])){ // if any letter is uppercase it is false
            return false;
        }
    }
    return true;
}

bool hasNoCapitals( const string array[ ], int n ){

    if (n <= 0){
        return true;
    }
    else{
        for (int i = 0; i < n; i++){ // gets one string from the array
            if(oneNoCapital(array[i]) == false){ // call the function that can only have one string
                return false;
            }
        }
    }
    return true;
}

void printArray(string array[], int n){
    for (int i = 0; i < n; i++){
        cout << array[i] << "  ..  ";
    }
};

int shiftLeft(string array[], int n, int amount, string placeholder){
    int amountOfPlaceHolderUsed = 0;
    if (n <= 0 || amount < 0){
        return -1;
    }
    for (int i = 0; i < n; i++){  // deals with how many elements to move and only goes through those elements in the array
        if (i+amount < n){  // current element + amount is less than the amount we want to index up to
            array[i] = array[i+amount]; // change the current element
        }
        else {
            array[i] = placeholder; //can't access anymore elements, replace it with placeholder
            amountOfPlaceHolderUsed++;
        }
    }
    return amountOfPlaceHolderUsed;
}


int main() {

string data[5] = {"mamaBbcca", "mamaBbcca", "12,", "98.76","tyrion",};
string folks[8] = {"samwell", "jon", "margaery", "daenerys", "tyrion", "sansa", "magdalena", "jon"};
string bubble[6] = {"1.23", "1.039", "hello", "nope","bubblegum","."};
string stars[10] = {"1.33@", "1.039", "SPACESHIP", "3.14159","what","02.3", "89", "what"};
string hydrate[8] = {"2.22", "2.22", "2.22", "2.22","2.22","2.22", "2.22", "2..22"};
string slay[6] = {"I,", "AM", "SUCH", "A","SLAY","!"};
string onlyLetters[6] = {"UP", "What ", "pop", "goes","THe","WEASEL!"};
string a[6] = { "123", "456", "789", "gamma", "beta", "delta" };
string bose[1] = {"1.3"};
string caps[5] = {"helP","tRain"};
string testtest[3] = {"5.", ".5", "0."};
    
    
    assert(locateMaximum(data,5) == 4);
    assert(locateMaximum(folks,7) == 4);
    assert(locateMaximum(bubble,6) == 3);
    assert(locateMaximum(stars,8) == 4);
    assert(locateMaximum(hydrate,8) == 0);
    assert(locateMaximum(slay,6) == 2);
    assert(locateMaximum(onlyLetters,6) == 2);
    assert(locateMaximum(bose,1) == 0);
    assert(locateMaximum(caps,1) == 0);
    assert(locateMaximum(caps,2) == 1);
    assert(locateMaximum(a,3) == 2);
    
    // for one string
    assert(oneFloat("hello") == 0);
    assert(oneFloat("12") == 1);
    assert(oneFloat("12.1") == 1);
    assert(oneFloat("12$") == 0);
    assert(oneFloat("18..09") == 0);
    assert(oneFloat(".") == 0);
    
    assert(countFloatingPointValues(testtest,2) == 2);
    assert(countFloatingPointValues(data,5) == 1);
    assert(countFloatingPointValues(folks,8) == 0);
    assert(countFloatingPointValues(bubble,1) == 1);
    assert(countFloatingPointValues(stars,8) == 4);
    assert(countFloatingPointValues(a, 3) == 3 );
    assert(countFloatingPointValues(bose,1) == 1);
    assert(countFloatingPointValues(hydrate,8) == 7);
    assert(countFloatingPointValues(slay,6) == 0);
    assert(countFloatingPointValues(onlyLetters,6) == 0);
    
    
    // for one string
    assert(oneNoCapital("Hello") == false);
    assert(oneNoCapital("tRain") == false);
    assert(oneNoCapital("hello") == true);
    assert(oneNoCapital("!") == true);
    
    
    assert(hasNoCapitals(data, 1) == false);
    assert(hasNoCapitals(folks, 8) == true);
    assert(hasNoCapitals(bubble, 6) == true);
    assert(hasNoCapitals(stars, 8) == false);
    assert(hasNoCapitals(hydrate, 8) == true);
    assert(hasNoCapitals(slay, 6) == false);
    assert(hasNoCapitals(onlyLetters, 6) == false);
    assert(hasNoCapitals(a, 6) == true );
    assert(hasNoCapitals(bose,1) == true);
    assert(hasNoCapitals(caps,2) == false);

    assert(shiftLeft(data,5,2,"foo") == 2);
    assert(shiftLeft(data,3,2,"foo") == 2);
    assert(shiftLeft(data, -5, 10, "foobar") == -1);
    assert(shiftLeft(data, -5, 10, "foobar") == -1);
    assert(shiftLeft(data, 5, -5, "foobar") == -1);
    assert(shiftLeft(folks, 1, 2, "foobar") == 1);
    assert(shiftLeft(bubble, 6, 3, "foobar") == 3);
    assert(shiftLeft(bubble, 3, 6, "foobar") == 3);
    assert(shiftLeft(bubble, 6, 6, "foobar") == 6);
    assert(shiftLeft(bose, 1, 2, "hello") == 1);
    assert(shiftLeft(onlyLetters, 6, 8, "hello") == 6);
    assert(shiftLeft(a, 0, 6, "hello") == -1);
    assert(shiftLeft(caps, 5, -1, "hello") == -1);
    assert(shiftLeft(onlyLetters, 5, 8, "hello") == 5);
    
    string b[6] = {"gamma", "beta", "alpha", "epsilon", "beta", "delta"};
    assert(locateMaximum(a, 6) == 0);
    
    string c[6] = {"Delta", "Gamma", "Beta", "Alpha", "Beta", "Alpha"};
    assert(locateMaximum(c, 6) == 1);
    
    
        
    cout << "test past!" << endl;
}
