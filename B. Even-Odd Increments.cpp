#include<bits/stdc++.h>
using namespace std;

void solve(){
long long n,q,val,spa=0,simpa=0,nbspa=0,nbimpa=0;
cin>>n>>q;

for(long long i=0;i<n;i++){
    cin>>val;
    if (val %2 ==0){
        spa+=val;
        nbspa++;
    }else{
    simpa+=val;
    nbimpa++;
    }
}

//query
for(long long j=0;j<q;j++){
        int type,xj;
        cin>>type>>xj;

        if (type ==0){
            //pair
            if(xj % 2==0){
                //pair
                spa+=(nbspa*xj);

            }else{
                simpa+=(nbspa*xj)+spa;
                nbimpa+=nbspa;
                spa=0;
                nbspa=0;
                //impair
            }

        }else{
            //1 impair
            if(xj %2 ==0){
                //pair
                simpa+=(nbimpa*xj);
            }else{
                //impair
                spa+=simpa+(nbimpa*xj);
                nbspa+=nbimpa;
                simpa=0;
                nbimpa=0;
            }
        }


    cout<<spa+simpa<<endl;
}

}


int main(){
int t;
cin>>t;

while(t--){
    solve();
}

}

