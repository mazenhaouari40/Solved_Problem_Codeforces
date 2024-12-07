#include<iostream>
using namespace std;
#include<string>
typedef struct {
int occ;
int postion_dernier;
} alphabet;

int main(){
int t,n,x;
alphabet alp[27];


string ch;
string distinctlettre="";
cin>>t;
while(t--){
    for(int i=0;i<26;i++){
    alp[i].occ=0;
    alp[i].postion_dernier=0;
}
    cin>>n;
    cin>>ch;
    if(ch.length() == 1){
        cout<<ch<<endl;
    }else
    {

    for(int i=0;i<ch.length();i++){
        alp[ch[i]-97].occ++;
        alp[ch[i]-97].postion_dernier=i;
    if (ch.find(ch[i] == std::string::npos)){
        distinctlettre=distinctlettre+ch[i];
    }

    }

    int mx_occ=0,alp_indice=0;
    for(int i=25;i>=0;i--){
        if (alp[i].occ>mx_occ){
            mx_occ=alp[i].occ;
            alp_indice=alp[i].postion_dernier;
        }
    }
    if (alp_indice+1 > n-1){
        x=n-alp_indice-1;
        while(ch[alp_indice] == ch[x] && x <n){
            x++;
        }

        ch[x]=ch[alp_indice];
    }else
    {
        int apres= alp[  ch[alp_indice+1]-97].occ;
        int avant= alp[ch[alp_indice - (alp[ch[alp_indice]-97 ].occ)] -97].occ;

        if (avant> apres ){
                        ch[alp_indice+1] = ch[alp_indice];
        }
        else
        {
            ch[alp_indice-   (alp[ ch[alp_indice]-97 ].occ) ]=ch[alp_indice];
        }
    }
    cout<<ch<<endl;
    }
}
    }
