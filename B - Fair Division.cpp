
#include<iostream>
using namespace std;

int main()
{
    int t,n,a;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int s1=0,s2=0;
        int alice=0,bob=0;
        for(int j=0;j<n;j++)
        {
        cin>>a;

        if (a==2)
        {
            s2=s2+2;
        }
        else
        {
            s1=s1+1;
        }
        }
        while (s1>0 || s2>0)
        {
        if (alice<bob)
        {
            if (s2!=0)
            {
            alice=alice+2;
            s2=s2-2;
            }
            else
            {
                alice=alice+1;
                s1=s1-1;}
        }
        else
        {
            if (s2!=0)
            {
            bob=bob+2;
            s2=s2-2;
            }
            else
            {
                bob=bob+1;
                s1=s1-1;
            }

        }

        }
if (alice==bob)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

    }

    }
