#include <stdio.h>

#define UPTO 200

int main()
{
  int sumevenfib();
  printf ("%d\n", sumevenfib());
}


int sumevenfib(){
  int fibNums[UPTO], i, sum = 0;

  for (i = 0; i < UPTO ; i++){
    if (i == 0)
      fibNums[0] = 1;
    else if (i == 1)
      fibNums[1] = 2;
    else
      fibNums[i] = fibNums[i-2] + fibNums[i-1];
    if (fibNums[i] > 4000000) break;
    if (fibNums[i]%2==0)
      sum += fibNums[i];
  }
  return sum;
}
