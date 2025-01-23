#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<math.h>
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int nb=n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        if (n==1){
            cout<<"YES"<<endl;
        }else{
            sort(v.begin(),v.end());
            while(nb>1 && abs(v[0]-v[1])<=1 ){
                    v.erase(v.begin());
                    nb--;
                }
            if (nb==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

            }


        }


    }



