#include <iostream> 
#include <string>
#include "BMI.h"

using namespace std;

int main() {

    string name,name2 ;
    int height,height2 ;
    double weight,weight2 ;

    cout<<"Enter names: ";
    cin>>name>>name2;

    cout<<"Enter heights: ";
    cin>>height>>height2;

    cout<<"Enter weights: ";
    cin>>weight>>weight2;

    BMI student1(name, height, weight) ;

    cout<<endl<<"Patient name = "<<student1.getName()<<endl<<
        "Height = "<<student1.getHeight()<<endl<<
        "Weight = "<<student1.getWeight()<<endl<<
        "BMI = "<<student1.calculateBMI()<<endl ;

    BMI student2;

    student2.setName(name2) ;
    student2.setHeight(height2) ;
    student2.setWeight(weight2) ;

    cout<<endl<<"Patient name = "<<student2.getName()<<endl<<
        "Height = "<<student2.getHeight()<<endl<<
        "Weight = "<<student2.getWeight()<<endl<<
        "BMI = "<<student2.calculateBMI()<<endl ;

return 0 ;
}
