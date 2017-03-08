//
//  main.cpp
//  Vectors of Objects
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include "Student.hpp"

using namespace std ;

void fillVec ( vector<student>&, vector<char>&);
//fillVec: fills in students(name, marks) and grades
//@param vector<student>& ==> students info
//@param vector<char>& ==>students grades

void printVecs ( const vector<student>&, const vector<char>&);
//printVecs: prints the students(name, marks) and grades
//@param const vector<student>& ==> students info
//@param const vector<char>& ==>students grades

int main() {

    vector<student> myClass ;
    vector<char> myClassGrades ;

    fillVec(myClass, myClassGrades);
    printVecs(myClass, myClassGrades);
    return 0;
}

void fillVec ( vector<student>& newMyClass, vector<char>& grades){
    
    unsigned int classSize ;
    
    student current_student ;
    string currentName ;
    float currentMarks ;

    char currentGrade ;
    
    cout<<"How many students are there in your class? \n" ;
    cin>>classSize ;
    
    for(auto i=0; i<classSize; i++) {
        cout<<"Enter Name: \n" ;
        cin>>currentName ;
        
        cout<<"Enter Marks: \n" ;
        cin>>currentMarks ;
        
        //Initializing current student with names and marks
        current_student.setName(currentName) ;
        current_student.setMarks(currentMarks) ;
        
        //Calculating grade for the current student
        currentGrade = current_student.getGrade() ;
        
        //Pushing the data to corresponding vectors
        newMyClass.push_back(current_student);
        grades.push_back(currentGrade) ;
        
        cout<<"\n" ;
    
    }
    cout<<"\n" ;
}

void printVecs ( const vector<student>& newMyClass, const vector<char>& grades){
    auto sizeVec = grades.size() ;
    cout<<"Name\tMarks\tGrade\n" ;

    for (auto i=0; i<sizeVec; i++) {
        cout<<newMyClass[i].getName()<<"\t"
            <<newMyClass[i].getMarks()<<"\t"
            <<grades[i]<<"\n" ;
    
    }
}

