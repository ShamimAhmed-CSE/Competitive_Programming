#include<bits/stdc++.h>

using namespace std;

int main(){

        int apt,flat,dis;
        cin>>apt>>flat>>dis;
        int ar1[apt],ar2[flat];
        for(int i=0; i<apt; i++)
            cin>>ar1[i];

         for(int i=0; i<flat; i++)
            cin>>ar2[i];
        sort(ar1,ar1+apt);
        sort(ar2,ar2+flat);

        int i=0,j=0,cnt=0;
        while(i<apt && j<flat){
        if (max(ar1[i],ar2[j])-min(ar1[i],ar2[j])<=dis)
        {
            i++;
            j++;
            cnt++;
        }
        else if(ar1[i]>ar2[j]){
        j++;

        }
        else
            i++;

        }
        cout<<cnt<<endl;

        /*for(int i=0; i<apt; i++)
            cout<<ar1[i]<<" ";

        cout<<endl;

        for(int i=0; i<flat; i++)
            cout<<ar2[i]<<" ";*/

}

