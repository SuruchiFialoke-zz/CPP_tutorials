//
//  main.cpp
//  Test2
//
//  Created by Suruchi on 3/5/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

//
//  test2.cpp
//  String related 
//
//  Created by Suruchi on 3/5/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>



using namespace std ;


int main() {
    
    //Usage of string STL
    string yourname ;
    cout<<"Please enter your FULL name: "<<endl ;
    cin>>yourname;
    cout<<"Hi "<<yourname<<'\n' ; //only outputs first name
    
    cin.ignore(1000, '\n'); //cin insets a newline at the buffer, this ignores it
    cout<<"Sorry Please enter your FULL name again: "<<endl ;
    //string yourname ;
    getline(cin,yourname) ; //gets all strings enetered in a line
    cout<<"Hi "<<yourname<<'\n' ; // outputs full name
    
    //Using concatenation +
    
    //Using .append, similar to concatenation
    
    //Using Length .length() or .size()
    cout<<"# of Characters in your name is: "<<yourname.length()<<'\n' ;
    
    //Using .at
    int n ;
    cout<<"enter the index: "<<'\n' ;
    cin>>n;
    cout<<"character at index "<<n<<" is: "<<yourname.at(n)<<'\n';
    
    //Using .insert
    string instring = " The awesome" ;
    
    cout<<"instrted string is: "<<yourname.insert(n, instring)<<'\n' ;
    
    //Using sstream
    
    string mystr;
    float price=0;
    int quantity=0;
    
    cin.ignore(1000,'\n') ;
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << "\n";
    
    return 0;
}
