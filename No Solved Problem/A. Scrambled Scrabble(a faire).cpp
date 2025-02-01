#include<iostream>
using namespace std;
#include<string.h>

void calculer(int * nbvowel, int * nbconsonant,int * lw,char v){
    while( *nbvowel>=1 && *nbconsonant>=2 ) {
        if (v == '*'){
              *lw+=5;
        }else
        {
            *lw+=3;
        }

        *nbvowel= *nbvowel - 1;
        *nbconsonant= *nbconsonant -2;
        cout<<"nblw  "<<*lw<<endl;
        cout<<*nbvowel<<*nbconsonant<<endl;

    }

}

int main(){
string ch;
cin>>ch;

int pos = 0;
while ((pos = ch.find("NG", pos)) != std::string::npos) {
        ch.replace(pos, 2, "*");
}


int nbvowel=0,nby=0,nbconsonant=0,nbetoi=0;;
for(int i=0;i<ch.size();i++){
    if (ch[i] == 'A' ||ch[i]=='E' || ch[i]=='I' || ch[i]=='O' ){
        nbvowel++;
    }
    else{
        if (ch[i] == 'Y'){
            nby++;
        }else{
            if (ch[i] == '*'){
                nbetoi++;
            }else{
                nbconsonant++;
            }
        }
    }
}
cout<<nbvowel<<nbconsonant<<nbetoi<<nby<<endl;
int lw=0;
int ini_etoile= nbetoi;
calculer(&nbvowel,&nbetoi,&lw,'*');
cout<<nbvowel<<nbconsonant<<nbetoi<<nby<<endl;
calculer(&nbvowel,&nbconsonant,&lw,'n');
lw=lw+nby;
cout<<lw<<endl;
}



