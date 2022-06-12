#include "binary.h"

int myPow(int base, int pow){
    int res = 1;
    int i = pow;
    if(pow == 0)
        return 1;
    while(i > 0){
        res *= base;
        i--;
    }
return res;
}

int myLen(const char *s){
    int len = 0;
    while(s[len] != '\0')
        len++;
    return len;
}

int charToInt(const char *s){
    int i = myLen(s) - 1;
    int numbPow = 0;
    int res = 0;
    while(i >-1){
        res += (s[i] - 48)*myPow(2, numbPow);
        numbPow++;
        i--;
    } 
return res;
}

int numbCheck(const char *s){
    int i = 0;   
    while(s[i] != '\0'){
        if(s[i] < '0')
            return 0;
        else if(s[i] > '1')
            return 0;
        i++;
    }
return 1;
}

int convert(const char *input){

    if(numbCheck(input) == 0)
        return INVALID;

    int res = 0;
    res = charToInt(input);
    return res;
}
