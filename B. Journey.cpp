#include<bits/stdc++.h>
using namespace std;



void solve(){
long long n,m,q;
long long t[3];
int nbday=0;
cin>>n;

for(int i=0;i<3;i++){
    cin>>t[i];
}

q= n/(t[0]+t[1]+t[2]);
//cout<<"q= "<<q<<endl;
m= n%(t[0]+t[1]+t[2]);

nbday=3*q;

if (m==0){
            cout<<nbday<<endl;

}
else{

    nbday += 1;
    m -= t[0];
    if (m <= 0) {
        cout<<nbday<<endl;
    }else{

    nbday += 1;
    m -= t[1];
    if (m <= 0) {
        cout<<nbday<<endl;
    }else{

    nbday += 1;
    m -= t[2];
    if (m <= 0) {
        cout<<nbday<<endl;
    }

    }

    }


}

}


int main(){
int t;
cin>>t;
while(t--){
    solve();
}
}
