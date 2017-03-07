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

double divison(double, double) ;
// divison - adds two numbers
//@param double - 1st number
//@param double - dividor

void increment_byRef(double&, double) ;
// divison - increments number by reference
//@param double& - number1 to be incremented
//@param double - increment value

void ask_user(char&, double, double) ;
// asking user for the operations they want to perform
//@param char& stores string that result in various operations
//@param double - 1st number
//@param double - 2nd number

template <class T>
T sum (T inp1, T inp2) ;
//Addition function that takes any type of input
//@param inp1 - input 1
//@param inp2 - input 2

int main() {

    double a, b ;
    char userChoice ;
    //whatAmI() ;
    cout<<"Enter two non-zero numbers: " ;
    cin>>a>>b ;
    
    //cout<<product(a,b)<<endl ;
    //cout<<divison(a,b)<<endl ;
    
    ask_user(userChoice, a,b) ;
    
    increment_byRef(a,b/2.0) ;
    
    //example of changing a variables value
    //by going at its address
    cout<<a<<endl ;
    
    int i=5, j=6, k;
    double f=2.0, g=0.5, h;
    bool l='True', m='False', lm ;
    
    string str1="Suruchi";
    string str2="Fialoke";
    string strSum;
    
    k=sum<int>(i,j);
    h=sum<double>(f,g);
    lm=sum<bool>(l,m);
    strSum=sum<string>(str1,str2) ;
    
    cout<<k<<"\n"<<h<<"\n"<<lm<<"\n"<<strSum<<"\n" ;
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

double divison(double num1, double num2){
    whatAmI() ;
    cout<<"divison"<<endl<<"result is: "<<endl ;
    return (num1/num2) ;
}

void increment_byRef(double& num1, double incr){
    whatAmI() ;
    cout<<"Incrementing your 1st number by "<<incr<<": "<<endl ;
    num1 += incr ;
}

void ask_user(char& choice, double num1, double num2) {
    cout<<"Enter m for multiplication and d for divison"<<endl ;
    cin>>choice ;
    if (choice =='m') {
        cout<<product(num1,num2)<<endl ;
    }
    
    else if (choice == 'd') {
        cout<<divison(num1,num2)<<endl ;
    }
    
    else cout<<"Go home you are drunk.."<<endl ;
}

template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return result;
}
