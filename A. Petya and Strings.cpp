#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int solve(){
    string ch1,ch2;
    cin>>ch1>>ch2;
    for(int i=0;i<ch1.length();i++){
        if (toupper(ch2[i])>toupper(ch1[i])){
            return -1;
        }else{
        if (toupper(ch2[i]) < toupper(ch1[i]))
            return 1;
        }
    }
    return 0;
    }

int main(){
int x;


x=solve();
cout<<x<<endl;
}
