#include<iostream>
using namespace std;
int main()
{
    int bs,hr,da,total_salary;
    char clerk;
    cout<<(" basic salary is");
    cin>>bs;

    cout<<("print 'y' if clerk and print 'n' if not clerk");
    cin>>clerk;

    if (bs<=3000);
    {
        if(clerk=='y');
        {
            hr=0;

            cout<<hr;

            da= bs*70/100;
            cout<<da;

        }
        else
        {
            hr= 8*bs/100;
            cout<<hr;
        }

        else
        {
            da = 85*bs/100;
            cout<<da;
        }
    }


    total_salary= da+hr+bs;
    cout<<total_salary;


    return 0;
}