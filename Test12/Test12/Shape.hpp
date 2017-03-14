//
//  Shape.hpp
//  Test12
//
//  Created by Suruchi on 3/14/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <iostream>
#include <string>
using namespace std ;

class Shape {

    
private:
    string name ;
    
    
    
public:

    // Default constructor
    Shape() ;
    
    // Destructor
    ~Shape() ;
    
    // Overload constructor
    Shape(string) ;
    
    //Modifier Functions
    void setName(string) ;
    
    // Accessor Functions
    string getName() const ;

} ;

// First Child Class: Circle

class Circle : public Shape {
    
private:
    double radius ;
    
public:
    // Default constructor
    Circle() ;
    
    // Overload constructor
    Circle(string, double) ;
    
    // Modifier Functions
    void setRadius(double) ;
    
    // Accessor Functions
    double getRadius() const ;
    
    // Area Function to be used if not using dynamic bonding
    double getArea() const ;

    
} ;


// Second Child Class: Rectangle

class Rectangle : public Shape {
    
private:
    double length, width ;
    
public:
    // Default constructor
    Rectangle() ;
    

    // Overload constructor
    Rectangle(string, double, double) ;
    
    // Modifier Functions
    void setLength(double) ;
    void setWidth(double) ;
    
    // Accessor Functions
    double getLength() const ;
    double getWidth() const ;
    
    // Other Functions

    // Area Function to be used if not using dynamic bonding
    double getArea() const ;
    
} ;


#endif /* Shape_hpp */
