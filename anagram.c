// -NOTE- it will display nothing in your terminal/shell 
// AFTER USING -> echo $?      - it will display 0 or 1

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int	ft_tolower(int value)
{
	if (value >= 'A' && value <= 'Z')
		return (value = value + 32);
	else
		return (value);
}

int main(int argc, char **argv) 
{
    char str1[101];
    char str2[101];
    int freq1[26] = {0};
    int freq2[26] = {0};
    int i;
    char *tmp;

    memcpy(str1, argv[1], 100);
    memcpy(str2, argv[2], 100);
    str1[100] = '\0';
    str2[100] = '\0';
    tmp = str1;
    if (argc != 3)
        return (1);
    while (*tmp != '\0') 
    {
        freq1[ft_tolower(*tmp) - 'a']++;
        tmp++;
    }
    tmp = str2;
    while (*tmp != '\0') 
    {
        freq2[ft_tolower(*tmp) - 'a']++;
        tmp++;
    }
    i = 0;
    while (i < 26) 
    {
        if (freq1[i] != freq2[i]) 
            return (1); 
        i++;
    }
    return (0);
}
