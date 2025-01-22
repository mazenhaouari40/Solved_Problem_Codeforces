#include<iostream>
using namespace std;
#include<vector>
void solve(){
vector<int> v;
int x,mx;
for(int i=0;i<4;i++){
    cin>>x;
    v.push_back(x);
}
int mx1= 1;
//cas 1
int a3 = v[0]+v[1];
if (v[2] == (v[1]+a3)){
mx1++;
}
if (v[3] == (a3+v[2])){
    mx1++;
}
//cas2
int mx2=1;
a3 = v[2] - v[1];
if (a3 == (v[0]+v[1])){
    mx2++;
}
if (v[3] == (a3+v[2])){
    mx2++;
}
mx = (mx1>mx2) ? mx1 : mx2;
//cas3
int mx3=1;
a3= v[3] - v[2];
if (a3== (v[0]+v[1])){
    mx3++;
}
if (v[2] == (v[1]+a3)){
    mx3++;
}
mx= (mx3>mx) ? mx3 : mx;

//cas3



cout<<mx<<endl;
}


int main(){
int t;
cin>>t;


while(t--){
 solve();
}
}
