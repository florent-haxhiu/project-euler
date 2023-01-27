#include <stdio.h>


int main() {
  long findPrime = 600851475143;
  int lastFactor, factor;

  if (findPrime % 2 == 0) {
    findPrime = findPrime / 2;
    lastFactor = 2;
    while (findPrime % 2 == 0) {
      findPrime = findPrime / 2;
    }
  } else {
    lastFactor = 1;
  }
  factor = 3;
  while (findPrime > 1) {
    if (findPrime % factor == 0) {
      findPrime = findPrime / factor;
      lastFactor = factor;
      while (findPrime % factor == 0) {
        findPrime = findPrime / factor;
      }
    }
    factor = factor + 2;
  }

  printf("%d\n", lastFactor);
}