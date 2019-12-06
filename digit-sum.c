main()
{
	int r,n,sum=0,x;
	scanf("%d",&n);
	x=n;

	
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r;
	}
	
	printf("sum of the digits in %d is %d \n",x,sum);
}

/*

n=426
 n>0
	r=n%10; 426%10 =6
	n=n/10; 426/10 = 42
	sum=sum+r; sum=0+6=6

42>0
	r=n%10; 42%10=2
	n=n/10; 42/10=4
	sum=sum+r; sum=6+2=8
4>0
	r=n%10; 4%10=4
	n=n/10l 4/10=0
	sum=sum+r; sum=8+4=12
0>0

*/


