int Solution::isPalindrome(int num) {
int n,num,digit,rev=0;
n=num
do
{
	digit=digit%10;
	rev=rev*10+digit;
	num=num/10;
}
while(num!=0)
if(n==rev)
	{
	cout<<"True";
	}
else
{
	cout<<"False";
}
}