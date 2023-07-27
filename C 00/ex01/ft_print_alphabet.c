/**
 * create function that print char
 * 
 */

#include <unistd.h>

void print(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabt(void){
    char c = 'a';
    while(c <= 'z'){
        print(a);
        a++;
    }
}