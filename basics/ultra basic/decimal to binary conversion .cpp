#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int c,n,i=0,bit,ans=0;

    cout<<"enter any  no.  ";
    cin>>n;
    while(n!=0)
    {
        bit=n&1;
        ans=(bit*pow(10,i)+ans);
        n=(n>>1);
        i++;

    }
    cout << ans;
    return 0;
}