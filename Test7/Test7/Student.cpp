//
//  Student.cpp
//  Test7
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include "Student.hpp"

student::student() {
    newMarks = 0 ;

}

student::student (string name, float marks) {
    newName = name ;
    newMarks = marks ;

}

student::~student() {
    
}

string student::getName() const{
    
    return newName ;
}

float student::getMarks() const{
    
    return newMarks ;
}



void student::setName(string name) {
    newName = name ;
}

void student::setMarks(float marks) {
    
    newMarks = marks ;
}

char student::getGrade(){
    char newGrade ;
    if(newMarks>=90) newGrade = 'A' ;
    else if ((newMarks>=80)&&(newMarks<90)) newGrade = 'B' ;
    else if ((newMarks>=70)&&(newMarks<80)) newGrade = 'C' ;
    else if ((newMarks>=60)&&(newMarks<70)) newGrade = 'D' ;
    else if ((newMarks>=40)&&(newMarks<60)) newGrade = 'P' ;
    else newGrade = 'F' ;
    return newGrade ;
}
