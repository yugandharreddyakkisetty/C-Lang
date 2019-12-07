main()
{
  int array[100],i,n;
  int target;
  int flag=0;
  printf("Enter the number of elements in the array\n");
  scanf("%d",&n);
  printf("Enter the elments into the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }

  printf("Enter the target element\n");
  scanf("%d",&target );

  for(i=0;i<n;i++)
  {
    if(target==array[i])
    {
      flag=1;
    }
  }

if (flag==1)
{
  printf("Given target found in the array\n");
}
else
{
  printf("Given target not found in the array\n");
}

}
