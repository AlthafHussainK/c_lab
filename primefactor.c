#include <stdio.h>


int main (void)
{
 long long current = 600851475143; 
 int i = 3; // start at 3 for primes... we can do this since subject is ODD
 int high = 0;


 while (1) //infinite loop till hit break
 {
  while (!(current % i)) // while no remainder
  {
   current /= i;  // divide and replace
   high = i; 
  }
  
  if (current == 1)
   break;


  i +=2 ; // skip all even numbers since not prime
 }


 printf ("Highest prime factor of 600851475143 is %d\n", high);
 return 1;
}
