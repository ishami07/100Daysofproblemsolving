#include<iostream>
#include<math.h>
using namespace std;
int shami( int n)
{
    int a,ans=0,bit,i=0;
    while(a!=0)
    {
        bit=a&1;
        ans=(bit*pow(10,i)+ans);
        a=(a>>1);
        i++;
        return ans;
    }
    cout<< ans ;
}
int main()
{
    int n;
    cout<<"enter any  no.  ";
    cin>>n;
    cout << shami(n) ;
    return 0;
}