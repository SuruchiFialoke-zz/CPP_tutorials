//
//  main.cpp
//  Using Vectors
//
//  Created by Suruchi on 3/7/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std ;

// Function declarations
// Always pass by reference
// Arrays are always passed by reference
void fillVec(vector<int>&);
// fillVec: fills the vector with elements
// @param vector<int>&, reference to a vector

void printVec(const vector<int>&);
// printVec: prints elements of vector
// @param const vector<int>&, reference to a vector

void reverseVec(const vector<int>&);
// reverseVec: print reverse of the vector elements
// @param const vector<int>&, reference to a vector

void printEvens(const vector<int>&);
// printEvens: print even elements of the vector
// @param const vector<int>&, reference to a vector

void replaceElem(vector<int>&);
//replace: replaces one integer with another

int main() {
    /*
    //Format: vector<Data Type> nameOfVector
    //firstVec.push_back(value) ==> adds value to vector
    //firstVec.at(index) ==>returns value at index
    //firstVec.size() ==> returns an unsigned int of total number of values
    //firstVec.begin() ==>reads vector from beginning
    //firstVec.insert(firstVec.begin() + int index, newValue) ==> adds element BEFORE index
    //firstVec.erase(firstVec.begin() + int index) ==> deletes element AT index
    //firstVec.clear() ==> removes all elements from vec
    //firstVec.empty() ==> returns a bool true if empty
     */
    vector<int> firstVec ;
    
    fillVec(firstVec) ;
    
    //printing the vector
    printVec(firstVec) ;
    
    //Inserting integer and printing
    int n;
    cout<<"Enter an integer: \n";
    cin>> n ;
    firstVec.insert(firstVec.begin(), n) ;
    
    printVec(firstVec) ;
    reverseVec(firstVec) ;
    printEvens(firstVec) ;
    replaceElem(firstVec) ;
    printVec(firstVec) ;

    firstVec.empty();
    return 0;
}

void fillVec(vector<int>& newMyVec){
    cout<<"Type in list of numbers, -1 to stop: \n";
    int input;
    cin>>input ;
    while(input!=-1) {
        newMyVec.push_back(input);
        cin>>input ;
    }
    
}

void printVec(const vector<int>& newMyVec){
    cout<<"The vector: \n";
    for (auto i=0; i<newMyVec.size(); i++)
        cout<<newMyVec[i]<<"\t" ;
    cout<<"\n";

}

void reverseVec(const vector<int>& newMyVec){
    cout<<"The reversed vector: \n";
    for (auto i=0; i<newMyVec.size(); i++)
        cout<<newMyVec[newMyVec.size()-1-i]<<"\t" ;
    cout<<"\n";
    
}

void printEvens(const vector<int>& newMyVec){
    cout<<"Printing even numbers of the vector: \n";
    for (auto i=0; i<newMyVec.size(); i++) {
        if(newMyVec[i]%2==0) cout<<newMyVec[i]<<"\t" ;
    }
    cout<<"\n";
    
}

void replaceElem(vector<int>& newMyVec){
    int n1 ;
    int n2 ;
    cout<<"Type in a number that you want to replace: \n";
    cin>>n1 ;
    cout<<"Type in a number that you want to replace "<<n1<<" with: \n";
    cin>>n2 ;
    
    for (auto i=0; i<newMyVec.size(); i++) {
        if(newMyVec[i]==n1) newMyVec[i]=n2 ;
    }
}
