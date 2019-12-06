main()
{
	int x;
	int amount;
     	scanf("%d",&x);
	if (x <= 50)
	{
	amount=x*2;
	}
	else if (x>=51 && x<=100)
        {
	 amount=50*2 + (x-50)*3;
	}
	else
	{
	amount=	50*2 + 50*3 + (x-100)*5;
	}
	printf("%d\n",x);
	printf("%d\n",amount);

}
