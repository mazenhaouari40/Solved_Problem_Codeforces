#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int t[n];
for(int i=0;i<n;i++){
    cin>>t[i];
}

int i=0,j,nb;
while(i<n-1){
    j=n-1;
    while(i!=j){
        if (t[i]>t[j]){
            nb= t[i]-t[j];
            t[i]-=nb;
            t[j]+=nb;
        }
        j--;
    }

    i++;
}

cout<<endl;
for(int i=0;i<n;i++){
    cout<<t[i]<<" ";
}

}
