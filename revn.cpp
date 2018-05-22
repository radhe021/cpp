#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int res=0;
bool flag=false;
if(n<0)
{
	n=-1*n;
	flag=true;
	
}
int pre=0;
while(n!=0)
{
	int x=n%10;
	res=(res*10+x);
	
	if((n-x/10)!=pre)
	{
	return 0;
    }
pre=res;
n=n/10;

if(flag)
{
	res=res*-1;
}
return(flag==true)?-res:res;
}
}
