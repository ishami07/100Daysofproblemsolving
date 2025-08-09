#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int a=i; 
        while(j<=i)
        {
            cout<<a;
            j=j+1;
            a=a-1 ;
        }
        cout<<endl;
        i=i+1;
    }



    return 0;
}