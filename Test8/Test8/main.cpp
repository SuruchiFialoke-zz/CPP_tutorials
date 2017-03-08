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
    
    vector <Bank> allUsers ;
    
    int userId=500 ;
    string userName ;
    double userBal ;
    
    int totUsers ;
    cout<<"Enter total Users: \n";
    cin>>totUsers ;
    
    
    for(int i = 0; i< totUsers; i++) {
        cout<<"Enter your name and amount: \n" ;
        cin>>userName>>userBal ;
        userId += 1;
        Bank newUser(userName, userId, userBal) ;
        allUsers.push_back(newUser) ;
        Bank::printBankInfo() ;

    }
    return 0;
}
