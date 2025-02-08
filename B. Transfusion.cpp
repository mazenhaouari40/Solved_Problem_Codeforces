#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,c1=0,c2=0;
    cin>>n;
    long long y,s1=0,s2=0;
    for(int i=0;i<n;i++){
        cin>>y;
        if(i %2 ==0){
            s1+=y;
            c1++;
        }else{
        s2+=y;
        c2++;
        }
    }

    if ((s1*c2) == (s2*c1) && ((s1+s2) % n == 0) ){
        cout<<"YES"<<endl;
    }else{
                cout<<"NO"<<endl;
    }


}
}
