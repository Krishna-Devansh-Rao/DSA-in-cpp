// If else ; Else if ; Ternary
// Loops : For , DO , while 
// Break / Prime 
// Nested Loops

#include <iostream>
using namespace std ;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ If else

// ~ 1) +ve or -ve
// int main (){
//     int n ;
//     cin >> n ; 
//     if(n >= 0 ){
//         cout << "n is positive \n";
//     }
//     else{
//         cout << "n is negative \n";
//     }
//     return 0 ; 
// }

// ~ 2) Voting age  
// int main () {
//     int age ;
//     cin >> age ;
//     if (age >= 18)
//     {
//         cout << "Your are eligible to vote\n";
//     }
//     else{
//         cout << "You need to wait to vote\n";
//     }
//     return 0 ;
// }

// ~3) Odd or even 
// int main (){
//     int num , a ;
//     cout << "Enter any no : ";
//     cin >> num;
//     a = num % 2 ;
//     // cout << a <<  "\n";
//     if (a == 0 )
//     {
//         cout << "\nIt is even \n";
//     }
//     else{
//         cout << "It is odd \n";
//     }
// }

// ~4) Entry ticket pricing
// int main (){
//     int age  ;
//     cin >> age ;
//     if (age <= 13){
//         cout << "Your fare price will be 200\n" ; 
//     }
//     else if(age <18){
//         cout << " fare price will be 500 \n" ; 
//     }
//     else if (age >=18){
//         cout << "You need to pay 700\n";
//     }
//     else{
//         cout << "You have free entry";
//     }
// }

// ~5) Upper case or lower case
// int main(){
//     char ch ;
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "It is an lower case";
//     }
//     else{
//         cout << "It is an uppercase";
//     }
// }

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Ternary Statement
// int main (){
//     int n , a;
//     cin >> n ;
//     a = n % 2;
//     cout << ( a == 0 ? "even" : "odd") ;
//     return 0;
// }



// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Loops

// ~1) While loop

// int main (){
//     int n = 10 ;
//     int count =8;
//     while (count <= n){
//     cout << count <<"\n";
//     count++;
//     }
// }

// ~2) For loop 

// for (intitialisation ; condition ; updation)
// cin >> n ; 
// int i = 1 ; i <= n ; i++ 


// conditional looping from 1- 8
// int main(){
//     int i , n;
//     // cin >> n ;
//     for (int i = 1 , n = 10 , m = 8 ; i <= n  && i <= m ; i++ ){
//         cout << i << "\n";
//     }
    

// sum from 1 to the imput 
// int main(){
//     int i , number, sum = 0 ;
//     cout << "Enter input : " ;
//     cin >> number;
//     for (i = 1 ; i <= number ; i++ ) {
//         sum += i;
//     }
//     cout << "Sum is " << sum << endl;
//     return 0;
// }

// sum and product using for 
// int main (){
//     int i , number , product = 1, sum ;
//     cout << " Enter input : " ;
//     cin >> number ;
//     for (i = 1 ; i <= number ; i++){
//         sum += i; 
//         product *= i ;
//     }
//     cout << "Multiplication is : " << product << "\n";
//     cout << "sum is : " << sum  << "\n";
// }

// ~ Sum the number using while loop 
// int main(){
//     int i, sum ,  number;
//     i = 1 ;
//     sum = 0 ;
//     cout << "Enter input : " ; 
//     cin >> number;
//     while (i <= number)
//     {
//         cout << i << "\n";
//         sum += i ;
//         i++ ;
//     }
//     cout << "The sum is : " <<sum << "\n"; 
// }

// breaking a program 
// int main(){
//     int i , num , sum ;
//     sum = 0;
//     i = 1;
//     cin >> num ;
//     for(int i ; i <= num ; i++ ) {
//         sum += i ;
//         if(i == 6){
//             break;
//         }
//     }
// cout << "sum is " << sum << "\n";
// }


// Sum of odd no 1 to n 
// int main(){
//     int i , num , sum ;
//     i = 1 ;
//     sum = 0 ;
//     // cout << "Input : ";
//     num = 5 ;
//     for( i = i ; i <= num ; i++ ) {
//         // cout << i << "\n";
//         sum = i+2 ;
//         cout << sum << "\n "; 
//     }
// cout << "The sum is : " << sum ;
// }


// // Print odd number 
// int main (){
//     int num , odd , i;
//     for(i = 1; i <= 10 ; i++ ){
//         if(i % 2 != 0 )
//         cout << i << "\n";
//     }
//     cout << "Print " << i ;
// }


// SUm of All odd numbers
// int main(){
//     int number , sum ;
//     number = 10;    
//     for(int i = 1; i <= number ; i++){
//         if (i % 2 != 0)
//         {
//             cout << i << "\n";
//             sum += i ;
//         }
//     }
//     cout << "Sum is : " << sum << "\n" ;


// ~3) Do While loop

// Trial code
// int main(){
//     do
//     {
//         cout << "Hello " ;
//         cout << "world \n" ;
//     } while (3>5);
// }

// Print 1 to 10 in DO while
// int main(){
//     int i , num , a;
//     i = 1;
//     num = 10;
//     do{
//         a = (i % 2 != 0) ;
//         cout << i << " ";
//         i++;
//     }while (i <= num);
// }


// Check weather the number is prime or not 
// int main(){
//     int n;
//     bool prime = true;
//     cout << "input : " ;
//     cin >> n ;
//     for(int i=2 ;i <=n -1 ; i++){ // for(int i=2 ; i*i <= n  ; i++)
//         if (n % i == 0){
//             prime = false ;
//             break;
//         }   
//     }
//     if(prime == true){
//         cout << "it is a Prime number " << "\n";
//     } else{
//         cout << "non prime " ;
//     }
// }



// ~4) Nested loop


// 5 times star pattern 
// int main(){
//     int i , n ;
//     n = 5;
//     for(int i = 1 ; i <= n ; i++){
//         cout << "*****" << "\n";
//     }
// return 0 ;
// }

// output :- 
// *****
// *****
// *****
// *****
// *****



// Printing stars 
// int main(){
//     int i , n, m;
//     for(int i = 1 ;i <= 5;i++){
//         int m = 20;
//         for (int i = 1; i <= m; i++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }
// Output ;
// ********************
// ********************
// ********************
// ********************
// ********************


