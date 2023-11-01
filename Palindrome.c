#include<stdio.h>
void main()
{
  int n,rem,rev=0;

  printf("enter any number= ");
  scanf("%d",&n);

  // procedure to find the reverse of entered number
  int a=n;
  while(a>0)
  {
    rem=a%10;
    rev=rev*10+ rem;
    a=a/10;
  }

  // if reverse of number is equal the number then it is called palindrome
  if(n==rev)
    printf("%d is a palindrome",n);
  else
    printf("%d is not a palindrome",n);
}
