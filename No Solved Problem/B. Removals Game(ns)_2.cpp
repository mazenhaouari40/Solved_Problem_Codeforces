#include <iostream>
#include <vector>
using namespace std;
int main(){

vector<int> a;
vector<int> b;
vector<int> inverse_b;
int t,n,val,l,r;
cin>>t;

while(t--){
    cin >> n;

    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }

    for(int i=0;i<n;i++){
        cin>>val;
        b.push_back(val);
    }
  l=0;
  r=0;
    for(int i=0;i<n;i++){
    if (a[i] == b[i]){
        l++;
    }
    if (a[i] == b[n-i-1]){
    r++;
    }
    }
    if (l == n || r == n){
        cout<< "Bob"<<endl;
    }
    else{
        cout<< "Alice"<<endl;
    }

}
}
