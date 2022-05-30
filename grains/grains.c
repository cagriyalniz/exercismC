#include "grains.h"

uint64_t square(uint8_t index){
    long long int totl = 0;
    int sqr = 1;
    long long int gr = 1;
    while(sqr <= index){
        totl = gr;
        sqr++;
        gr= gr*2;
    }

return totl;
}

uint64_t total(void){
    int totl = 0;
    int sqr = 1;
    int gr = 1;
    while(sqr <= 64){
        totl += gr;
        sqr++;
        gr= gr*2;
    }
return totl;
}

