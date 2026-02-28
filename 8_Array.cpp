#include <iostream>
using namespace std;

int main(){
    int size  = 5;
    int marks[size];
    // cout << marks[0] << "\n";
    // cout << marks[1]<< "\n";
    // cout << marks[2]<< "\n";
    // cout << marks[3]<< "\n";
    // cout << marks[4]<< "\n";

    cout << "Input : " ;


// TO TAKE THE ARRAY AS INPUT
for (int i = 0 ; i < size ; i++){
    cin >> marks[i];
}


// to run array in loop
for(int i = 0; i < 5; i++){
        cout << marks[i] << "\n";
}

    return 0 ;
}

