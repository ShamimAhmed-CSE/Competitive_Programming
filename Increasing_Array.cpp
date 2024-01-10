#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n,ans=0;
    cin>>n;
     long long ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for(int i=1; i<n; i++){
        if(ar[i]<ar[i-1])
        {
           // ar[i]=ar[i-1]-ar[i];
            ans=ans+(ar[i-1]-ar[i]);
            ar[i]=ar[i-1];
        }
    }
    cout<<ans;
}

