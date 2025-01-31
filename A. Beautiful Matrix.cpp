#include<bits/stdc++.h>
using namespace std;
#include<math.h>
int main(){
int x,res;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>x;
        if (x == 1){
            res= abs((i+1)-3)+abs((j+1)-3);
        }
    }
}
cout<<res<<endl;


}
