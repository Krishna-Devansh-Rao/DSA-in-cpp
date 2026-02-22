#include <iostream>
using namespace std ;

// Patterns 

// To Print Suare pattern 1-5 
// int main(){
//     int i , n , j;
//     n = 6;
//     for(int i = 1 ; i <= n ; i++){
//         for(int j = 1;j <= n;j++){
//             cout << "*" ;
//         }    
//         cout << endl;
//     }
// }

// Pattern in Alphabets
// int main(){
//     int n ;
//     n = 6;
//     for(int i = 0 ; i < n ; i++){
//         char ch = 'A';
//         for(int j = 0;j < n ; j++){
//             cout << ch ;
//             ch = ch + 1 ;
//         }
//         cout << endl;
//     }
// }

// 1-9 IN PATTERN
// int main(){
//     int i , j , n , num ;
//     n = 3;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout << num  << " ";
//             num = num + 1  ; 
//         }
//         cout << endl;
//     }
// }

// A - I IN PATTERN
// int main(){
//     int i , j , n , num ;
//     n = 3;
//     char ch = 'A';
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout << ch  << " ";
//             ch = ch + 1  ; 
//         }
//         cout << endl;
//     }
// }


// Star Pattern 1,2,3,4;
// int main(){
//     int i ,j,  n ;
//     n = 4;
//     for (int i = 0 ; i < n ; i++ ){
//         for(int j = 0 ; j < i+1 ; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }            
// output : 
// * 
// * * 
// * * * 
// * * * * 
// }

// int n = 5;
// int main() {
//     // Upper Part
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     // Lower Part
//     for(int i = n; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// // output : 
// // * 
// // * * 
// // * * * 
// // * * * * 
// // * * * * * 
// // * * * * * 
// // * * * * 
// // * * * 
// // * * 
// // * 
// }



// int main() {
//     int n = 5;
//     // Upper Part
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     // Lower Part (start from n-1)
//     for(int i = n-1; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
// output :
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 


// 1 22 333 4444 55555
// int main(){
//     int i ,j, n ;
//     n = 4;
//     for (int i = 0 ; i < n ; i++ ){
//         for(int j = 0 ; j < i+1 ; j++){
//             cout << i +1;
//         }
//         cout << endl;
//     }            
// }

// A BB CCC DDD
// int main(){
//     int i ,j, n ;
//     n = 4;
//     for (int i = 0 ; i < n ; i++ ){
//         char ch = 'A' + i ;
//         for(int j = 0 ; j < i+1 ; j++){
//             cout << ch ;
//         }
//         cout << endl;
//     }            
// }

// 1 12 123 1234
// int main(){
//     int i ,j,  n ;
//     n = 4;
//     for (int i = 0 ; i < n ; i++ ){
//         for(int j = 0 ; j < i+1 ; j++){
//             cout << j + 1;
//         }
//         cout << endl;
//     }            
// }
// output :
// 1
// 12
// 123
// 1234


// 1 21 321 4321
// int main(){
//     int i ,j,  n ;
//     n = 4;
//     for (int i = 0 ; i < n ; i++ ){
//         for(int j = i+1 ; j > 0 ; j--){
//             cout << j ;
//         }
//         cout << endl;
//     }            
// }
// output : 
// 1
// 21
// 321
// 4321


// 1111 222 33 4
// int main(){
//     int i , j ,m,n;
//     n  = 4 ;
//     for(i = 0; i < n ; i ++){
//         for(j = 0 ; j < i ; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < n-i ; j++){
//             cout << i+1 ;
//         }
//         cout << endl;
//     }
// }

// Pyramid Pattern
// int main(){
//     int i , n,m,j;
//     n = 9;
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n-i-1 ; j++){
//             cout << " ";
//         }
//         for(int j = 1 ; j <= i+1 ; j++){
//             cout << j;
//         }
//         for(int j = i ; j > 0 ; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
// }
// int main(){
//     int i,j,m,n;
//     n = 4;
//     for ( int i = 0 ; i < n;i++){
//         for(int j = 0 ; j < n-i-1 ; j++){
//             cout << " ";
//         }
//         cout << "*";
//         if(i != 0){
//             for(int j = 0 ; j<2*i-1; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
// //    *
// //   * *
// //  *   *
// // *     *
// }
