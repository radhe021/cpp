#include<iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std; 
string d2b(int A)
{int r;
    string bin;
    
    if(A==0)
        return "0"; //prev used bin += to_string(0); return bin;

    while(A>0)
    {
        r = A%2;
        //bin += to_string(r); //Or
		 bin.push_back((char)('0' + r));
		 // will also work
    
		A /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
//4#method 2
int  d2B(int A)
{
	string x;
	if(A==0)
	return 0;
	
	while(A>0)
	
	{
	int r;
	r=A%2;
	x.push_back('r');
   }
   A=A/2;
   cout<<x;
   string y;
   for(int i=x.length();i>=0;i++)
   {
   	y.push_back(x[i]);
   }
   int z = stoi(y);
   return z;
   
}




int main ()
{
    int num, bin;
    cout << "Enter the number : ";
    cin >> num;
    cout << "The binary equivalent of " << num << " is ";
    cout<<d2b(num);
    return 0;
}
