#include<iostream>
using namespace std;

int main(){
int t;
cin>>t;
int n,a,b;
while(t--){
cin>>n>>a>>b;
while (b != 0 && a!=0 && a!=n+1 && b!=n+1 ){
    if (a-b>0 && a-1 != b ){
                    a--;
        }
        else{
        if (a-b<0 && a+1 != b)
        {
                a++;

        }
        else{
                if (a-b>0)
                a++;
            else
            a--;
        }
    }

    if(b-a<0 && b+1 != a){
                b++;
        }else{
            if(b-a>0 && b-1 != a)
            {
                b--;
            }else{
                if (b-a>0)
                    b++;
                else
                b--;

                }
            }
}


if (a!=0 && a!=n+1){
   cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
}
