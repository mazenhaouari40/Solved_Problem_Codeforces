#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x;
cin>>n;
string msg="EASY";
for(int i=0;i<n;i++){
    cin>>x;
    if (x==1){
        msg="HARD";
    }
}
cout<<msg<<endl;
}
