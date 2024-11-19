//
//  StudyGuide.hpp
//  classes
//
//  Created by Coco Li on 3/20/23.
//

#ifndef StudyGuide_H
#define StudyGuide_H

class iWillPassMyFinals;
class studyGuide{

private:
    int mStudentID;
    double mstudyGuideScore;

public:
    studyGuide(int studentID, double studyGuideScore);

    void setStudentID(const int studentID);
    void setStudyGuideScore(int studyGuideScore);
    int const getStudyGuideScore();
    int getStudentID();
    
    bool extraCredit(iWillPassMyFinals &Exams); // need to do pass by reference because we are going to change exam scores
};

#include <stdio.h>

#endif /* StudyGuide_hpp */
