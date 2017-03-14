//
//  Shape.cpp
//  Test12
//
//  Created by Suruchi on 3/14/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include "Shape.hpp"

// Default constructor
Shape::Shape() {

}

// Destructor
Shape::~Shape() {
    
}

// Overload constructor
Shape::Shape(string newName) {
    name = newName ;
}

// Modifier Functions
void Shape::setName(string newName) {
    name = newName ;
}


// Accessor Functions
string Shape::getName() const {
    return name ;
}

Circle::Circle() {
    radius = 0 ;
}


// Overload constructor
Circle::Circle(string newName, double newRadius)
: Shape(newName) {
    //name =  newName ; //only use for protected
    radius = newRadius ;

}

// Modifier Functions
void Circle::setRadius(double newRadius) {
    radius = newRadius ;
}

// Accessor Functions
double Circle::getRadius() const {
    return radius ;
}

// Other Functions
double Circle::getArea() const {
    return (3.14*radius*radius) ;
}


// Default constructor
Rectangle::Rectangle() {
    length = 0 ;
    width = 0 ;
}


//Overload constructor
Rectangle::Rectangle(string newName, double newLength, double newWidth):
Shape(newName)
{
    length = newLength ;
    width = newWidth ;
}

//Modifier Functions
void Rectangle::setLength(double newLength) {
    length = newLength ;
}
void Rectangle::setWidth(double newWidth) {
    width = newWidth ;

}

//Accessor Functions
double Rectangle::getLength() const {
    return length ;
}
double Rectangle::getWidth() const {
    return width ;
}

// Other Functions
double Rectangle::getArea() const {

    return length*width ;
}
