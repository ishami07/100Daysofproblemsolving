#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,op,ans;
    cout<<"enter 1 for addition " << endl<<"enter 2 for subtraction " << endl<<"enter 3 for division" << endl<<"enter 4 for multiplication " << endl;
    cin>>op;
    clrscr();
    switch(op)
    {
    case 1 :
        cout<<"enter first  no.  ";
        cin>>a;
        cout<<"enter second  no.  ";
        cin>>b;
        ans=a+b;
        clrscr();
        cout << "Answer is " << ans << endl;

    case 2 :
        cout<<"enter first  no.  ";
        cin>>a;
        cout<<"enter second  no.  ";
        cin>>b;
        ans=a-b;
        clrscr();
        cout << "Answer is " << ans << endl;

    case 3 :
        cout<<"enter first  no.  ";
        cin>>a;
        cout<<"enter second  no.  ";
        cin>>b;
        ans=a/b;
        clrscr();
        cout << "Answer is " << ans << endl;

    case 4 :
        cout<<"enter first  no.  ";
        cin>>a;
        cout<<"enter second  no.  ";
        cin>>b;
        ans=a*b;
        clrscr();
        cout << "Answer is " << ans << endl;
    }
    return 0;
}