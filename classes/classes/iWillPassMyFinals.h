//
//  iWillPassMyExams.hpp
//  classes
//
//  Created by Coco Li on 3/20/23.
//

#ifndef iWillPassMyFinals_H
#define iWillPassMyFinals_H

#include "studyGuide.h"

class iWillPassMyFinals{

private:
    int mStudentID, mExam1, mExam2, mExam3, mExam4;
    double mGPA;

public:

    iWillPassMyFinals(int studentID,int array[4], double GPA); //constructor

    void setStudentID(int studentID);
    void setExamScore1(int ExamScore1);
    void setExamScore2(int ExamScore2);
    void setExamScore3(int ExamScore3);
    void setExamScore4(int ExamScore4);
    void setGPA(double GPA);
    
    int getStudentID();
    int getExam1();
    int getExam2();
    int getExam3();
    int getExam4();
    double getGPA();

    friend bool studyGuide:: extraCredit(iWillPassMyFinals &Exams); //have to pass by reference or it will be an incomplete type
    friend void print(iWillPassMyFinals);
    
};

#include <stdio.h>

#endif /* iWillPassMyExams_hpp */
