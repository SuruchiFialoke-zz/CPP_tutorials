//
//  main.cpp
//  Test2
//
//  Created by Suruchi on 3/5/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

//
//  test2.cpp
//  Test Stuff
//
//  Created by Suruchi on 3/5/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std ;


int main() {
    
    //Usage of string STL
    //string yourname ;
    //cout<<"Please enter your FULL name: "<<endl ;
    //cin>>yourname;
    //cout<<"Hi "<<yourname<<endl ; //only outputs first name
    
    cout<<"Please enter your FULL name: "<<endl ;
    string yourname ;
    getline(cin,yourname) ; //gets all strings enetered in a line
    cout<<"(Fixed) Hi "<<yourname<<endl ; // outputs full name
    
    //Using concatenation +
    
    //Using .append, similar to concatenation
    
    //Using Length .length() or .size()
    cout<<"# of Characters in your name is: "<<yourname.length()<<endl ;
    
    //Using .at
    int n ;
    cout<<"enter the index: "<<endl ;
    cin>>n;
    cout<<"character at index "<<n<<"is: "<<yourname.at(n)<<endl;
    
    //Using .insert
    string instring = " The awesome" ;
    
    cout<<"instrted string is: "<<yourname.insert(7, instring)<<endl ;
    
    return 0;
}
