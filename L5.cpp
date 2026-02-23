// // Functions
// // Function ek code ka block hota hai jo koi 
// // specific kaam karta hai aur jab bhi 
// // zarurat ho use dobara call kar sakte hain.


#include <iostream>
using namespace std;

// int name(){
//     cout << "Krishna\n";
//     return 18;
// }
// int sum(int a , int b ){
//     int s = a + b ;
//     return s ;
// }

// int minno(int a , int b ){
//     if(a < b ){
//         return a ;
//     } else {
//         return b ;
//     }
// }

// int sumtn(int n){
//     int sum = 0 ;

//     for (int i = 0 ; i <= n ; i++){
//         sum += i;
//     }
//     return sum;
// }

// int fact(int n){
//     int sum = 0 ;
//     int fact = 1;

//     for (int i = 1 ; i <= n ; i++){
//         fact *= i ;
//     }
//     return fact;
// }


// int main(){
//     name();
//     // cout << sum(2,3);
//     // cout << minno(9,3);
//     // cout << sumtn(18) << "\n";
//     // cout << sumtn(5) << "\n";
//     // cout << sumtn(10)<< "\n";
//     // cout << sumtn(10)<< "\n";
//     cout << fact(5);
// }

// Pass by Value 
// ✅ English:
// Pass by Value means a copy of the variable is sent to the function.
// Changes made inside the function do NOT affect the original variable.

// ✅ Hinglish:
// Pass by Value mein variable ki copy function ko di jaati hai.
// Function ke andar jo change hota hai, original variable par effect nahi padta.

// int changex(int x ){
//     x = 2*x ;
//     cout << "x" << x << "\n" ;
//     return 0;
// }

// int main(){
//     int x  = 5;
//     changex(x);
//     cout << "x" << x << endl;
//     return 0 ;
// }


int sumnu(int num){
    int digsum = 0 ;

    while(num > 0 ){
        int lastdig = num % 10;
        num /= 10;

        digsum += lastdig;
    }
    return digsum;
}


int main(){
 cout << "sum = " << sumnu(2356);

 return 0 ;
}
