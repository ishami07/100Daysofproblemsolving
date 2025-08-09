#include<iostream>
using namespace std ;
int fun(int a,int cnt ){
    if(cnt <= a){
        cout<< "shami" << "  ";
        cnt++ ;
        fun(a,cnt);
        
    }
}
int main (){
    int n , count=1;
    cout<<"enter the value of n : "<< endl;
    cin>>n;
    
    fun(n,count);

    return 0;
}