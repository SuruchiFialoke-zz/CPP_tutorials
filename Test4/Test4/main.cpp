//
//  main.cpp
//  Lets Learn Functions
//
//  Created by Suruchi on 3/6/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std ;

//Function declarations

void whatAmI();
// welcome - prints a welcoming message

double product(double, double) ;
// products - multiplies two numbers
//@param double - 1st number to be multiplied
//@param double - 2nd number to be multiplied

double addition(double, double) ;
// addition - adds two numbers
//@param double - 1st number to be added
//@param double - 2nd number to be added

void increment_byRef(double&, double) ;
// addition - increments number by reference
//@param double& - number1 to be incremented
//@param double - increment value

int main() {

    double a, b ;
    
    //whatAmI() ;
    cout<<"Enter two numbers: " ;
    cin>>a>>b ;
    
    cout<<product(a,b)<<endl ;
    
    cout<<addition(a,b)<<endl ;
    
    increment_byRef(a,b/2.0) ;
    cout<<a<<endl ;
    
    
    return 0;

}

//Function definitions
void whatAmI(){

    cout<<"Mathematical Operations Type: ";
}

double product(double num1, double num2){
    whatAmI() ;
    cout<<"Multiplication"<<endl<<"result is: "<<endl ;
    return (num1*num2) ;
}

double addition(double num1, double num2){
    whatAmI() ;
    cout<<"Addition"<<endl<<"result is: "<<endl ;
    return (num1+num2) ;
}

void increment_byRef(double& num1, double incr){
    whatAmI() ;
    cout<<"Incrementing your 1st number by "<<incr<<": "<<endl ;
    num1 += incr ;
}
