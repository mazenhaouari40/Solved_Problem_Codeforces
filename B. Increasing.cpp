#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
int t,n;
long long x;
cin>>t;
while(t--){
   cin>>n;
   vector<long long> v;

   for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
   }
   sort(v.begin(),v.end(),greater<long long>());
    bool test=true;
    int i=0;
    while(test && i<n-1){
        if (v[i] == v[i+1]){
            test= false;
        }
        i++;
                  //  cout<<"i= "<<i<<endl;

    }
    if (test){
       cout<<"YES"<<endl;

    }else
    {
               cout<<"NO"<<endl;

    }



}
}
