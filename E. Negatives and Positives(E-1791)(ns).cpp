#include<iostream>
using namespace std;
#include<math.h>
#include <limits.h>


void solve(){
    long long n,nbneg=0,s=0,mn= INT_MAX;
    long x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x<0) nbneg++;
        s+=abs(x);
        if (abs(x)<mn){
            mn=abs(x);
        }
    }
    if (nbneg % 2 ==1){
        s= s - mn - mn;
    }
    cout<<s<<endl;

}


int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

}
