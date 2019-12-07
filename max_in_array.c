main()
{
  int i,n,max,array[25];
  printf("Enter array size");
  scanf("%d",&n);
  printf("Enter the element into the array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }
  max=array[0];
  for(i=1;i<n;i++)
  {
    if(array[i]>max)
    {
      max=array[i];
    }
  }

  printf("Maximum element in the array is %d\n",max );

  
}
