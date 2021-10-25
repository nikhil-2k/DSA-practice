#include<stdio.h>
int main()
{
  char A[]="How are you";
  int i,word=1;
  for (i<0;A[i]!=0;i++)
  {
      if (A[i]=='\0' )
      word++;
  }
  printf("%s",word);
  return 0;
}
