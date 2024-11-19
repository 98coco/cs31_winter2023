//
//  main.cpp
//  Midterm Review
//
//  Created by Coco Li on 2/6/23.
//

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

//A string value is being used to track the results of flipping a quarter.  For example, it might have the value "h t h t t".  This string would mean the flipping quarter has resulted in the sequence of head, tails, heads, tails, tails. Create the following function to process this sequence: bool isHeads( string s ); The function should return true if the number of heads recorded is more than the number of tails recorded in the string; false otherwise.

//bool isHeads(string s){
//    string heads = "";
//    string tails = "";
//    for (int i = 0; i < s.length(); i++){
//        if (s[i] == 'h'){
//            heads += s[i];
//        }
//        else if (s[i] == 't'){
//            tails += s[i];
//        }
//    }
//    if (heads.length() > tails.length()){
//        return true;
//    }
//    else
//        return false;
//}

//bool isHeadsOther(string s){
//    int heads = 0;
//    int tails = 0;
//    for (int i = 0; i < s.length(); i++){
//        if (s[i] == 'h'){
//            heads ++;
//        }
//        else if (s[i] == 't'){
//            tails ++;
//        }
//    }
//    if (heads > tails){
//        return true;
//    }
//    else if (heads == tails){
//        return false;
//    }
//    else
//        return false;
//}

//bool isHeadsSwitch(string s){
//    int heads = 0, tails = 0;
//    for (int i = 0; i < s.length(); i++){
//        if (s[i] == 'h'){
//            heads++;
//        }
//        else if (s[i] == 't'){
//            tails++;
//        }
//    }
//    switch(heads){ // expression needs to be an integral type
//        case 1: // cases need to be int and char
//            if (heads == tails){
//                return false;
//            }
//            break;
//        case 2:
//            if (heads < tails){
//                return false;
//            }
//            break;
//        default:
//            return true;
//    }
//    return 0;
//}


//Create the following function: bool hasFiveEs( string s ); The function should return true if the string argument has exactly five 'E's; false otherwise.

//bool hasFiveEs(string s){
//    string listofEs = "";
//    for (int i = 0; i < s.length(); i++){
//        if (s[i] == 'E'){
//            listofEs += s[i];
//        }
//    }
//    if (listofEs.length() == 5){
//        return true;
//    }
//    else{
//        return false;
//    }
//}

//int sumOfSquares(int n){
//    for (int i = 1; i <= n ; i++){
//        int total += i * i;
//    }
//    return (total);
//} incorrect because you need to declare before computing

//int sumOfSquaresB (int n){
//    int total = 0;
//    for (int i = 0; i <= n ; i++){
//        total += i * i;
//    }
//    return (total);
//}
//
//int sumOfSquaresC (int n){
//    int total = 0;
//    for (int i = 0; i <= n ; n--){
//        total += n * n;
//    }
//    return (total);
//}
//
//int foo( int i, int & j )
//{   int result;
//    i = 2 * j;
//    j = i - 1;
//    i = 12 + j / 2;
//    if (j % 2 == 0)
//    {
//        i = 13 + i;
//
//    }
//    if (i % 3 == 1) {
//        j = i - 1;
//    }
//    if ( i > j ) {
//        result = i;
//    }
//    else
//    {
//        result  = j;
//    }
//    return
//    ( result );
//}
//
//int countChars(string s, char c){
//    int total = 0;
//    for (int k = 0; k!=s.size(); k++){
//        if (s[k] == c)
//            total++;
//    }
//    return total;
//}

//int func(int n, double d)
//{
//int j = n;
//double sum = 0;
//while( j >= 0)
//{
//sum += d;
// --j;
//}
//return sum;
//}

//int allAsBeforeBsBeforeCs( string s, bool &foundAllThree){
//    string ABC_list = "";
//    int ABC_list_length = 0;
//    if (s.length() == 0){
//        return -1;
//    }
//    for (int i = 0; i < s.length(); i++){
//        if(isalpha(s[i]) == true){
//            if (s[i] != 'A' && s[i] != 'B' && s[i] != 'C'){
//                return foundAllThree = false;
//            }
//            else{
//                ABC_list += s[i];
//            }
//        }
//        else{
//            return foundAllThree == false;
//        }
//    }
//    for (int i = 0; i < ABC_list.length(); i++){
//        ABC_list_length++;
//    }
//    if (ABC_list.find('A') < ABC_list.find('B')){
//        if (ABC_list.find('A') < ABC_list.find('C')){
//            return foundAllThree == true;
//            }
//         }
//    else if (ABC_list.find('B') < ABC_list.find('C')){
//        if (ABC_list.find('B') > ABC_list.find('A')){
//            return foundAllThree == true;
//            }
//        }
//        else{
//            if (ABC_list.find('C') > ABC_list.find('B')){
//                if (ABC_list.find('C') > ABC_list.find('A')){
//                    return foundAllThree == true;
//                }
//            }
//
//        }
//    return ABC_list_length && foundAllThree;
//}



//int hasThatManyOfThis(string s, char thatCharacter, char thisCharacter, bool &answer){
//    if (s.length() == 0){
//        answer = false;
//        return 0;
//    }
//    string thatCharacterList = "";
//    string thisCharacterList = "";
//    int thatCharacterList_length = 0;
//    int thisCharacterList_length = 0;
//    for (int i = 0; i < s.length(); i++ ){
//        if (s[i] == thatCharacter){
//            thatCharacterList += s[i];
//        }
//        else if (s[i] == thisCharacter){
//            thisCharacterList += s[i];
//        }
//    }
//
//    for (int i = 0; i < thatCharacterList.length(); i++ ){
//        thatCharacterList_length++;
//    }
//
//    for (int i = 0; i < thisCharacterList.length(); i++ ){
//        thisCharacterList_length++;
//    }
//
//    if (thatCharacterList_length == thisCharacterList_length){
//        answer = true;
//    }
//    else if (thatCharacterList_length != thisCharacterList_length){
//        answer = false;
//    }
//    int result = thatCharacterList_length && thisCharacterList_length;
//    return result;
//}

//if (i < j){
//    do {
//        cin >> j;
//        cin >> i;
//        cout << "i = " << i << " j = " << j << endl;
//        i++
//    } while (i < j);
//
//}
//else{
//    cout << "i = " << i << " j = " << j << endl;
//}

//for (int k == i; k < j; k++){
//    cin >> j;
//    cin >> i;
//    cout << "i = " << i << " j = " << j << endl;
//}
 
//int rem(double a){
//    cout << a << endl;
//    return a;
//}
//
//double rem2(int a){
//    return a;
//}

void test1 (string l){
    cout << !l.find('Q') << endl;
}

int main(){
//    test1("4543344345445");
//    test1("Q454334Q4345445");
    cout << stoi(" ") << endl;
//    assert(allAsBeforeBsBeforeCs( "", false) == -1 );
//    bool b;
//    b =(false&&true) && ((false || true));
    

}
