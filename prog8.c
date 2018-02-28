 #include<stdio.h>
  int main()
{
  int i = 10, *p ,**p1;
   p = &i;
   p1 = &p;
   **p1 = **p1 + 1;
  printf(" new value of i is %d", i);
}
