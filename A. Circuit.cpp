#include <iostream>
using namespace std;
int main(){
int t,n;
int min_li,max_li,nb0,nb1;
cin>>t;
while(t--){
    cin>>n;
    int a[2*n];
    nb0=0;
    nb1=0;
    for(int i=0;i<(2*n);i++){
        cin>>a[i];
        if (a[i]==1){nb1++;}
        else{nb0++;}
    }

    if ( nb1 % 2 ==0){
        min_li =0;
    }else{min_li=1;}

    if (nb1 == (2*n)){
        max_li=0;
    }else{
        if (nb1>nb0){
                max_li =nb0;}
        else{
        max_li=nb1;
        }
        }

cout << min_li << " " << max_li << endl;

    }


}



