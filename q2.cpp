#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cntmin =0;
    int cntmx =0;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]==0 && arr[i+1]==0)
        {
            cntmin+=0;
            cntmx+=0;
        }
        if(arr[i]==0 && arr[i+1]==1)
        {
            cntmin+=1;
            cntmx+=1;
        }
        if(arr[i]==1 && arr[i+1]==0)
        {
            cntmin+=0;
            cntmx+=1;
        }
        if(arr[i]==1 && arr[i+1]==1)
        {
            cntmx+=2 ;
            cntmin+=1;
        }
    }
    cout<<cntmin<<" "<<cntmx;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

