//
//  main.cpp
//  cs 31 review before summer
//
//  Created by Coco Li on 6/18/23.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    
//    cout << "How many times do you want to be greeted?" << endl;
//    int nTimes;
//    cin >> nTimes;

//    while (nTimes > 0){
//        cout << "hello!" << endl;
//        nTimes = nTimes - 1; // without this part you wil keep going into an infinite loop
//    }
    
//    for (int i = 0; i < nTimes; i++){ // i is beginning index
//        cout << "hello!" << endl;
//    }
    
//    cout << "choose a number" << endl;
//    int number;
//    cin >> number;
//    int tracker = 0;
//
//    for (int a = 1; a <= number; a++){ // a is what Number will be divided by
//        if (number%a == 0){
//            tracker++;
//        }
//    }
//    if (tracker == 2){ //should be itself and 1
//        cout << "is a prime number" << endl;
//    }
//    else if (tracker >= 3){
//        cout<< "not a prime number" << endl;
//    }
//
    
//    cout << "choose a number" << endl;
//    int number1;
//    int number2;
//    int sum = 0;
//    cin >> number1;
//
//    while (number1 > 0){
//        number2 = number1%10;
//        sum += number2;
//        number1 = number1/10;
//    }
//
//    cout << "this is the sum: " << sum << endl;
//
    
    cout << "Input the number of characters for a side: " << endl;
    int row;
    cin >> row;
    int columns = row;
    
    for (int i = 0; i < row; i++){
        for (int j = 0; j < columns; j++){
            cout << "#";
        }
        cout << endl;
    }
    

}
