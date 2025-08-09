// Given an integer N, return the sum of first N natural numbers. Try to solve this using recursion.

#include<iostream>
using namespace std ;
int fun(int a,int sum){
    
    if(a>0){
        sum = sum + a ;
        fun(a-1,sum);
    }
}
int main (){
    int n , sum=0;
    cout<<"enter the value of n : "<< endl;
    cin>>n;
    
    int result  = fun(n,sum);
    cout<< result ;

    return 0;
}
