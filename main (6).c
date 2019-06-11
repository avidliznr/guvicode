#include<stdio.h>

int
isprime (int n)
{
  for (int i = 2; i < (n / 2); i++)
    {
      if (n % i == 0)
	return 0;
    }
  return 1;
}

int
main ()
{
  int n1, n2;
  scanf ("%d %d", &n1, &n2);
  for (int i = n1; i < n2; i++)
    {
      if (isprime (i))
	printf ("%d ", i);
    }
}
