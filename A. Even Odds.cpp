#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main(){

long long n,k;
cin>>n>>k;
vector<long long> impair;
vector<long long> pairr;

for(int i=1;i<=n;i++){
    if(i % 2 == 1){
        impair.push_back(i);
    }else{
    pairr.push_back(i);
    }
}


if (k<=impair.size() ){
    cout<<impair[k-1]<<endl;
}else
{
        cout<<pairr[k-impair.size()-1]<<endl;

}
}
