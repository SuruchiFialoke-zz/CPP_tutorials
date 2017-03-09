//
//  main.cpp
//  Test9==> Class inheritance example with Triangles
//
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <string>

#include "Isosceles.hpp"
// If the parent class (Triangle) is included in the Child class
// No need to to include it again in main

using namespace std ;


int main() {
    // insert code here...
    int base, height, equalSide ;
    cout<<"Enter base: \n" ;
    cin>>base ;
    
    cout<<"Enter height: \n" ;
    cin>>height ;
    
    cout<<"Enter type in the side that is equal: \n" ;
    cin>>equalSide ;
    
    Isosceles myTriangle(base, equalSide, height) ;
    myTriangle.printInfo() ;

    myTriangle.setHeight(10) ;
    cout<<"Height: "<<myTriangle.getHeight()<<"\n" ;
    
    cout<<"\n" ;
    
    myTriangle.printInfo() ;
    
    return 0;
}
