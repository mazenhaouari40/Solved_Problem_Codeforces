#include<iostream>
using namespace std;
#include <algorithm> // pour std::max_element


int chercher(int* t, int n) {
    return std::max_element(t, t + n) - t; // Retourne l'indice du maximum
}
bool non_negative(int * t,int n){
    int i=0;
    while(t[i]>0 && i<n){
        i++;
    }
    return i==n;
}
bool egaux(int * t,int n){
    int test=t[0];
    int i=1;
    while(test == t[i] && i<n){
        i++;
    }
return i==n;
}

int main(){
int t,n;
cin>>t;
while(t--){

    cin>>n;
    int a[n],mi_op=0,mx;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(egaux(a,n)){
        cout<<0<<endl;
    }
    else{
        mi_op=0;
        while(non_negative(a,n) && !egaux(a,n)){
        mx = chercher(a,n);
        a[mx] = a[mx] -2;
        if (mx == (n-1)){
        a[(mx % (n-1))]++;
        }
        else
        {
                  a[(mx % (n-1))+1]++;
        }
        mi_op++;

        }

        if(!non_negative(a,n)){
        cout<<-1<<endl;
        }
        else{
                cout<<mi_op<<endl;
            }
        }


}


}
