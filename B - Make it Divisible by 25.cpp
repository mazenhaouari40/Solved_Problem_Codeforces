
#include <iostream>
#include<cstring>
using namespace std;

int step()
{
    string ch;
    cin>>ch;
    int i,j;
    int k=0,k2=ch.size()-1;
for (i=ch.size()-1;i>=0;i--)
{
    k=0;
    for(j=i-1;j>=0;j--)
    {
        if ( (((ch[j]-'0') *10)+(ch[i]-'0') ) % 25 ==0 )
        {
            k=i-j-1+(ch.size()-1-i);
            if (k<=k2)
            {
                k2=k;
            }
        }
    }
}
return k2;
}


int main()
{
    int t,i;
    cin>>t;
for (i=0;i<t;i++)
{
    cout<<step()<<endl;
}
}
