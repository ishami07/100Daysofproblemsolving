#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int c,n,i=0,ans=0,digit;

    cout<<"enter any  no.  ";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        ans=(ans*10+digit);
        n=n/10;
        i++;

    }
    cout << ans;
    return 0;
}