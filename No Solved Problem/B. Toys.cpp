#include <bits/stdc++.h>
using namespace std;
#include <vector>

int main(){
    string ch1,res="";
    vector<string> t1;
    vector<string> t2;
    for(int i = 0; i < 3; i++){
        cin >> ch1;
        t1.push_back(ch1);
    }

    int i = 0,j,k;
    while(i < 3){
        k=0;
        j=0;
       // cout<<"size="<<t2.size()<<"k="<<k<<endl;
        while (j<t1[i].length() ) {
            cout<<"chaine = "<<t1[i]<<" lettre= "<<t1[i][j]<<endl;

            if (k== t2.size()){
                t2.push_back("");
            }
            //k=0;
            while(t2[k].length()==2 && k<t2.size()){
                k++;
            }
           // cout<<"verif k= "<<k<<endl;

            int nbocc = count(t1[i].begin(), t1[i].end(), t1[i][j]);

          //  if(t2[k].find(t1[i][j]) == string::npos ) {
            if (res.find(t1[i][j]) == string::npos || nbocc > 1){
                t2[k] = t2[k]+t1[i][j];
                //cout<<"t2["<<k<<"]="<<t2[k]<<endl;
                k++;
                res = res + t1[i][j];
                //cout<<"boucle size="<<t2.size()<<"k="<<k<<endl;
            }
            j++;
        }
        i++;
    }



    cout << t2.size()-1<< endl;
   /* for (string& word : t2) {
        sort(word.begin(), word.end());
    }*/
    for(int i = 0; i < t2.size()-1 ; i++){
        cout << t2[i] << endl;
    }

    return 0;
}

/*
        nbocc = count(t2[i].begin(), t2[i].end(), t2[i][j]);
        cout << "nbocc = " << nbocc << endl;

        if (res.find(t2[i][j]) == string::npos || nbocc > 1){
                cout<<"size = "<<t.size()<<endl;
            if(n >= t.size()){
                t.push_back("");
            }
            if (t[n].length() < 2){
                t[n] = t[n] + t2[i][j];
                res = res + t2[i][j];
                cout << "res = " << res << endl;
                j++;
                n++;
            } else {
                n++;
            }
        }

        if (j == t2[i].length()-1){
            i++;
            n = 0;
            j = 0;
        }

*/
