//
//  Bank.cpp
//  Test8
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include "Bank.hpp"

/* Static Variables */

int Bank::totAccounts = 0;
// needs to be incremented everytime
// 1. An object is created (@Default constructor)
// 2. An object is created (@Overload constructor)
// 3. An object is destroyed (@Destructor)

double Bank::totBalance = 10000;
// Trickier, Needs to be changed everytime
// 1. An object is created with balance (@Overload constructor)
// 2. An object is destroyed (@Destructor)
// 3a. Account balance is added to an user created using default constructor (@Mutator Function)
// 3b. Account balance is changed (@Mutator Function)
// 4. Any other functions that deals with balance (@depositBal and withdrawBal)


/* Class Functions */

// Default constructor
Bank::Bank() {
    accNumber = 0;
    accBalance = 0 ;
    totAccounts++ ;
}

// Overload Constructor
Bank::Bank(string newName, int newAccNum, double newBal) {
    accName = newName ;
    accNumber = newAccNum ;
    accBalance = newBal ;
    totAccounts++ ;
    totBalance += accBalance ;
    }

// Destructor
Bank::~Bank() {
    totAccounts-- ;
    totBalance += accBalance ;
}

// Accessor Functions

// getAccName ==> access account name
string Bank::getAccName() const {

    return accName ;

}

// getAccNumber ==> access account number

int Bank::getAccNumber() const {

    return accNumber ;
}

// getAccBalance ==> access account balance

double Bank::getAccBalance() const{

    return accBalance ;
}

// Mutator Functions: sets or modifies information from User to class

void Bank::setAccName(string newName) {
    
    accName = newName;
    
}
void Bank::setAccNumber(int newAccNum) {
    
    accNumber = newAccNum ;
}

void Bank::setAccBalance(double newBal) {
    totBalance -= accBalance ;
    accBalance = newBal ;
    totBalance += accBalance ; //VERY IMP TO SUBSTRACT AND ADD
}

//Other Functions

void Bank::depositBal(double depAmount) {
    accBalance += depAmount ;
    totBalance += depAmount ;

}
void Bank::withdrawBal(double drawAmount) {
    accBalance -= drawAmount ;
    totBalance -= drawAmount ;
}


void Bank::printBankInfo() {
    cout<<"Welcomt to SF Capital bank \n" ;
    cout<<"Total # of Active Account are: "<<totAccounts<<'\n' ;
    cout<<"Total Balance is: $"<<totBalance<<'\n' ;

}
