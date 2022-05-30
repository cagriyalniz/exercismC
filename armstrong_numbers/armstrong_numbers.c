#include "armstrong_numbers.h"
#include <stdio.h>

int mpow(int nm, int ln){
    int x = nm;
    while(ln - 1 > 0){
        x *= nm;
        ln--;
    }
return (x);
}

bool is_armstrong_number(int nmbr)
{
    int len = 0;
    int x = nmbr;
    int sum = 0;
    while(x > 0){
        x /=10;
        len++;
    }

    x = nmbr;
    while(x > 0){
        sum += mpow(x%10, len);
        x /= 10;
    }

    if (sum == nmbr){
        return true;
    }
    else{
        return false;
    }

}
