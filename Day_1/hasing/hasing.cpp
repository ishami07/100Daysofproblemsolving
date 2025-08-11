#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of  array : " << endl;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    

    // precomputation  
    int hash[100]={0};
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]] += 1;
    }
    
    int queries;
    cout << "Enter the no. of queries :" << endl;
    cin >> queries;
    while(queries--){
        int q;
        cout<<"enter querty: ";
        cin >> q;
        cout<<"result is :"<<hash[q]<<endl;
    }

    return 0;
}