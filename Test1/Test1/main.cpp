//
//  main.cpp
//  Test Usage of cmath and algorithm
//
//  Created by Suruchi on 3/5/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std ;


int main() {
    // insert code here...
    int time = 10.0 ;
    int numBottles = 65.0 ;
    
    //Example of static_cast
    cout <<"Rate = "<<(static_cast<double>(numBottles)/time)<<endl;
    
    //Usage of algorithm STL
    double a,b ;
    cout<<"Enter two numbers: "<<endl ;
    cin>>a>>b ;
    //a=5 ;b=5.7;
    cout<<"Max of the two numbers is: "<<max(a,b)<<endl ;
    cout<<"Min of the two numbers is: "<<min(a,b)<<endl ;
    
    
    //Try more functions from algorithms, sorting, searching etc
    return 0;
}
