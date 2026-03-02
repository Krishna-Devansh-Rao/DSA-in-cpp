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


// to find out the smallest number 
// int main(){
//     int num[6] = {5,15,22,1,-15,24} ;
//     int size = 6;
//     int smallest = INT_MAX;
//     for(int i = 0 ; i < size ; i++ ){
//         if(num[i] < smallest){
//             smallest = num[i];
//         }
//     }
//     cout << "smallest is : " << smallest ;
// }

int main(){
    int num[6] = {5,15,22,1,-15,24} ;
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i = 0 ; i < size ; i++ ){
        smallest = min(num[i],smallest);
        largest= max(num[i],largest);
    }
    cout << "smallest is : " << smallest << "\n" ;
    cout << "largest is : " << largest ;
}    

