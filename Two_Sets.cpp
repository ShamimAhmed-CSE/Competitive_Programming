#include<iostream>
using namespace std;

int main ()
{
    long long n;
    cin>>n;
    if (n%4==1 || n%4==2 )
    {
        cout<<"NO"<<endl;

    }
    else
    {

        cout<<"YES"<<endl;
        if(n%4==0)
        {
            cout<<n/2<<endl;
            for (long long i=1; i<=n; i+=4)
                cout<<i<<" "<<i+3<<" "<<endl;
            cout<<n/2<<endl;
            for (long long i=2; i<=n; i+=4)
                cout<<i<<" "<<i+1<<" "<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;
            cout<<"1 2 ";
            for (long long i=4; i<=n; i+=4)
                cout<<i<<" "<<i+3<<" "<<endl;
            cout<<n/2<<endl;
            cout<<"3 ";
            for (long long i=5; i<=n; i+=4)
                cout<<i<<" "<<i+1<<" "<<endl;
        }


    }

}
