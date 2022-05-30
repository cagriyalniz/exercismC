#include "raindrops.h"

char mylittleatoi(int n){
    char a = n + 48;
    return a;
}

int numblen(int n){
    int len = 0;
    while(n > 0){
        n /= 10;
        len++;
    }
return len;
}

char *mybigatoi(int n){
    char *s = (char *)malloc(sizeof(char)*99);
    int i = numblen(n) - 1;
    while(n > 0){
        s[i] = n%10;
        n /= 10;
        i--;
    }
return s;
}

char *convert(char result[], int drops){

    int flag3 = 0;
    int flag5 = 0;
    int flag7 = 0;
    if(drops % 3 == 0){
        flag3 = 1;
    }
    if(drops % 5 == 0){
        flag5 = 1;
    }
    if(drops % 7 == 0){
        flag7 = 1;
    }

    if(flag3 == 1 && flag5 == 0 && flag7 == 0){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'i';
        result[3] = 'n';
        result[4] = 'g';
    }
    else if(flag3 == 0 && flag5 == 1 && flag7 == 0){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'a';
        result[3] = 'n';
        result[4] = 'g';
    }
    else if(flag3 == 0 && flag5 == 0 && flag7 == 1){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'o';
        result[3] = 'n';
        result[4] = 'g';
    }
    else if(flag3 == 1 && flag5 == 1 && flag7 == 0){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'i';
        result[3] = 'n';
        result[4] = 'g';
        result[5] = 'P';
        result[6] = 'l';
        result[7] = 'a';
        result[8] = 'n';
        result[9] = 'g';
        
    }
    else if(flag3 == 1 && flag5 == 0 && flag7 == 1){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'i';
        result[3] = 'n';
        result[4] = 'g';
        result[5] = 'P';
        result[6] = 'l';
        result[7] = 'o';
        result[8] = 'n';
        result[9] = 'g';
        
    }
    else if(flag3 == 0 && flag5 == 1 && flag7 == 1){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'a';
        result[3] = 'n';
        result[4] = 'g';
        result[5] = 'P';
        result[6] = 'l';
        result[7] = 'o';
        result[8] = 'n';
        result[9] = 'g';   
    }
    else if(flag3 == 1 && flag5 == 1 && flag7 == 1){
        result[0] = 'P';
        result[1] = 'l';
        result[2] = 'i';
        result[3] = 'n';
        result[4] = 'g';
        result[5] = 'P';
        result[6] = 'l';
        result[7] = 'a';
        result[8] = 'n';
        result[9] = 'g';
        result[10] = 'P';
        result[11] = 'l';
        result[12] = 'o';
        result[13] = 'n';
        result[14] = 'g';
        
    }
else if(flag3 == 0 && flag5 == 0 && flag7 == 0){
    if(drops <= 9){
        result[0] = mylittleatoi(drops);
        return result;
    }
//    char *a = mybigatoi(drops);
//    result[0] = a[0];
//    result[1] = a[1];
    result[1] = drops%10 + 48;
    drops /= 10;
    result[0] = drops + 48;
}

    return result;
    
}
