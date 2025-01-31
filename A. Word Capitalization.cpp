#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main(){
string ch;
char l;
cin>>ch;
l=toupper(ch[0]);
ch.erase(0,1);
ch=string(1,toupper(l))+ch;
cout<<ch<<endl;

}
