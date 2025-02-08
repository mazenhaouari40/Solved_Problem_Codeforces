#include<bits/stdc++.h>
using namespace std;

void solve(){
int n,l,r,k;
        cin>>n>>l>>r;
        long long x,s;
        vector<long long> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        k=l-r+1;
        s=0;
        for(int i=0;i<k;i++)
        {
            s+=v[i];
        }
        cout<<s<<endl;
}


int main(){
//int t;
cout<<"hello"<<endl;
//cin>>t;
    /*while(t--){
            solve();

    }*/
}
