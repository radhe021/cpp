#prime number efficient method
int prime(int A)
{
if(A<=1)
return 0;
for(int i=2;i<n;i++)
	if(A%i==0)
	return 0;
	
return 1;

	
}