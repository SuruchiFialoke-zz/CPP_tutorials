//Header file ===> Function declarations

#include <iostream>
#include <string>


using namespace std;


#ifndef BMI_H
#define BMI_H


class BMI {

    public:

    //Default constructor 
    BMI();
 
    //Overload constructor   
    BMI(string, int, double);

    //Destructor: once you have left the function, free the memory 
    ~BMI() ;
    
    //Accessor Function
    string getName() const ; //if the function is not modifying anything put const, best practice
                             //Returns name of the object

    int getHeight() const ; //Returns height of the object
    double getWeight() const ; //Returns height of the object

    //Mutator Functions
    
    void setName(string) ;
    void setHeight(int) ;
    void setWeight(double) ;
    
    //Calculator Function

    double calculateBMI() ;

    private:

    string newName ; //always initialized with NULL or "" as member of string class
    int newHeight ;
    double newWeight ;

};

#endif
