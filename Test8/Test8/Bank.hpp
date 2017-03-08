//
//  Bank.hpp
//  Test8
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#ifndef Bank_hpp
#define Bank_hpp

#include <iostream>
#include <string>

using namespace std ;

class Bank {

public:
    //Default constructor
    
    Bank() ;
    
    //Overload Constructor
    Bank(string, int, double) ;
    
    //Destructor
    ~Bank() ;
    
    //Accessor Functions
    string getAccName() const;
    //getAccName ==> gets account name from User
    
    int getAccNumber() const;
    //getAccNumber ==> gets account number from User
    
    double getAccBalance() const;
    //getAccBalance ==> gets account balance from User
    

    //Mutator Functions
    void setAccName(string) ;
    void setAccNumber(int ) ;
    void setAccBalance(double) ;

    //Other Functions
    
    void depositBal(double) ;
    void withdrawBal(double) ;
    
    //For functions that print static variable we need static
    static void printBankInfo() ;
    
private:
    
    string accName ;
    int accNumber ;
    double accBalance ;
    
    static int totAccounts ;
    static double totBalance ;
    
};

#endif /* Bank_hpp */
