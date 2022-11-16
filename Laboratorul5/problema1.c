//
// Created by Eduard Andrei Radu on 09.11.2022.
//

#include <stdio.h>

int nrcif(long n)
{
  if(n == 0)
      return 1;
  int nr = 0;
  while(n)
  {
      n /= 10;
      nr++;
  }
  return nr;
}
int main()
{
    long N;
    scanf("%ld", &N);
    printf("%d", nrcif(N));
	return 0;
}