/*
* create function that reverse alph
*/

void print(char c){
    return (write(1, &c, 1))
}

void print_reverse(void){
    char c = 'z';
    while (c > 'a')
    {
        /* code */
        print(c);
        c--;
    }
    
}