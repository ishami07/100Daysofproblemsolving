#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "enter any number : " << endl;
    cin>>n;
    bool isprime = 1;
    for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
       isprime =0;
      break; 
      }
    }
    if(isprime==0)
    {
    cout << "the give no. is not prime " << endl;
    }
    else
    {
    cout << "the given no. is prime " << endl;
    }
    
    
    return 0;
}