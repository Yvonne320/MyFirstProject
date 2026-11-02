#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter an integer value between 5 and 10:";
    while(!(cin>> number)){
        cout<<"Sorry,you entered an invalid number. Please try again"<< endl;

        cin.clear();
        cin.ignore(1000,'\n');

        cout<<"Enter an integer value between 5 and 10";
      }
    while(number < 5 || number > 10){
        cout<<"You entered"<< number<<"Please enter a number between 5 and 10:";

        while(!(cin>> number)){
            cout<<"Sorry, you entered an invalid number. Please try again."<< endl;

            cin.clear();
            cin.ignore(1000, '\n');

            cout<<"Enter an integer value between 5 and 10:";
        }
    }
    cout<<"Your input value(" << number << ") has been accepted."<< endl;

    return 0;
}