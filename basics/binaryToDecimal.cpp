#include<iostream>
#include<cmath>
using namespace std ;
  
int BinaryTODecimal(int n){
    int bit,ans=0;
    int i=0;
    while(n>0){
        bit=n%10;
        ans=bit * pow(2,i++) + ans ;
        n=n/10;
        
    }
    return ans ;
}


int main() {
    int num ;
    cout<< "enter any binary no.  " << endl ;
    cin>> num ;
    int result = BinaryTODecimal(num);
    cout<< result ;
}