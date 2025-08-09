#include<iostream>
#include<cstring>
using namespace std ;
int main(){

    int arr[100];
    int n;
    cout<<"How many element u want to store in array : "<<endl;
    cin>>n;
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"updated array is : "<< endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]*2<<" ";
    }

}    