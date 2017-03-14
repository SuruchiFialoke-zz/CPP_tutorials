//
//  main.cpp
//  Test12
//  Examples of Inheritance and Polymorphism
//  Created by Suruchi on 3/13/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//  From Hank Stalica (Youtube)

#include <iostream>
#include <string>


#include "Shape.hpp"

using namespace std ;



int main() {
    // insert code here...
    string nC1, nR1 ;
    
    //Shape None("nothing") ;
    //cout<<None.getName()<<"\n" ;
    
    cout<<"Enter your Circle name: \n" ;
    cin>>nC1 ;

    
    Circle myCircle1(nC1,5.5) ;
    cout<<"Area of My Circle: "<<myCircle1.getName()<<" is: "<<myCircle1.getArea()<<"\n" ;
    
    cout<<"Enter your Rectangle name: \n" ;
    cin>>nR1 ;
    
    Rectangle myRect1(nR1,5,10.0) ;
    cout<<"Area of My Rectangle: "<<myRect1.getName()<<" is: "<<myRect1.getArea()<<"\n" ;
    
    return 0;
}
