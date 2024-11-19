//
//  qctest
//
//  Created by Coco Li on 2/6/23.
//


#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool checkLetters(char letter){
    if (letter!= 'p' && letter != 'd' && letter != 'Q'){
        return false;
    }
    else{
        return true;
    }
}

string numbersBeforeLetters(string nums){ // function that gets numbers before next letter
    string numbers = "";
    int i = 0;
    while (i < nums.length()){
        if (isdigit(nums[i])){
            numbers += nums[i];
        }
        else
            if (isalpha(nums[i])){
                break;
            }
        i++;
    }
    return numbers;
}

// check if it is a digit or check if it is in alphabet --> maybe have to include this in the oneQCTest

bool oneQCTest(string oneQCTest){
    string checkAmountOfLetters = "";
    string nums_after_Q;
    string nums_after_p;
    string nums_after_d;
    if (oneQCTest[0]  == 'Q' && oneQCTest[1] > 0){
        for (int i = 0; i < oneQCTest.length(); i++){
            if (oneQCTest[i] == ' '){
                return false;
            }
            else if(oneQCTest[i] != 'Q' && oneQCTest[i] != 'p' && oneQCTest[i] != 'd' && isdigit(oneQCTest[i]) == false){
                            return false;
            } // making sure special characters are not inside
            else if (isalpha(oneQCTest[i])){
                if (checkLetters(oneQCTest[i]) == false){ // making sure the letters are p,d, and Q
                    return false;
                }
                else if(checkLetters(oneQCTest[i]) == true){
                    if (oneQCTest[i] == 'Q'){
                        checkAmountOfLetters += oneQCTest[i];
                        nums_after_Q += numbersBeforeLetters(oneQCTest.substr(i+1,oneQCTest.length() - i)); // getting #s after Q
                    }
                    else if (oneQCTest[i] == 'p'){
                        checkAmountOfLetters += oneQCTest[i];
                        nums_after_p += numbersBeforeLetters(oneQCTest.substr(i+1,oneQCTest.length() - i)); // getting #s after p
                    }
                    else if (oneQCTest[i] == 'd'){
                        checkAmountOfLetters += oneQCTest[i];
                        nums_after_d += numbersBeforeLetters(oneQCTest.substr(i+1,oneQCTest.length() - i)); // getting #s after d
                    }
                }
            }
        }
        
        if (nums_after_p == "" || nums_after_d == "" || nums_after_Q == ""){ // checking to see if there are no numbers after p or d
            return false;
        }
        else if (stoi(nums_after_Q) == 0){
                return false;
        }
        else if (nums_after_p.size() == 1 && nums_after_d.size() == 1){
            if (stoi(nums_after_p) + stoi(nums_after_d) == stoi(nums_after_Q)){
                return true;
            }
        }
        else if (nums_after_p.size() >= 2 && nums_after_d.size() >= 2){
            if (nums_after_p[0] == '0'){  // checking for leading 0s after p
                return false;
            }
            else if (nums_after_d[0] == '0'){
                return false;
            }
            else if (stoi(nums_after_p) + stoi(nums_after_d) == stoi(nums_after_Q)){
                return true;
            }
        }
        else if (stoi(nums_after_p) + stoi(nums_after_d) == stoi(nums_after_Q)){ // making sure numbers after p and d equal nums after q
            return true;
        }
        else if (checkAmountOfLetters != "Qpd" || checkAmountOfLetters != "Qdp"){
            return false;
        }
    }
    return false;
 }

bool isValidQC(string results){
    string oneBatch;
    if (results == ""){  // if it is empty return false
        return false;
    }
    for (int i = 0; i < results.length();i++){
        if (results[0] == 'Q'){
                oneBatch = results.substr(results.find('Q'), results.find('Q',1));
                if (oneQCTest(oneBatch) == false){
                    return false;
                }
                else {
                    results.erase(results.find('Q'), results.find('Q',1));
                    oneBatch = "";
                }
        }
        else{  // if it does not start with Q just return false
             return false;
            }
        }
        return true; // return true if it successfully went through the for loop until the end without returning false
    }

