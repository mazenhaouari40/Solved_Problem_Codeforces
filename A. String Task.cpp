#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main(){
string ch,res="",vowel="AEIOUY",k;
cin>>ch;
for(int i=0;i<ch.length();i++){
    if (vowel.find(toupper(ch[i])) == string::npos ){
        k=tolower(ch[i]);
        res=res+"."+k;
    }
}
cout<<res<<endl;

}
