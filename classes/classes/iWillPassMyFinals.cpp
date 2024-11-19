//
//  iWillPassMyExams.cpp
//  classes
//
//  Created by Coco Li on 3/20/23.
//

#include "iWillPassMyFinals.h"
#include "studyGuide.h" //need to include studyGuide header for implementation of extracredit function

iWillPassMyFinals :: iWillPassMyFinals(int studentID,int array[4], double GPA){
    setStudentID(studentID);
    setExamScore1(array[0]);
    setExamScore2(array[1]);
    setExamScore3(array[2]);
    setExamScore4(array[3]);
    setGPA(GPA);
}

void iWillPassMyFinals :: setStudentID(int studentID){
    if (studentID < 1000000 && studentID < 100000){
        mStudentID = studentID;
    }
    else{
        mStudentID = -1;
    }
}
void iWillPassMyFinals:: setExamScore1(int ExamScore){
    if (ExamScore >= 0 && ExamScore <= 100){
        mExam1 = ExamScore;
    }
    else{
        mExam1 = -1;
    }
}

void iWillPassMyFinals:: setExamScore2(int ExamScore){
    if (ExamScore >= 0 && ExamScore <= 100){
        mExam2 = ExamScore;
    }
    else{
        mExam2 = -1;
    }
}

void iWillPassMyFinals:: setExamScore3(int ExamScore){
    if (ExamScore >= 0 && ExamScore <= 100){
        mExam3 = ExamScore;
    }
    else{
        mExam3 = -1;
    }
}

void iWillPassMyFinals:: setExamScore4(int ExamScore){
    if (ExamScore >= 0 && ExamScore <= 100){
        mExam4 = ExamScore;
    }
    else{
        mExam4 = -1;
    }
}

void iWillPassMyFinals:: setGPA(double GPA){
    if (GPA < 0 && GPA > 4.00){
        mGPA = -1;
    }
    else{
        mGPA = GPA;
    }
}

double iWillPassMyFinals:: getGPA(){
    return mGPA;
}

int iWillPassMyFinals:: getExam1(){
    return mExam1;
}

int iWillPassMyFinals:: getExam2(){
    return mExam2;
}

int iWillPassMyFinals::getExam3(){
    return mExam3;
}

int iWillPassMyFinals:: getExam4(){
    return mExam4;
}

int iWillPassMyFinals:: getStudentID(){
    return mStudentID;
}



