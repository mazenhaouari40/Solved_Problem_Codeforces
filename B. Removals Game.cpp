#include<iostream>
using namespace std;

void read(int * t,int n){
for(int i=0;i<n;i++){
    cin>>t[i];
}

}

void supprimer(int * t, int indice , int  n){
    if(indice == 0){
        int i=0;
        while(i+1<n){
            t[i] = t[i+1];
            i++;
        }
}}

void affiche( int * t, int n)
{
    cout<<"\n"<<endl;
    for (int i=0;i<n;i++){
        cout<<t[i]<<" ";
    }

}

int retourner(int * a, int x,int n){
if (a[0] != x ){
    return 0;
}
else
{
    return n-1;
}}

int choix (int * a,int * b ,int n){
    if (a[0] != b[0] && a[0] != b[n-1] ){
        return 0;
    }
    if (a[n-1] != b[0] && a[n-1] != b[n-1]){
        return n-1;
    }
    return 0;
}


int main(){
int t,n;
cin>>t;
while(t--){

    cin>>n;
    int a[n],b[n],indice_a,ele_b,ele_a;
    read(a,n);
    read(b,n);

    indice_a = choix(a,b,n);
    int ga= n-1;
    while(ga>0){
        //alice
        ele_a= a[indice_a];
        supprimer (a,indice_a,n);
        if (ele_a == b[0]){
                ele_b = b[0];
                supprimer (b,0,n);
        }
        else{
            ele_b=b[n-1];
        }

        n--;
        ga--;
        indice_a = retourner(a,ele_b,n);
    }

    if (a[0]==b[0]){
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Alice"<<endl;
    }


}



}
