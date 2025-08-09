#include<iostream>
using namespace std ;
int fun(int a){
    
    if(a>0){
        cout<< a << "  ";
        fun(a-1);
        
    }
}
int main (){
    int n , count=1;
    cout<<"enter the value of n : "<< endl;
    cin>>n;
    
    fun(n);

    return 0;
}