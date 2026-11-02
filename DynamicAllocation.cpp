#include <iostream>
#include <string>
using namespace std;

int main(){
    int* number = new int;
    string* name = new string;

    cout<<"Enter an integer: ";
    cin>> *number;

    cout<<"Enter a string: ";
    cin>> *name;

    cout<<"\nThe integer is: "<< *number << endl;
    cout<<"The string is: " << *name << endl;

    delete number;
    delete name;

    return 0;
}