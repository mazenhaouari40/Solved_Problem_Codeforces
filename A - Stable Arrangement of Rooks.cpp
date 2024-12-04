
#include <iostream>
using namespace std;

void arrangement (int n,int k)
{
 int x=1,y=1;
 int nb=0;
 string ch="";
 for (int i=1;i<=n;i++)
 {
     for (int j=1;j<=n;j++)
     {
         if(x==i && y==j && nb<k)
         {
            ch=ch+"R";
            x+=2;
            y+=2;
            nb++;
          }
         else
         {
             ch=ch+".";
         }
     }
     ch=ch+"\n";
}

if (nb!=k)
{
    cout<<"-1\n";
}
else
{
cout<<ch;
}

}

int main()
{
int t;
cin>>t;
int n,k;
for(int v=0;v<t;v++)
{
cin>>n>>k;
    arrangement(n,k);
}}
