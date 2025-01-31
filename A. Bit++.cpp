#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main(){
    int n,x=0;
    cin>>n;
    string ch;
    while(n--){
        cin>>ch;

        if(ch.find("++")!=string::npos){
            x++;
        }
        else{
            x--;
        }
    }
    cout<<x<<endl;
}
