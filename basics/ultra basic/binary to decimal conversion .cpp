#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int c,n,i=0,digit,ans=0;

    cout<<"enter any  no.  ";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        if (digit==1)
        {
        ans=(ans+pow(2,i));
        }
        n=n/10;
        i++;
    }
    cout << ans;
    return 0;
}