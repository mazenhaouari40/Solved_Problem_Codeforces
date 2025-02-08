#include<bits/stdc++.h>
using namespace std;

typedef struct{
int a;
int b;
}passengers;

int main(){
    int n;
    cin>>n;
    passengers t[n];
    int nbpasmax =0,nb=0;
    for(int i=0;i<n;i++){
        cin>>t[i].a;
        cin>>t[i].b;
        nb= nb+(t[i].b - t[i].a);
        if (nb>nbpasmax) {
            nbpasmax = nb;
        }
    }
    cout<<nbpasmax<<endl;

}
