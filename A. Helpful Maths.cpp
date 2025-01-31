#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main(){
    string ch,res="";
    cin>>ch;
    int nb1=0,nb2=0,nb3=0;
    for(int i=0;i<ch.length();i++){
        if (ch[i] == '1'){
            nb1++;
        }
        if (ch[i] == '2'){
            nb2++;
        }
                if (ch[i] == '3'){
            nb3++;
        }
    }

    while(nb1>0 || nb2>0 || nb3>0){
        if (nb1>0){
            res=res+"1+";
            nb1--;
        }else{
        if (nb2>0){
            res=res+"2+";
            nb2--;
            }else{
        if (nb3>0){
            res=res+"3+";
            nb3--;
        }
        }
        }
    }
    if (!res.empty()) res.pop_back();

    cout<<res<<endl;
}
