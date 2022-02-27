// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  for (i = 2; i*i <= (value); i++) {
    if (value % i == 0){
      return false;
    }
  }
  return true;
}


uint64_t nPrime(uint64_t n) {
  int count = 0;
  uint64_t i = 1;
  while (count != n){
    i++;
    if(checkPrime(i)){
      count++;
    }
  }
  return  i;
}


uint64_t nextPrime(uint64_t value) {
  int c = value;
  while (true) {
    c++;
    if (checkPrime(c))
      return c;
  }
}


uint64_t sumPrime(uint64_t hbound) {
    int sum = 0;
  for (int i = 0; i < hbound; i++) {
    if (checkPrime(i)) {
      sum += i;
    }
  }
  return sum;
}
