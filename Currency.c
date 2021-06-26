#include<stdio.h>
#include<stdlib.h>
void count_currency(int *);
int main()
{   int amount;
    printf("Enter the amount for which you want denomantions ");
    scanf("%d",&amount);
    count_currency(&amount);
return 0;
}
void count_currency(int* amount)
{
  int amount1=*amount;
  int notes[10]={2000,500,200,100,50,20,10,5,2,1};
  int count_notes[10]={0};
  if(*amount>25000)
  {
    printf("ERROR");
    exit(0);
  }
  if(*amount<0)
   {
      printf("ERROR");
      exit(0);
   }
  for(int i=0;i<10;i++)
  {
     if(amount>=notes[i])
       {
          count_notes[i]= *amount/ notes[i];
          *amount=*amount-count_notes[i] * notes[i];
       }
  }
  printf("The Amount %d denomantions are\n",amount1);
  for(int i=0;i<10;i++)
  {
    printf("%d : %d\n",notes[i],count_notes[i]);
  }
 
}
