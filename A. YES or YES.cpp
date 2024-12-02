#include<iostream>
using namespace std;
#include<string>

int main(){
string ch;
int t;
cin >> t;
while(t--){
    cin >> ch;
    string chlower = ch;
    for(int i=0;i< chlower.length();i++){
        chlower[i] = tolower(chlower[i]);
    }

    if (chlower == "yes"){
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}




}
