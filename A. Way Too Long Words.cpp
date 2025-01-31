#include<bits/stdc++.h>
using  namespace std;
#include<string.h>

int main(){
    int n;
    cin>>n;
    string ch;
    while(n--){
    cin>>ch;
    if (ch.length()>10){
        cout<<ch[0]<<ch.length()-2<<ch[ch.length()-1]<<endl;
    }
    else{
        cout<<ch<<endl;
    }
    }

}
