#include<iostream>

using namespace std;

int main(){
    string n;
    char c;
    cin>>n;
    int cnt=0,ans=0;
    for( int i=0; i<n.length(); i++){
        if(n[i]!=c){
        c=n[i];
        cnt=0;
        }
        if(n[i]==c){
        cnt++;
        }
        ans=max(ans,cnt);
    }
 cout<<ans;
}
