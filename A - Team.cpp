#include <iostream>

using namespace std;
int verifier(int k)
{
    if (k==1)
    {
        return 1;
    }
    return 0;
}


int main()
{
int n,i,nb=0,s=0,p,v,t;

scanf("%d",&n);

for (i=0;i<n;i++)
{
    scanf("%d %d %d",&p,&v,&t);
if (verifier(p)+verifier(v)+verifier(t)>=2)
{
    nb=nb+1;
}

}

cout<<nb;

}
