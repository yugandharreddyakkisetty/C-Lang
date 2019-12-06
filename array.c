main()
{
  int marks[10];// marks array is used to store the maks scored by the student
  int i,n;
  printf("Enter the size of the array\n");
  scanf("%d",&n );
  printf("Enter any %d integers\n",n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&marks[i]);
    }


  for(i=0;i<n;i++)
  {
    printf("marks of %dth Student is %d \n",i,marks[i]);
  }

  printf("Marks is stored at %u \n",marks);
  printf("Marks is stored at %u \n",&marks[0]);
}


// marks[6] ; 6 is called index / subscript