int onePassQC(string results){ // works only for one test
    string pNumbers;
    int amountOfPass = 0;
    if (isValidQC(results) == true){
        pNumbers = results.substr(results.find('p')+1, results.length());
        amountOfPass += stoi(pNumbers);
        pNumbers = "";
        return amountOfPass;
    }
    return -1;
}

int passQC(string results){
    string oneTest;
    int storeNumsAfterP = 0;
    int totalAmountOfP = 0;
    if (isValidQC(results) == true){
        for (int i = 0; i < results.length(); i++){
            oneTest = results.substr(results.find('Q'), results.find('Q',1));
            storeNumsAfterP = onePassQC(oneTest);
            totalAmountOfP += storeNumsAfterP;
            oneTest = "";
            storeNumsAfterP = 0;
            results.erase(results.find('Q'), results.find('Q',1));
        }
        return totalAmountOfP;
    }
    return -1;
}

int oneDefectQC(string results){ // works only for one test
    string dNumbers;
    int amountOfDefect = 0;
    if (isValidQC(results) == true){
        dNumbers = results.substr(results.find('d')+ 1, results.length());
        amountOfDefect += stoi(dNumbers);
        dNumbers = "";
        return amountOfDefect;
    }
    return -1;
}

int defectQC(string results) {
    string oneTest;
    int storeNumsAfterD = 0;
    int totalAmountOfD = 0;
    if (isValidQC(results) == true){
        for (int i = 0; i < results.length(); i++){
            oneTest = results.substr(results.find('Q'),results.find('Q',1));
            storeNumsAfterD = oneDefectQC(oneTest);
            totalAmountOfD += storeNumsAfterD;
            oneTest = "";
            storeNumsAfterD = 0;
            results.erase(results.find('Q'), results.find('Q',1));
        }
        return totalAmountOfD;
    }
    return -1;
}

int oneTotalQC(string results){
    string testValue;
    int amountOfTest = 0;
    if (isValidQC(results) == true){
        testValue = results.substr(results.find('Q')+ 1, results.length());
        amountOfTest += stoi(testValue);
        testValue = "";
        return amountOfTest;
    }
    return -1;
}

int totalQC(string results) {
    string oneTest;
    int storeNumsAfterQ = 0;
    int totalAmountTest = 0;
    if (isValidQC(results) == true){
        for (int i = 0; i < results.length(); i++){
            oneTest = results.substr(results.find('Q'),results.find('Q',1));
            storeNumsAfterQ = oneTotalQC(oneTest);
            totalAmountTest += storeNumsAfterQ;
            oneTest = "";
            storeNumsAfterQ = 0;
            results.erase(results.find('Q'), results.find('Q',1));
        }
        return totalAmountTest;
    }
    return -1;
}
// get one test
// for one substring index everytime you get one test


