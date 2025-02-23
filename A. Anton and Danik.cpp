#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    int nba=0,nbd=0;
    char c;
    for(long i=0;i<n;i++){
        cin>>c;
        if (c == 'A'){
            nba++;
        }else
        {
            nbd++;
        }
    }

    if (nba==nbd){
        cout<<"Friendship"<<endl;
    }else{
        if (nba>nbd){
            cout<<"Anton"<<endl;
        }else{
            cout<<"Danik"<<endl;
        }

    }

}
