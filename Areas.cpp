#include <iostream>
using namespace std;

double squareArea(double side){
    return side;
}

double rectangleArea(double length, double width){
    return length * width;
}

double triangleArea(double base, double height){
    return 0.5 * base * height;
}

int main(){
    int choice;
    double side, length, width, base, height;

    cout<<"Please select the area of the shape to calculate"<< endl;
    cout<<"1. Square"<< endl;
    cout<<"2. Rectangle"<< endl;
    cout<<"3. Triangle"<< endl;
    cout<<"Enter your choice:"<< endl;
    cin>> choice;

    if(choice == 1){
       cout<< "Enter the side:";
       cin>> side;

       cout<<"Area of square ="<< squareArea(side)<< endl;
     }
    else if(choice == 2){
        cout<<"Enter the length:";
        cin>> length;

        cout<<"Enter width:";
        cin>> width;

        cout<<"Area of rectangle = "<< rectangleArea(length, width)<<endl;
     }
    else if(choice == 3){
        cout<<"Enter the base:";
        cin>> base;

        cout<<"Enter height:";
        cin>> height;

        cout<<"Area of triangle = "<< triangleArea(base, height)<<endl; 
     }
    else {
        cout<<"Invalid choice."<< endl;
    }
       return 0;
}