int batches(string results){
    string oneTest = "";
    int amountOfBatches = 0;
    if (isValidQC(results) == true){
        int i = 0;
        while (i < results.length()){
            if (results[i] == 'Q'){
                amountOfBatches++;
            }
            i++;
        }
        return amountOfBatches;
    }
    else{
        return -1;
    }
}

    int main(){
        
   assert(isValidQC("Q5d2p3!") == false);
   assert(isValidQC("Q5d1d1p3!") == false);
   assert(isValidQC("Q5d2p3") == true);
   assert(isValidQC("Q0d2p3") == false);
   assert(isValidQC("Q0p9d19") == false);
   assert(isValidQC("Q28d9p19") == true);
   assert(isValidQC("Q12d0p12") == true);
   assert(isValidQC("Q12p0d12") == true);
   assert(isValidQC("T6k7l9") == false);
   assert(isValidQC("Q5d5p0") == true);
   assert(isValidQC("Q9p9d0") == true);
   assert(isValidQC("Q24p12d12") == true);
   assert(isValidQC("Q6d2p3") == false);
   assert(isValidQC("Q1p0005d001") == false);
   assert(isValidQC("Q18p004d1") == false);
   assert(isValidQC("Q0p0d0") == false);
   assert(isValidQC("Q750d000p750") == false);
   assert(isValidQC("Q282d000p282") == false);
   assert(isValidQC("Q19p0002d1") == false);
   assert(isValidQC("Q1pd1") == false);
   assert(isValidQC("Q1p1d1Q") == false);
   assert(isValidQC("Q1 p d1") == false);
   assert(isValidQC("Q1!d1p2") == false);
   assert(isValidQC("Q1d1p0  ") == false);
   assert(isValidQC("123445") == false);
   assert(isValidQC("Q45") == false);
   assert(isValidQC("Q45") == false);
   assert(isValidQC("qpd") == false);
   assert(isValidQC("Q1pd1   ") == false);
   assert(isValidQC("Q1pd   1") == false);
   assert(isValidQC("Q1p0d1Q1d0p1  ") == false);
   assert(isValidQC("Q1p0d1Q19p0002d1") == false);
   assert(isValidQC("Q12p0002d0003") == false);
   assert(isValidQC("Q1p1") == false);
   assert(isValidQC("Q6p1d5") == true);
   assert(isValidQC("Q12p00d1Q1d0p1Q19p10d9") == false);
   assert(isValidQC("Q12p0d12Q24p12d12Q5d5p0") == true);
   assert(isValidQC("Q12p0d12Q3p1p1d1") == false);
   assert(isValidQC("Q12p0d12Q24p12d12Q5d5p0Q0p0d0") == false);
   assert(isValidQC("Q12p0d12Q24p12d12Qdp") == false);
   assert(isValidQC("Q12p02d0003Q24p12d12Q5d5p0") == false);
   assert(isValidQC("Q12d45d7p2p3") == false);
   assert(isValidQC("Q12p0002d000324p12d125d5p0") == false);
   assert(isValidQC("Q12p0d12Q24p12p12Q5d5q2") == false);
   assert(isValidQC("Q24p12d12Q24p12d12p1") == false);
   assert(isValidQC("d1") == false);
   assert(isValidQC("Q12D3p9Q12P3d9") == false);
   assert(isValidQC("Q12P3d9Q12d3p9") == false);
   assert(isValidQC("Q12p0d12QQ5d5p0Q34") == false);
   assert(isValidQC("Q24p12d12") == true);
   assert(isValidQC("Q12p0d12Q5d5p0Q34") == false);
   assert(isValidQC("Q12p0d12Q24p12d12Q5d5p0ee2323") == false);
   assert(isValidQC("Q12pppddd") == false);
   assert(isValidQC("Q12p0d12Q24p12d12Q5d5p0ReQ12p0d12Q24p12d12Q5d5p0") == false);
   assert(isValidQC("Q24p12d12@") == false);
   assert(isValidQC("Q24p12d12Q23d20p3Q45d40p5Q68p60d8") == true);
   assert(isValidQC("Q5d2p3p3") == false);
   assert(oneQCTest("Q5d2p3p3") == false);
   assert(isValidQC("Q5d2p3Q5d2p3p3") == false);
   assert(isValidQC("Q2d1p1Q5p3d2") == true);
   assert(isValidQC("Q2d1p1 Q5p3d2") == false);
   assert(onePassQC("Q12p0d12") == 0);
   assert(onePassQC("Q154p54d100") == 54);
   assert(onePassQC("Q123d23p100") == 100);
   assert(onePassQC("89") == -1);
   assert(onePassQC("Q13p12d1") == 12);
   assert(passQC("Q376p0d376Q345p0d345Q205d205p0") == 0);
   assert(passQC("Q232d76p156Q45p12d33Q567p500d67") == 668);
   assert(passQC("Q232d0076p156Q45p12d33Q567p500d67") == -1);
   assert(passQC("Q0232d0076p156Q45p12d33Q567p500d67") == -1);
   assert(passQC("Q24p12d12Q34d13p21") == 33);
   assert(passQC("Q154p54d100") == 54);
   assert(passQC("Q123d23p100") == 100);
   assert(passQC("Q12D3p9Q12P3d9") == -1);
   assert(passQC("Q12p0002d000324p12d125d5p0") == -1);
   assert(passQC("Q12p0002d000324p12ddee125d5p0") == -1);
   assert(passQC("Q232d76p156Q45pT12d33Q567p500d67") == -1);
   assert(passQC("Q5d2p3") == 3);
   assert(defectQC("Q2d1p1Q5p3d2") == 3);
   assert(defectQC("Q5d2p3") == 2);
   assert(defectQC("Q5d2p3Q2d1p1Q5p3d2Q2d1p1Q5p3d2@") == -1);
   assert(defectQC("Q5d2p3QQ2d1p15p3d2Q2d1p1Q5p3d2") == -1);
   assert(defectQC("Q5d2p3Q2d1p15Q2d1p1Q5p3d2") == -1);
   assert(defectQC("Q2d1p1Q5p3d2 ") == -1);
   assert(defectQC("Q3d3p1Qpd23") == -1);
   assert(defectQC("89") == -1);
   assert(defectQC("thankyou,next") == -1);
   assert(defectQC("Q60d10p50Q20p3d17Q50p25d25Q80p2d78") == 130);
   assert(defectQC("Q60d10p50Q20p3d17Q50p25d25Q80p2d78Q60d10p50Q20p3d17Q50p25d25Q80p2d78") == 260);
   assert(oneTotalQC("Q5d2p3") == 5);
   assert(oneTotalQC("Q16p10d6") == 16);
   assert(totalQC("Q16p10d6Q5d2p3") == 21);
   assert(totalQC("Q0p10d6Q5d2p3") == -1);
   assert(totalQC("Q12p10d2Q190d100p90") == 202);
   assert(totalQC("1232") == -1);
   assert(totalQC("QpdQpd") == -1);
   assert(totalQC("Q89p80d9Q5d2p3Q12p6d6") == 106);
   assert(batches("Q5d2p3") == 1);
   assert(batches("Q5d2p3Q5d2p3Q5d2p3") == 3);
   assert(batches("Q5d2p3Q5d2p3Q5d2p3Q5d2p3Q5d2p3Q5d2p3") == 6);
   assert(batches("Q5d2p3Q5d2p3Q5d2p3Q16p10d6Q5d2p3") == 5);
   assert(batches("Q1d1p0Q2d0p2Q3d3p0Q4d2p2Q5d2p3Q6p3d3Q7p4d3Q8p5d3Q9p3d6") == 9);
   assert(batches("Q5d2p3Q5d2p2p1") == -1);
   assert(batches("Q5d2p3Q16p10d6Q5d2p3Q16p10d6Q5d2p3Q16p10d6Q5d2p3Q16p10d6Q5d2p3Q16p10d6Q5d2p3Q16p10d6") == 12);
   assert(batches("Q5d2p3Q16pppp") == -1);
   assert(batches("Q32d24p8Q32d24p8") == 2);
   assert(isValidQC("") == false );
   assert(isValidQC("    ") == false );
   assert(passQC( "    " ) == -1 );
   assert(defectQC( "      " ) == -1 );
   assert(totalQC( "      " ) == -1 );
   assert( batches( "      " ) == -1 );
   assert( isValidQC( "Q2p1d1" ) == true );
   assert( passQC( "Q2p1d1" ) == 1 );
   assert( defectQC( "Q2p1d1" ) == 1 );
   assert( totalQC( "Q2p1d1" ) == 2 );
   assert( batches( "Q2+1-1" ) == -1 );

    cout << "All test cases succeeded" << endl;
    return( 0 );

}

