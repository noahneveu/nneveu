#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *ptr;
	char a[] = " ";
	char d = ' ';
	int i;
	char **array;

	i = 0;
	ptr = malloc(sizeof(char) * 140);
	ptr = "      split       this for   me  !       ";
	array = ft_split(ptr, d);
	while (ptr[i] != '\0')
	{
		printf("|%s| = string in array[%i]\n", array[i],  i);
		i++;
	}
	return (0);
}
