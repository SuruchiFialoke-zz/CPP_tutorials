//
//  main.cpp
//  Test10
//  On Pointer and dynamic memory allocation
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>

using namespace std ;

//Decraling constants
const int CAPACITY = 1000;

template <class allT>
    void printInfo(allT *) ;
// Using Template allows any data type
// Prints informations from a poiner
// e.g @param int* ==> pointer that is pointing to an integer
// Caling function ==> printInfo <float> (p1) ;

template <class allT>
allT getSum(allT *, allT *) ;
// Using Template allows any data type
// Returns sum of the values pointed by the two pointers
// @param allT* ==> pointer that is pointing to 1st number (any type)
// @param allT* ==> pointer that is pointing to 2nd number


int main() {
    // p1 ==> pointer, that points to a variables address
    // (*) ==> dereference operator
    // *p1 ==> returns the variable p1 is pointing to
    // (&) ==> adress of operator
    
    int num1 = 8,
    *p1 = &num1 ;
    int num2 = 100,
    *p2 = &num2 ;
    int sum ;
    
    printInfo<int>(p1) ; printInfo<int>(p2) ;
    
    sum = getSum<int> (&num1, &num2) ;
    cout<<"Sum: "<<sum<<"\n" ;
    
    //Uncomment to learn pointer assignments ;
    /*
        p1=p2 ;
        *p1 = *p2 ;
        cout<<" Set *p1 = *p2: \n" ;
        printInfo(p1) ; printInfo(p2) ;
    */
    
    
    //Dynamically creating variables
    cout<<'\n' ;
    cout<<"Using dynamically created variables.....\n" ;
    float *pd1 ;
    pd1 = new float ; // values pd1 is pointing to is not yet specified
    // Dynamic variables are created on heap
    
    printInfo <float> (pd1) ;
 
    *pd1 = 800 ; // now specified variable it's pointing to
    printInfo <float> (pd1) ;
    
    
    //Dynamically creating Arrays
    cout<<'\n' ;
    cout<<"\n Using dynamically created arrays.....\n" ;
    int *pdArray ;

    pdArray = new int[CAPACITY] ;
    
    //Don't use derefence operators with arrays
    //They are passed by reference already
    
    pdArray[0] = 91 ;
    pdArray[1] = 19 ;
    pdArray[2] = 800 ;
    
    printInfo <int> (pdArray) ;
    printInfo <int> (&pdArray[0]) ; // Same as above
    printInfo <int> (&pdArray[1]) ; // see how its 4bits away cool!
    printInfo <int> (&pdArray[2]) ; // see how its 4bits away cool!

    delete [] pdArray ; //Only deletes the elements of the array
    pdArray = NULL ; //Destroys the array
    
    return 0;
}

//Function to print info from a pointer
template <class allT>
void printInfo(allT *p) {

    cout<<"Value of Number: "<<*p<<"\t" ;
    cout<<"Address of Number: "<<p<<"\n" ;
    //cout<<"Address of Pointer: "<<&p<<"\n" ;
}

//Function to sum values pinted by p1 and p2
template <class allT>
allT getSum(allT *p1, allT *p2) {
    
    return (*p1) + (*p2) ;
}




