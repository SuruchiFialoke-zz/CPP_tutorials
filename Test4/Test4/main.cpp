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

void ask_user(char&, double, double) ;
// asking user for the operations they want to perform
//@param char& stores string that result in various operations
//@param double - 1st number
//@param double - 2nd number


int main() {

    double a, b ;
    char userChoice ;
    //whatAmI() ;
    cout<<"Enter two numbers: " ;
    cin>>a>>b ;
    
    //cout<<product(a,b)<<endl ;
    //cout<<addition(a,b)<<endl ;
    
    ask_user(userChoice, a,b) ;
    
    increment_byRef(a,b/2.0) ;
    
    //example of changing a variables value
    //by going at its address
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

void ask_user(char& choice, double num1, double num2) {
    cout<<"Enter m for multiplication and a for addition"<<endl ;
    cin>>choice ;
    if (choice =='m') {
        cout<<product(num1,num2)<<endl ;
    }
    
    else if (choice == 'a') {
        cout<<addition(num1,num2)<<endl ;
    }
    
    else cout<<"Go home you are drunk.."<<endl ;
}
