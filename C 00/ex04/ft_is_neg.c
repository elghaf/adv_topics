#include <unistd.h>

void print(char c){
    write(1, &c, 1);
}

void ft_is_negative(int n){
    if(n  < 0){
        print('N');
    }
    else{
        print('P');
    }
}