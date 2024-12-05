#include<iostream>
using namespace std;
int main(){
int t,n,k,min_op;
cin>>t;
while(t--){
    cin>>n>>k;

        if (k ==1 ){
            cout << n<<endl;
        }
        else{
                 min_op=0;
                 while(n >0){
                        min_op=min_op+n %k;
                        n=n/k;

                 }
                 cout<<min_op<<endl;
        }
    }


}


