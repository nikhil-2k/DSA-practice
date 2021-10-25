#include<stdio.h>
int main()
{
  char A[]="how are you";
  int word=1;
  for (int i=0;A[i]!='\0';i++)
  {
      if (A[i]==' ' )
        word++;
  }
  printf("%d",word);
  return 0;
}
