
#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
    long long  n,m,a;
scanf("%llu %llu %llu",&n,&m,&a);

 long long c=ceil(double(n)/double(a))*ceil(double(m)/double(a));
printf("%llu",c);
}
