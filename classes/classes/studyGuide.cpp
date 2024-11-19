//
//  StudyGuide.cpp
//  classes
//
//  Created by Coco Li on 3/20/23.
//

#include "studyGuide.h"
#include "iWillPassMyFinals.h"

using namespace std;
#include <iostream>


studyGuide:: studyGuide(int studentID, double studyGuideScore){
    setStudentID(studentID);
    setStudyGuideScore(studyGuideScore);
}

void studyGuide::setStudentID( int studentID){  // checking valid student id
    if (studentID >= 100000 && studentID < 1000000 ){
        mStudentID = studentID;
    }
    else{
        mStudentID = -1;
    }
}

void studyGuide:: setStudyGuideScore(int studyGuideScore){ // checking valid study guide score
    if (studyGuideScore >= 0 && studyGuideScore <= 100){
        mstudyGuideScore = studyGuideScore;
    }
    else{
        mstudyGuideScore = -1;
    }
}

int const studyGuide :: getStudyGuideScore(){
    return mstudyGuideScore;
}

int studyGuide:: getStudentID(){
    return mStudentID;
}

bool studyGuide :: extraCredit(iWillPassMyFinals &Exams){
    if (Exams.getStudentID() != mStudentID && mstudyGuideScore < 65){
        return false;
    }
    else{
        Exams.mExam1 = (Exams.mExam1 * .10) + Exams.mExam1;
        
//        cout << Exams.mExam1 <<endl;
        
        Exams.mExam2 = (Exams.mExam2 * .10) + Exams.mExam2;
        Exams.mExam3 = (Exams.mExam3 * .10) + Exams.mExam3;
        Exams.mExam4 = (Exams.mExam4 * .10) + Exams.mExam4;
        return true;
    }
}


//book string title, string author , double cost
