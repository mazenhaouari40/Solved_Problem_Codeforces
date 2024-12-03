#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>


void solve(){
    int k,vl;
    cin>>k;
    vector <int> t;
    for(int i=0;i<k;i++){
        cin>>vl;
        t.push_back(vl);
    }

    sort(t.begin(),t.end());
    int taille = k-2;
    int d,f=k-1,mil,nb=0;
    for(int i=0;i<k;i++){
    d=i+1;
        while (d<=f ){
            mil= (f+d)/2;
          //  cout<<"mil = "<<mil<<"i= "<<i<<endl;
            int s= t[i]*t[mil];
            if ( s == taille){
                    cout<< t[i] <<" "<< t[mil] << endl;
                    return;
            }else{
                if (s>taille){
                        f=mil-1;
                }
                else{
                d= mil+1;
                }
            }
        nb++;
        }

    }

}


int main(){
int t;
cin>>t;
while(t--){
    solve();
}
}

/*

    while (i<k && test){

        while( ((t[i] * t[j]) < taille) && (j< (k-1)) )
        {
            j++;
        }
        if ( ((t[i] * t[j]) == taille) ){
            n = t[i];
            m = t[j];
            test =false;
        }else
        {
            i++;
            j=i+1;
        }
             //   cout << "i =   "<<i << "j=  "<<j<<endl;

    }
    cout<< n <<" "<< m << endl;*/

