#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,x,D;
    int quadratic = a*x*x + b*x + c;
    cout<< "enter the cofecient of X²:  ";
    cin >> a;
    cout<< "enter the cofecient of X:  ";
    cin >> b;
    cout<< "enter the constant term:  ";
    cin >> c;
    D=(b*b)-(4*a*c);
    if(D==0)
    {
        cout << "roots are equal : " << -b/(2*a) << endl;
    }
    if(D>0)
    {
    cout << "first root is : " << (-b+D)/2*a<<endl;
    cout << "second root is : " << (-b-D)/2*a<<endl;
    }

}