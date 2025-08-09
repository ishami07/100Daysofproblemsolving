#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int c,n,i;
    
    cout<<"enter the no. of terms ";
    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(i=0;i<n-2;i++)
    {
    c=a+b;
    cout << c << endl;
    a=b;
    b=c;
    }
    return 0;
}