#include <stdio.h>

void ft_ultimate_div(int *a, int *b){
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

int main(){
    int x, y;

    y = 15;
    x = 3;

    ft_ultimate_div(&x, &y);
    print("%d ||| %d", y,x);
}