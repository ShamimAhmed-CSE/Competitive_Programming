#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n,a,b;
    int ans=0,maxo=0;
    map<ll,ll>m;
    cin>>n;
    for(int i=0; i<n; i++){
    cin >>a>>b;
    m[a]++;
    m[b]--;

    }
    for(auto x : m){
    ans+=x.second;
    maxo=max(ans,maxo);


    }
    cout<<maxo<<endl;

}
