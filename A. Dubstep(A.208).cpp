#include <bits/stdc++.h>
using namespace std;


int main(){
string ch,res="";
cin>>ch;
string sub= "WUB";
int pos;

while( ch.find(sub) != string::npos ){
        pos=ch.find(sub);
     ch.erase(pos,3);
          //  cout<<"pos ="<<ch.find(sub)<<endl;

//        res = res + ch.substr(0,ch.find(sub))+" ";
    ch.insert(pos," ");
     }
    cout<<ch<<endl;

}
