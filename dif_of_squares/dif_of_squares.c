#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number){

    unsigned int sum = 0;
    unsigned int i = 1;
    while(i <= number){
        sum += i*i;
        i++;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int sum = 0;
    sum = number*(number + 1)/2;

    return sum*sum;
}

unsigned int difference_of_squares(unsigned int number){
    unsigned int dif = 0;

    dif = square_of_sum(number) - sum_of_squares(number);
    return dif;
    
    
}
