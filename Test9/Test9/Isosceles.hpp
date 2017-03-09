//
//  Isosceles.hpp Child class of Triangle.h
//  Test9
//
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#ifndef Isosceles_hpp
#define Isosceles_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Triangle.hpp"

using namespace std ;

class Isosceles : public Triangle {

public:
    //Default Constructor
    Isosceles() ;
    
    //Overload constructor
    Isosceles(int, int, int) ;
    
    //Destructor
    ~Isosceles() ;
    
    //Accessor Functions
    int getBase() const;
    
    int getSideOne() const ;
    
    
    //Mutator Functions
    void setBase(int) ;
    
    void setSideOne(int) ;
    
    //Other Functions
    int getPerimeter() const;
    
    void printInfo() const;
    // prints area and perimeter of triangle
    
private:
    //Member variables
    int base ;
    int sideOne ;
    
};




#endif /* Isosceles_hpp */
