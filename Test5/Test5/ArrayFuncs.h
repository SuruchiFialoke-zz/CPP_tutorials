//
//  ArrayFuncs.h
//  Test5
//
//  Created by Suruchi on 3/6/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//
#include <iostream>

using namespace std ;

#ifndef ArrayFuncs_h
#define ArrayFuncs_h

//Contants

const int CAPACITY = 26 ;


//Function declarations

void fillArray(int [], int&) ;
//fill array
//@param int[] - score of students
//@param int& - number of students

void printArray(const int [], int) ;
//print array
//@param const int[] - score of students
//@param int - number of students

void fillArray(int newScores[], int& num) {
    
    cout<<"Type in scores of students (-1 to exit)"<<endl ;
    cin>>newScores[0] ;
    while((num < CAPACITY) && (newScores[num]!=-1)){
        num++ ;
        cin>>newScores[num] ;
        
    }
}

void printArray(const int newScores[], int num){
    int avg=0 ;
    for(int i=0; i<num; i++) {
        cout<<newScores[i]<<" ";
        avg += newScores[i] ;
    }
    
    cout<<endl<<"Average: "<<avg/num<<endl ;
}


#endif /* ArrayFuncs_h */
