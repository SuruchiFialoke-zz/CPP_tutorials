//  
//  Isosceles.cpp
//  Test9
//
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include "Isosceles.hpp"

// Default constructor
Isosceles::Isosceles() {
    base = 0 ;
    sideOne = 0 ;

}

// Overload constructor
// Inherit height from Triangle
Isosceles::Isosceles(int newBase, int newS1, int newHeight)
: Triangle(newHeight) {
    base = newBase ;
    sideOne = newS1 ;
}

/* if Height were a protected variable
 
 Isosceles::Isosceles(int newBase, int newS1, int newHeight)
 {
 base = newBase ;
 sideOne = newS1 ;
 height = newHeight
 }
 
 */
//Destructor
Isosceles::~Isosceles() {

}


//Accessor Functions
int Isosceles::getBase() const {

    return base ;
}

int Isosceles::getSideOne() const {
    return sideOne ;
}



//Mutator Functions
void Isosceles::setBase(int newBase) {
    base = newBase ;
}

void Isosceles::setSideOne(int newS1) {

    sideOne = newS1 ;
}

//Other Functions
int Isosceles::getPerimeter() const {
    return (2*sideOne + base) ;
    
}

void Isosceles::printInfo() const {
    cout<<"Perimeter: "<<getPerimeter()<<"\n" ;
    cout<<"Area: "<<getArea(base)<<"\n" ;


}
