#include<iostream>
using namespace std ;
bool iseven(int a)
{
    if(a&1==1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout << "enter the numbers :- " << endl;
    cin >> num ;
    int ans = iseven(num);
    if(ans==1)
    {
        cout << "number is even "<< endl;
    }
    else
    {
        cout << "number is odd "<< endl;
    }
    return 0;
}
