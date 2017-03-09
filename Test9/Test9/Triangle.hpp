//
//  Triangle.hpp
//  Test9
//
//  Created by Suruchi on 3/8/17.
//  Copyright © 2017 Suruchi. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std ;

class Triangle {

public:
    //Default constructor
    Triangle() ;
    
    //Overload constructor
    Triangle(int) ;
    
    //Deconstructor
    ~Triangle() ;
    
    //Accessor Functions
    int getHeight() const ;
    
    //Mutator Function
    void setHeight(int) ;
    
    //Other Functions
    
    double getArea(int) const ;
    

private:
    int height ;

//Protected: Can be done to access in children classes  but not in main
/*
protected:
    int height ;
 */
    
};




#endif /* Triangle_hpp */
