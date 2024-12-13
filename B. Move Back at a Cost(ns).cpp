#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

bool verifie(vector<int> t,int ele,int deb,int fin){

for(int i=deb;i<fin;i++){
    if (t[i] == ele){
        return true;
    }
}
return false;
}


void solve(){
    int n,x;
    cin>>n;
    vector<int> a;
    for (int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    vector<int> trie_a= a;
    sort(trie_a.begin(),trie_a.end());
    int i=0,nb=0;
    while( nb<n ){
        if (a[i] == trie_a[i]){
            i++;
        }
        else
        {
            if (verifie(a,trie_a[i],i,n)){
                x = a[i]+1;
                a.erase(a.begin()+i);
                a.push_back(x);
            }
        }
        nb++;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}





int main(){
int t;
cin>>t;
while(t--){
    solve();
}
}
