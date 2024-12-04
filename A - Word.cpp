#include <iostream>
#include<string.h>
#include <cctype>

using namespace std;

int main()
{
char m[100];
scanf("%s",m);
int i,nbmaj=0,nbmin=0;

for(i=0;i<strlen(m);i++)
{
if ( (int) m[i]>=97 && (int)m[i]<=122   )
{
    nbmin++;
}
else
{
    nbmaj++;
}


}

if (nbmaj==nbmin || nbmin>nbmaj)
{

for (i=0;i<strlen(m);i++)
{
    m[i]=tolower(m[i]);
}

}
else
{
    for (i=0;i<strlen(m);i++)
{
    m[i]=toupper(m[i]);
}

}

printf("%s",m);
}
