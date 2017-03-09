//
//  Triangle.cpp
//  Test9
//
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include "Triangle.hpp"


//Default constructor
Triangle::Triangle(){
    height = 0 ;
}

//Overload constructor
Triangle::Triangle(int newHeight){
    height = newHeight ;

}

//Deconstructor
Triangle::~Triangle() {

}

//Accessor Functions
int Triangle::getHeight() const {
    return height ;

}

//Mutator Function
void Triangle::setHeight(int newHeight) {

    height = newHeight ;

}

//Other Functions

double Triangle::getArea(int base) const {
    return (0.5*base*height) ;
}

