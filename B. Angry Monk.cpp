#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve(){
    int n,k,val;
    vector<int> a;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        cin>>val;
        a.push_back(val);
    }
    sort(a.begin(),a.end(),greater<int>());
    int op=0,i=1;

    while(i<k){
        if(a[i] == 1){
            op++;
        }
        else{
              op = op + (a[i]+(a[i]-1));
        }
        i++;
    }
    cout<<op<<endl;
}




int main(){
int t;
cin>>t;
while(t--){
solve();
}

}
