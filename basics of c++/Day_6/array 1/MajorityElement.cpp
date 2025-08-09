#include<iostream> 
#include<vector>
using namespace std ;
 
int majorityElement(int arr[] ){
    int majority=arr[0];
    int count = 1 ;
    int key ;
    for (int i = 0; i < arr.size(); i++)
    {
        key = arr[i] ;
        for (int j = 1; j < arr.size(); j++)
        {
            if (key==arr[j])
            {
                count= count + 1 
                arr[j]= -1 ;
            } 
            
        }
        if (majority<count)
        {
            majority=array[i];
        }
        
        
        
    }
    
}
int main(){
    int n ;
    vector<int> arr(n);
    cout<<"enter the no. of element in an array : "<< endl ;
    cin>> n;
    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }
    cout<<"The majority elament in an array is : ";
    cout<<majorityElement(arr);
    


}