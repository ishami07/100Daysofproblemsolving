#include<iostream>
#include<cmath>
using namespace std ;
  
int area(int n){
    int ans = 3.14*n*n ;
    return ans ;
}


int main() {
    int radius ;
    cout<< "enter the radius of circle  " << endl ;
    cin>> radius ;
    int result = area(radius);
    cout<< "Area of circle is : "<<result ;
}