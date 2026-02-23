Decimal - > Binary 
Binary - > Decimal 



#include <iostream>
using namespace std;

int dec2bin(int decNum){
    int ans = 0 , pow = 1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int bin2dec(int binNum ){
    int ans = 0 , pow = 1 ;

    while(binNum > 0 ){
        int rem = binNum % 10 ;
        ans += rem * pow ;
        
        binNum /= 10;
        pow *= 2 ;
    }
    return ans;
}

int main(){


    // cout << bin2dec(1010) << "\n";
    cout << bin2dec(101011) << "\n";
}
