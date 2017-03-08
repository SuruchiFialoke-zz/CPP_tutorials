//
//  Student.hpp
//  Test7
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std ;

class student{
    
public:
 
    //Default Constructor
    student() ;
 
    //Overload constructor
    student(string, float) ;
  
    //Destructor
    ~student() ;
  
    //Accessor Functions: allows us to access private data, individually
    string getName() const ;
    float getMarks() const ;
    
    
   //Mutator Functions: Allows us to load individual data
    void setName(string) ;
    void setMarks(float) ;
    
    //Other Functions
    char getGrade() ;
    
    
private:
    string newName;
    float newMarks ;
    
};






#endif /* Student_hpp */
