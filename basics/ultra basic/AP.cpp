#include<iostream>
#include<conio.h>
using namespace std ;

int ans( int n )
{ 
    int result = ( 3 * n ) + 7 ;
    return result;
}
int main()
{
    int n;
    cin >> n ;
    clrscr ( );
    int sol ;
    sol = ans( n ) ;
    cout <<  sol << endl;
    return 0;
}