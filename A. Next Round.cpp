#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,nb=0;
cin>>n>>k;
int t[n];
for(int i=0;i<n;i++){
    cin>>t[i];
    if (t[i] >= t[k-1]){
        nb++;
    }
}
cout<<nb<<endl;

}
