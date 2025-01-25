#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<math.h>
typedef struct{
    long x;
    int i;
}enr;

bool comp(enr a,enr b){
return a.x<b.x;
}

void solve(){
    enr e;
    int n;
    cin>>n;
    long x;
    vector<enr> v;
    vector<int> v2;
    for(int i=0;i<n;i++){
        cin>>e.x;
        e.i= i ;
        v.push_back(e);
        v2.push_back(e.x);
    }
    sort(v.begin(),v.end(),comp);
    /*for(int i=0;i<n;i++){
            cout<<v[i].x<<"|"<<v[i].i<<endl;
    }*/
    int i=0,s2=0,s1=0,j,h1=0,k1=0,h2=0,k2=0,h=0,k=0;
    while(i<n-1 && v[i].x<0){
       //     cout<<"iteration "<<i<<endl;

            if ( (v[i].i) +1< n ) {
                k1= -v[i].x - v2[ (v[i].i)+1 ] ;
                h1 = (v[i].i) + 1;
            }

            if ( (v[i].i) -1 >=0 ) {
                k2= -v[i].x - v2[ (v[i].i)-1 ] ;
                h2 = (v[i].i);
            }

            if (abs(k2)>abs(k1)){
                k=k2;
                h=h2;
            }
            else{
                k=k1;
                h=h1;
            }


             //cout<<"k1= "<<k1<<"k2= "<<k2<<"k= "<<k<<endl;
            j=0;
            s2=s1;
            s1=0;
            while(j<n){
                if (v[j].i != h && v[j].i != (h-1)){
                      // cout<<"j = "<<j<<"s1= "<<s1<<endl;
                    s1=s1+v[j].x;
                }
                j++;
            }
            s1=s1+k;
           // cout<<"s1= "<<s1<<endl;

            if (s1>s2){
                s2=s1;
            }
        i++;
        }
    int s3=0;
       for(int i=0;i<n;i++){
        s3=s3+v[i].x;
       }
    if (s3>s2){
            cout<<s3<<endl;
    }
    else{
        cout<<s2<<endl;
    }


}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
