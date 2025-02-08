#include<bits/stdc++.h>
using namespace std;
#include<vector>
#include<algorithm>

typedef struct{
int val;
int ind;
}enr;


bool cmp(enr a, enr b) {
    return a.val < b.val;
}


void solve(){
    int n,m,y;
    cin>>n>>m;

    vector<vector<int>> k(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>y;
            k[i].push_back(y);
        }
        //sort cow i card's
        sort(k[i].begin(),k[i].end());
    }
    vector<enr> b;
    enr e;
    for(int i=0;i<n;i++){
            e.val=k[i][0];
            e.ind= i;
            b.push_back(e);
        }
    sort(b.begin(), b.end(), cmp);


    int card=0;
    for(int  i=0;i<n;i++){
        if (card == b[i].val ){
            card++;
        }
    }
  //  cout<<"card=  "<<card<<endl;
    for(int j=1;j<m;j++){
        int cow=0;
        while(cow<n){
            if (k[ b[cow].ind ][j] == card ){
                card++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
            cow++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<(b[i].ind)+1<<" " ;
    }
    cout<<endl;

}


int main(){
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

}
/*
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << k[i][j] << " ";
            }
            cout << endl;
        }
*/


 /*

*/
   /* for(int i=0;i<n;i++){
            cout << b[i].val << " indice"<<b[i].ind;
            }
            cout<<endl;*/

/*
    int pile = -1;
    if (n==1){
        int l=0;
        while((l<m-1)&&(k[0][l]<k[0][l+1])){
            l++;
        }
        if (l == m-1 ){
            cout<<1<<endl;
            return;
        }else
                    cout<<-1<<endl;
return;

    }

    for( int j=1;j<m;j++){
            int h=0;
            while( (h<n-1) && (k[ b[h].ind ][j] < k[ b[h+1].ind ][j] )  ){
                    h++;
            }
          //  cout<<"h= "<<h<<endl;
            int mx=INT_MIN;
            int mn=INT_MAX;
            for(int i=0;i<n;i++){
                if (k[i][j]>mx){
                    mx=k[i][j];
                }
                if(k[i][j]<mn){
                    mn = k[i][j];
                }
            }
            //cout<<"max= "<<mx<<endl;

            if ( (pile > mn ) || (h != n-1)){
                cout<< -1<<endl;
                return;
            }else
            {
                pile=mx;
            }

    }

    for(int i=0;i<n;i++){
        cout<<b[i].ind+1<<" " ;
    }
    cout<<endl;
*/
