main()
{
	int x;
	int result;
	scanf("%d",&x);
	if(x>100) 
	{
		result=x+1;
	}
	else if (x>= 50 && x<= 99)
	{
		result=x-1;
	}
	else {
		result=x*x;	
	}
	
	printf("%d\n",result);

}
