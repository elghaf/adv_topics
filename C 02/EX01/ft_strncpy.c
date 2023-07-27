#include <stdio.h>
#include <string.h>



char *ft_strncpy(char *des, char *src, unsigned int n)
{
    unsigned    int i;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        /* code */
        des[i] = src[i];
        i++;
    }
    while (i < n)
    {
        /* code */
        des[i] = '\0';
        i++;
    }
    return (des);
    
    
}

int main()
{
    char src[] = "Hello";
    char dest[] = "World1";
    char dest1[] = "workd2";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest1, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", strncpy(dest1, src, 5));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", strncpy(dest1, src, 7));
}