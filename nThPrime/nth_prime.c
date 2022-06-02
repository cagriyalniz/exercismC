/*
Given a number n, determine what the nth prime is.

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

If your language provides methods in the standard library to deal with prime numbers, 
pretend they don't exist and implement them yourself.
*/

#include "nth_prime.h"

uint32_t isPrime(uint32_t n){
    uint32_t i;
    i = 2;
    while(i <= n/2){
        if(n%i == 0)
            return 0;
      i++;
    }
return 1;
}

uint32_t nth(uint32_t n){
    uint32_t i;
    uint32_t syc;

    i = 3;
    syc = 1;
    if(n == 1)
        return 2;
    while(syc <= n){
        if(isPrime(i) == 1)
            syc++;
        if(syc == n)
            return i;
        i++;
    }
return 0;
    
}