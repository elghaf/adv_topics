#include <stdio.h>

/*it take the content of the address*/
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