#include<stdio.h>
#include <iomanip>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        double res=0.0;

        for(double i=1;i<=n;i++)
        {
            res=res+1/i;
        }


       cout << fixed << setprecision(2) << n*res;
       cout<<endl;

    }
    return 0;
}
