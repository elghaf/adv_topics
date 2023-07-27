#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}

int main(){
    int *nbr;
    int number;

    nbr = &number;
    ft_ft(nbr);
    print("%d", number);
}