#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
void solve(){
    int n;
    cin>>n;
    int a[2][n];
    vector<int> t;
    for (int i=0;i<n;i++){
        cin>>a[0][i];
    }
    for (int i=0;i<n;i++){
        cin>>a[1][i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if (a[0][i]>a[1][i]){
            sum+=a[0][i];
            t.push_back(a[1][i]);
        }
        else
        {
            sum+=a[1][i];
            t.push_back(a[0][i]);
        }
    }
    sort(t.begin(),t.end());
    sum=sum+ t[n-1];
    cout<<sum<<endl;
}

int main(){
int t;
cin>>t;
while (t--){
   solve();
}
}
