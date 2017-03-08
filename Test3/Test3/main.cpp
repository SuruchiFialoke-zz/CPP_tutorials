//
//  main.cpp
//  Trying  Switch
// global constants and precision
//
//  Created by Suruchi on 3/6/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <ctime>

//ctime allows to use random seeds
using namespace std ;

//Constants
const double TAX_FEDERAL = 0.1511111 ;

//Static variables
static int x = 10;
void modifyNum() ;

int main() {
    double yourIncome ;
    cout<<"Enter your annual salary: "<<endl ;
    cin>>yourIncome ;
    yourIncome -= yourIncome*TAX_FEDERAL;
    cout << "you willl make: "<<yourIncome<<endl;
    
    //without iomanip
    cout.setf(ios::fixed) ;
    cout.setf(ios::showpoint) ;
    cout.precision(2) ;
    
    //can also do it with iomanip
    cout << "you willl make (rounded to 2 decimal places): "<<yourIncome<<'\n';
    cout<<"\n";
    
    //Trying switch statements
    int gpa_round = 3;
    
    switch(gpa_round){
        case 4:
            cout<<"Perfect score"<<endl ;
            break;
        case 3:
            cout<<"Almost Perfect score"<<endl ;
            break;
        case 2:
            cout<<"You can do better"<<endl ;
            break;
            
        default:
            cout<<"You fail"<<endl ;
    }
    
    cout<<"\n";
    cout<<"\n";

    
    //Trying ctime
    
    srand(time(0)) ;

    cout<<"A random number: "<<rand()<<"\n" ;
    cout<<"A random number form 1 to x: "<<rand() % (x+1)<<"\n" ;

    cout<<"round 1; \n" ;
    
    modifyNum() ;
    cout<<"round 2; \n" ;
    modifyNum() ;

    return 0;
}

void modifyNum() {

    cout<< (x += 5)<<"\n" ;
}
