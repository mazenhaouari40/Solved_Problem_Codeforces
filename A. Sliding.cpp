#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
    long long t,n,m,r,c;
    cin >> t;
    long long s,r0,c0,cl,li;
    while(t--){
    //test cases
    cin>>n>>m>>r>>c;

    cout<<abs( ((r-n)*m )  +  ((r-n)*(m-1)) + (c-m)  )<<endl;
        }
}
/*
    r0=0;
    c0=0;
    li=r;
    cl=c;
    s =0;
        if (li == n && cl == m){
        cout<< s <<endl;
        }
        while( li<n || cl < m){
            if(cl+1<=m){
                c0= cl+1;
                r0=li; }
            else{
                c0=1;
                r0=li+1;
            }
            s = s + ( abs(r0-li) + abs(c0-cl) );
            li=r0;
            cl=c0;
        }

cout<< s <<endl;*/


