#include <stdio.h>

void ft_sort_int(tab, size){
    int i;
    int swap;
    while (size >= 0)
    {
        /* code */
        i = 0;
        while (i < size -1)
        {
            /* code */
            if (tab[i] > tab[i+1])
            {
                swap = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = swap;
            }
            i++;
        }
        size --;
        
    }
    
}

int main(){
    int tab[6] = {7,6,3,4,2,5};
    int size = 6;

    ft_sort_int(tab, size);
    print('%d');
    return 0;
}