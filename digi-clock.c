main()
{
	int h,m,s,d;  
	while(1)
	{
		for(h=0;h<24;h++)
		{
		for(m=0;m<60;m++)
		 {
			for(s=0;s<60;s++)
			{
				sleep(1);// predefined/system defined functions	
				system("clear"); // system call			
				printf("%d:%d:%d\n",h,m,s);
				
			}
		 }
		}
	}
}


