#include<bits/stdc++.h>
using namespace std;

int main(){
long x;
cin>>x;
int d=5,nb=0;

while(x>0){
    while(d>x && d>1){
        d--;
    }
    nb+=x / d;
    x= x % d;
}
cout<<nb;
}
