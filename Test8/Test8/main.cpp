//
//  main.cpp
//  Test8
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

#include "Bank.hpp"

using namespace std ;

int main() {
    
    Bank::printBankInfo() ;
    
    //vector <Bank> allUsers ;
    
    int userId=500 ;
    string userName ;
    double userBal ;
    string newUser ;
    
    int totUsers ;
    cout<<"Enter total Users: \n";
    cin>>totUsers ;
    
    
    for (int i = 0; i< totUsers; i++) {
        cout<<"Enter your name and amount: \n" ;
        cin>>userName>>userBal ;
        userId += 1;
        newUser = "New_"+ userName ;
        Bank newUser(userName, userId, userBal) ;
        
        cout <<"Hi "<<newUser.getAccName()
            <<" your account number is #"<<newUser.getAccNumber()
            <<" and deposit amount is $"<<newUser.getAccBalance()<<"\n" ;
        
        //allUsers.push_back(newUser) ;
        Bank::printBankInfo() ;
    }
    
    
    
    return 0;
}
