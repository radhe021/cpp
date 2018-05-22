#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			
			if(i!=sqrt(n))
       {
             a.push_back(n/i);       	
	       // a[i]=n/i;
		}
		
		    a.push_back(i);
		}
	}
	int x=a.size();
	//cout<<x;
	sort(a.begin(),a.end());
	//,myobject);
	//sort(a , a+x);
	  
	for(int j=0;j<x;j++)
	{
		cout<<a[j]<<" ";
	}
	return 0;
}
