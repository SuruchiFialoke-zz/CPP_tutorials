//
//  main.cpp
//  Test11
//  Contains simple recursive Functions
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <fstream>


using namespace std ;

void counter(int) ;
// counter - a recursive function that counts up /down
// @param int - a number to increment or decrement
// basically does what a for loop does

int factorial(int) ;
// factorial - a recursive function that returns factorial of a number

int fibonacci(int) ;
//fibonacci - prints a fibonacci series upto an integer

int main() {
    // insert code here...
    int num ;
    cout<<"ENter a number: \n" ;
    cin>>num ;
    
    counter(num) ;
    
    cout<<"\n" ;
    cout<<"Factorial: "<<factorial(num)<<"\n" ;
    
    cout<<"Fibonacci "<<fibonacci(num)<<"\n" ;
    
    //File input output operations..
    ifstream inFile ;
    inFile.open("fruit.txt") ;
    
    //check for error
    
    if(inFile.fail()){
        cerr<<"Error opening File!\n" ;
        exit(1) ;
    }
    
    
    return 0;
}

//Counter
void counter (int count) {
    // always needs a base case to stop: using a for loop
    // the subsequent values should lead to base case
    if(count >= 0) {
        counter (count -1) ;
        cout<<" "<<count<<" " ;
        //flip the order of the above statments to change the order
    }
    //cout<<"Done with your number!!\n" ;
}

//Factorial

int factorial (int num) {
    if(num<=1) return 1 ;
    else return num*factorial(num-1) ;

}


//Fibonacci

int fibonacci (int num) {
    //int result ;
    if(num<2) {
          return num ;
    }
    else {
        return ( fibonacci(num-1) + fibonacci(num-2) ) ;
    }
    
}



