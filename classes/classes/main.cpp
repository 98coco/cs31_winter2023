//
//  main.cpp
//  classes
//
//  Created by Coco Li on 3/15/23.
//


#include <cassert>
#include <iostream>
using namespace std;

#include "iWillPassMyFinals.h"
#include "studyGuide.h"
#include "battery.h"

/*
 
 create a friend function that will change the exam scores because the student did extra credit
 forward declare of iWillPassMyFinals
 
 we need studyGuide class to come before iWillPassMyFinals because extra credit function has the implementation of extracredit friend function in iWillPassMyFinals
 
 can't forward declare studyGuide and have the class after iWillPassMyExams because extracredit in the studyguide class will be an incomplete type as a friend function in iWillPassMyExams. This is because extracredit is an implementation and forward declaring studyGuide just means it exist. Compiler would not know how to implement extracredit cause the defintion of the function is unknown.
 
 if we were to do this in separate files, iWillPassMyFinals will hav a forward declaration in header of class StudyGuide; this lets c++ know that there is a class later on called iWillPassMyFinals
 
 in the header file of iWillPassMyFinals, we would to need include the study guide header because it has the information needed for the extra credit function
 
 include mean "copies and paste" whatever file onto the current file
 
 */

//class iWillPassMyFinals;
//class studyGuide{
//
//private:
//    int mStudentID;
//    double mstudyGuideScore;
//
//public:
//    studyGuide(int studentID, double studyGuideScore);
//
//    void setStudentID(int studentID);
//    void setStudyGuideScore(int studyGuideScore);
//    int getStudyGuideScore();
//    int getStudentID();
//    
//    bool extraCredit(iWillPassMyFinals &Exams); // need to do pass by reference because we are going to change exam scores
//};
//
//class iWillPassMyFinals{
//
//private:
//    int mStudentID, mExam1, mExam2, mExam3, mExam4;
//    double mGPA;
//
//public:
//
//    iWillPassMyFinals(int studentID,int array[4], double GPA); //constructor
//
//    void setStudentID(int studentID);
//    void setExamScore1(int ExamScore1);
//    void setExamScore2(int ExamScore2);
//    void setExamScore3(int ExamScore3);
//    void setExamScore4(int ExamScore4);
//    void setGPA(double GPA);
//    
//    int getStudentID();
//    int getExam1();
//    int getExam2();
//    int getExam3();
//    int getExam4();
//    double getGPA();
//
//    friend bool studyGuide:: extraCredit(iWillPassMyFinals &Exams); //have to pass by reference or it will be an incomplete type
//    friend void print(iWillPassMyFinals);
//    
//};
//
//studyGuide:: studyGuide(int studentID, double studyGuideScore){
//    setStudentID(studentID);
//    setStudyGuideScore(studyGuideScore);
//}
//
//void studyGuide:: setStudentID(int studentID){  // checking valid student id
//    if (studentID >= 100000 && studentID < 1000000 ){
//        mStudentID = studentID;
//    }
//    else{
//        mStudentID = -1;
//    }
//}
//
//void studyGuide:: setStudyGuideScore(int studyGuideScore){ // checking valid study guide score
//    if (studyGuideScore >= 0 && studyGuideScore <= 100){
//        mstudyGuideScore = studyGuideScore;
//    }
//    else{
//        mstudyGuideScore = -1;
//    }
//}
//
//int studyGuide :: getStudyGuideScore(){
//    return mstudyGuideScore;
//}
//
//int studyGuide:: getStudentID(){
//    return mStudentID;
//}
//
//bool studyGuide :: extraCredit(iWillPassMyFinals &Exams){
//    if (Exams.getStudentID() != mStudentID && mstudyGuideScore < 65){
//        return false;
//    }
//    else{
//        Exams.mExam1 = (Exams.mExam1 * .10) + Exams.mExam1;
//        Exams.mExam2 = (Exams.mExam2 * .10) + Exams.mExam2;
//        Exams.mExam3 = (Exams.mExam3 * .10) + Exams.mExam3;
//        Exams.mExam4 = (Exams.mExam4 * .10) + Exams.mExam4;
//        return true;
//    }
//}
//
//iWillPassMyFinals :: iWillPassMyFinals(int studentID,int array[4], double GPA){
//    setStudentID(studentID);
//    setExamScore1(array[0]);
//    setExamScore2(array[1]);
//    setExamScore3(array[2]);
//    setExamScore4(array[3]);
//    setGPA(GPA);
//}
//
//void iWillPassMyFinals :: setStudentID(int studentID){
//    if (studentID < 1000000 && studentID < 100000){
//        mStudentID = studentID;
//    }
//    else{
//        mStudentID = -1;
//    }
//}
//void iWillPassMyFinals:: setExamScore1(int ExamScore){
//    if (ExamScore >= 0 && ExamScore <= 100){
//        mExam1 = ExamScore;
//    }
//    else{
//        mExam1 = -1;
//    }
//}
//
//void iWillPassMyFinals:: setExamScore2(int ExamScore){
//    if (ExamScore >= 0 && ExamScore <= 100){
//        mExam2 = ExamScore;
//    }
//    else{
//        mExam2 = -1;
//    }
//}
//
//void iWillPassMyFinals:: setExamScore3(int ExamScore){
//    if (ExamScore >= 0 && ExamScore <= 100){
//        mExam3 = ExamScore;
//    }
//    else{
//        mExam3 = -1;
//    }
//}
//
//void iWillPassMyFinals:: setExamScore4(int ExamScore){
//    if (ExamScore >= 0 && ExamScore <= 100){
//        mExam4 = ExamScore;
//    }
//    else{
//        mExam4 = -1;
//    }
//}
//
//void iWillPassMyFinals:: setGPA(double GPA){
//    if (GPA < 0 && GPA > 4.00){
//        mGPA = -1;
//    }
//    else{
//        mGPA = GPA;
//    }
//}
//
//double iWillPassMyFinals:: getGPA(){
//    return mGPA;
//}
//
//int iWillPassMyFinals:: getExam1(){
//    return mExam1;
//}
//
//int iWillPassMyFinals:: getExam2(){
//    return mExam2;
//}
//
//int iWillPassMyFinals::getExam3(){
//    return mExam3;
//}
//
//int iWillPassMyFinals:: getExam4(){
//    return mExam4;
//}
//
//int iWillPassMyFinals:: getStudentID(){
//    return mStudentID;
//}


int main(){
    
    int student1Test[4] = {87,89,100,75};
    studyGuide student1(563283, 75.00);
    iWillPassMyFinals student1Additional(563283, student1Test, 4.00);

    assert(student1.getStudentID() == 563283);
    assert(student1.extraCredit(student1Additional) == true);
    assert(student1Additional.getExam1() == 95);
    assert(student1Additional.getExam2() == 97);
    assert(student1Additional.getExam3() == 110);
    assert(student1Additional.getExam4() == 82);
    
    
    battery doubleA;
    battery nineVolts(9.0);
    
    assert(doubleA.getVolts() == 1.5);
    assert(nineVolts.getVolts() == 9.0);

    
    
    
    cout << "all test past!" << endl;
    return 0;
};
