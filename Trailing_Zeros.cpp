#include<iostream>

using namespace std;

int main(){

    long long n;
    cin>>n;
    int con=5;
    int answer=0;
    while(n>=con)
    {
        answer+=(n/con);
        con=con*5;
    }
    cout<<answer;

}
