#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
 int t;
cin>>t;

while(t--){
       int n,x,val;
    cin>>n>>x;
    vector<int> v;
    for(int i=0;i<2*n;i++){
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end(),greater<int>());
    bool test=true;
    for(int i=0;i<n;i++){
            if(v[i]-v[i+n]<x){
                test= false;
                break;
            }
    }
    if (test == true){
      cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

}
