#include <iostream>
using namespace std;
 int main(){
    int rows, columns;
    cout<<"Enter number of rows (maximum 3): ";
    cin>> rows;
    cout<<"Enter number of columns(maximum 3): ";
    cin>> columns;

    if(rows < 1 || rows > 3 || columns < 1 || columns > 3){
        cout<<"Invalid dimensions ! Maximum size is 3 by 3.";
        return 0;
    }
    double **arr = new double*[rows];
    for(int i = 0; i < rows; i++){
        arr[i] = new double[columns];
    }
    cout<<"\nEnter the array value: \n";

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout<<"Enter value: ";
            cin>> arr[i][j];
        }
    }
    cout<<"\nThe array values are: \n";

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){

            cout << arr[i][j] << " ";
        }
            cout << endl;
    }
    for(int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
 }