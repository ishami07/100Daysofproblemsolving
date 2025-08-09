#include<iostream>
using namespace std ;
int factorial ( int n )
{
    int i;
    int fact = 1 ; 
    for( i=1 ; i<=n ; i++)
    {
        fact = fact*i;
    }
    return fact ;
}
int nCr(int n, int r )
{
    int ans ;
    int numinator = factorial(n);
    int denominator= factorial(r) * factorial(n-r);
    return numinator/denominator;;

}
int main()
{
    int n,r,x,y;
    cin >> n ;
    cin >> r ;
    cout <<  nCr(x,y) << endl;
    return 0;
}