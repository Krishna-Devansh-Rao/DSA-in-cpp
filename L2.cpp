// ASCII values of characters

// Type conversion (int to double, float handling)

// Input & Output operations

// Arithmetic, relational, and logical operators

// Integer vs floating-point division

// Unary operators (increment and decrement)

#include <iostream>
using namespace std ;

int main(){
    // cout << "Hey " ; 

//     Assci value 

//      65 A | 66 B | 67 C | 68 D | 69 E | 70 F | 71 G | 72 H | 73 I | 74 J |
// 75 K | 76 L | 77 M | 78 N | 79 O | 80 P | 81 Q | 82 R | 83 S | 84 T |
// 85 U | 86 V | 87 W | 88 X | 89 Y | 90 Z

//      97 a | 98 b | 99 c | 100 d | 101 e | 102 f | 103 g | 104 h | 105 i | 106 j |
// 107 k | 108 l | 109 m | 110 n | 111 o | 112 p | 113 q | 114 r | 115 s |
// 116 t | 117 u | 118 v | 119 w | 120 x | 121 y | 122 z

    // To get Assic Value 
    // char grade = 'A' ;
    // int value = grade;
    // cout << value ;

    // Type Conversion 
    // float num = 299.1234211;
    // cout << "hey " ;

    // Input 
    // int num ;
    // // cin >> num ;
    // cout << "The number which is taken as input is " << num ;

    // Operators
    // ~ 1) Arithmatic ( + , - , * , / ,  %)
    // int a , b ;
    // a = 24 ;
    // b = 12;
    // cout << a+b << "\n";  
    // cout << a-b << "\n";  
    // cout << a*b << "\n";  
    // cout << a/b << "\n";  
    // cout << a%b << "\n";  
   
    
    // ~ 1) Arithmatic ( covert karte hai int se float mai waghra waghra )

    // cout << 5 / 2 << "\n" ; // ans will be 2 because dono int hai isslilye 
    // cout << 5 / (double)2 << "\n"; // ans will be 2.5 because vo normal int nahi double ke saath divide kiya hai 
    // int a,b;
    // a = 5; b = 2;
    // cout << a/b << "\n";
    // cout << a%b << "\n";
    // int ans = (5 / (double)2) ;
    // cout << ans << "\n";

    // ~ 2) Relation ( only true or false)

    // <  greater than ;
    // <= greater than equal too ;
    // > less than ;
    // >= less than equal too ;
    // == Equal too ;
    // != Not equal too ;
   
    // cout << (3 < 5 ) << "\n";
    // cout << (3 > 5 ) << "\n";
    // cout << !(3 > 5 ) << "\n";
    
    //    ~ 3) Logical ( OR , AND )

    // | |  - > OR
    // && - > AND 
    // ! - > NOT 

// Q) SUM OF 2 NUMBERS 

// int a ,b , num; 
// cout << "Enter the numbers to add : " ;
// cin >> a ;
// cin >> b ;
// cout << "The sum of a + b is = " << a + b ;

// ~ Unary Operator ( Jisme 1 add hote jayega )

// Increment ++            Decrement --

// a++ -> a = a + 1 (writing at once instead of wirting again and again )

int a = 10 ;

int b = --a ;

cout << b << "\n"; 
cout << a << "\n" ; 

    return 0;




}
