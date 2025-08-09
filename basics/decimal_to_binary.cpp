#include<iostream>
#include<cmath>
using namespace std ;
// method 1 i.e. using divisible by 2 

// string DecimalToBinary(int n){
//     int bit;
//     string ans= "";
//     int i=0;
//     while(n>0){
//         bit=n%2;
//         ans= to_string(bit)+ ans ;
//         n=n/2;
//     }
//     return ans ;
// }

// // method 2 i.e. using bitwise and  
// int DecimalToBinary(int n){
//     int bit,ans=0;
//     int i=0;
//     while(n>0){
//         bit=(n&1);
//         ans=bit * pow(10,i++) + ans ;  // in this method the problem is in to find the power of 10 . 
//         n=n>>1;
        
//     }
//     return ans ;
// }

int DecimalToBinary(int n) {
    int ans = 0;
    int power = 1; // Tracks 10^i without floating-point
    while (n > 0) {
        int bit = n & 1;
        ans = ans + bit * power;
        power = power * 10; // Manually compute 10^i (no floating-point)
        n >>= 1;
    }
    return ans;
}


int main() {
    int num ;
    cout<< "enter any decimal no.  " << endl ;
    cin>> num ;
    int result = DecimalToBinary(num);
    cout<< result ;
}