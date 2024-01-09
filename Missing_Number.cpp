#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,a,sum1=0,sum2=0;
    cin>>n;
    for(int i =0; i<n-1; i++)
    {
        cin>>a;
        sum1=sum1+a;
    }
    for(int i =1; i<n+1; i++)
    {
        sum2=sum2+i;
    }
    cout<<sum2-sum1;
}
