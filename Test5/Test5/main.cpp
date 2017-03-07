//
//  main.cpp
//  Tutorials to Learn Arrays and Matrices
//
//  Created by Suruchi on 3/6/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <string>
#include "ArrayFuncs.h"

using namespace std ;


int main() {
    
    //Simple examples
    int scores[CAPACITY] ;
    int numOfElems = 0;
    fillArray(scores, numOfElems) ;
    printArray(scores, numOfElems) ;
    
    //Using For loop with range Function
    string str {"Hello!"};
    for (auto c : str) {
        cout << "[" << c << "]";
    }
    cout<<'\n' ;
    
    return 0;
}

