//
//  main.cpp
//  Test10
//  Pointers: contain the address of a variable
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>

using namespace std ;


int main() {
    // p1 ==> pointer, that points to a variables address
    // (*) ==> dereference operator
    // *p1 ==> returns the variable p1 is pointing to
    
    
    int num1 = 8,
    *p1 = &num1 ;
    
    cout<<"Value of Num1: "<<num1<<" "<<*p1<<"\n" ;
    cout<<"Address of Num1: "<<&num1<<" "<<p1<<"\n" ;
    
    cout<<"Address of p1: "<<&p1<<"\n" ;
    
    
    return 0;
}
