
#include<iostream>
using namespace std;
#include<cmath>


int main(){
int t,n,k,min_op;
cin>>t;
while(t--){
    cin>>n>>k;

        if (k ==1 ){
            cout << n<<endl;
        }
        else{

                if ((n % k ==0) ){
                    cout << 1<<endl;
                }
                else{

                 min_op=0;
                 int x=0;
                 while(pow(k,x) <= n){
                    x++;
                 }
                 x--;
                 int d = pow(k,x);
                 while(n !=0){
                    if (n>=d){
                    n = n - d;
                    min_op++;
                    }
                    else{
                        d=d/k;
                    }

                 }
                 cout<<min_op<<endl;
        }
    }


}
}


