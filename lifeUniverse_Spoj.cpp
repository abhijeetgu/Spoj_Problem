#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[10000],i=0;
    cin>>n;

    while(n!=42)
    {
        a[i]=n;
        cin>>n;
        i++;
    }

    for(int j=0;j<i;j++)
    {
        cout<<a[j]<<endl;;
    }

    return 0;
}
