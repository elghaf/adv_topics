/*
write function that print number

*/

void print(char c)
{
    write(1, &c, 1);
}

void print_number(void)
{
    int number;

    number = 48;
    while (number < 58)
    {
        /* code */
        print(number);
        number++;
    }
    
}