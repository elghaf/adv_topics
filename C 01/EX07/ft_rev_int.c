#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
int i ;
int swap;
i = 0;
while (i < (size / 2))
{
    /* code */
    swap = tab[i];
    tab [i] = tab[size -1 -i];
    tab[size -1 -i] = swap;
    i++;
}

}

int main(){
    int tab[6] = {0,1,2,3,4,5};
    int size = 6;

    ft_rev_int_tab(tab, size);
    print("%d,%d,%d,%d,%d,%d", tab[0],tab[1]...)
}