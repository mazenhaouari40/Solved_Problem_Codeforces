#include<bits/stdc++.h>
using namespace std;

bool verify(int y){
int t[10];
for(int i=0;i<10;i++){
    t[i]= 0;
}
int a,b,c,d;
a= y / 1000;
b = (y % 1000) / 100;
c = ((y % 1000 ) % 100) / 10;
d =( (((y % 1000 ) % 100) ) % 10 );
t[a]++;
t[b]++;
t[c]++;
t[d]++;
for(int i=0;i<10;i++){
    if (t[i]>=2){
        return false;
    }
}
return true;

}


int main(){

int y;
cin>>y;

y++;
while(!verify(y)){
    y++;
}
cout<<y;
}
