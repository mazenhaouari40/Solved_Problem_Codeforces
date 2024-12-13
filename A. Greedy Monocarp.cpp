#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
int t;
cin>>t;
while(t--){
    int n,k,x;
    cin>>n>>k;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end(),greater<int>());
    int s= 0,i=0;
    while(s<k && i<n){
        s=s+a[i];
        i++;
    }
    if (s==k)
    {
         cout<<0<<endl;
    }
    else{
    if (s<k){
          cout<< k-s<<endl;
    }else{

    i--;
    cout<< k-(s-a[i])<<endl;
    }}
}
}
