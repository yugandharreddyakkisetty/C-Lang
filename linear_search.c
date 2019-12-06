main()
{
  int height[100],i,n,target;
  printf("Enter the number of students in the class\n");
  scanf("%d",&n);
  printf("Enter the %d students height\n",n);

  for(i=0;i<n;i++)
  {
    scanf("%d",&height[i]);
  }
 printf("Enter the target height\n");
 scanf("%d",&target);

 for(i=0;i<n;i++)
 {
   if(height[i]==target)
      printf("%dth is student has a terget height of %d\n",i,target);
 }

}
