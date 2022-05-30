#include "square_root.h"

unsigned int square_root(unsigned int nmbr){
   unsigned int i = 1;
    while(i <= nmbr){
        if(i*i == nmbr)
            return i;
        i++;
    }


    return 0;
    
}
