//
#include "BMI.h"

//default constructor

BMI::BMI() {
    newHeight = 0;
    newWeight = 0.0;
}

//overload constructor
BMI::BMI(string name,int height, double weight) {
    
    newName = name ;
    newHeight = height;
    newWeight = weight;

}

//Deconstructor functon
BMI::~BMI() {

}

//Accessor Functions


string BMI::getName() const{
    return newName ;
}

int BMI::getHeight() const{
    return newHeight ;
}

double BMI::getWeight() const{
    return newWeight ;
}

//Mutator Funcions
//

void BMI::setName(string name){
    newName=name ;
}


void BMI::setHeight(int height){
    newHeight=height ;
}

void BMI::setWeight(double weight){
    newWeight=weight ;
}


double BMI::calculateBMI() {
    return((newWeight*703)/newHeight/newHeight) ;
}
