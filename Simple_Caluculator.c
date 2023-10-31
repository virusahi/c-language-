#include<stdio.h>
void main()
{
  int a,b,ch;
  //input two numbers from the user.
  printf("enter first number= ");
  scanf("%d",&a);
  printf("enter second number= ");
  scanf("%d",&b);

  printf("Choose any operator: \n");
  printf("1. Addition \n");
  printf("2. Subtraction \n");
  printf("3. Multiplication \n");
  printf("4. Division \n");

  // choose any one from the above option
  printf("choice= ");
  scanf("%d",&ch);

  // value of  ch should be between 1 to 4
  if(ch>=1 && ch<=4)
  {
    if(ch==1)
      printf("%d",a+b);
    else if(ch==2)
      printf("%d",a-b);
    else if(ch==3)
      printf("%d",a*b);
    else
      printf("%d",a/b);
  }
  else
    printf("wrong choice");
}
