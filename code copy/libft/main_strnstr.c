#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main()
{
	char *needle;
	char *haystack;

	needle = malloc(10);
	haystack = malloc(20);
	needle = "abc";
	haystack = "ababc";
	printf("echte |%d|\n", strncmp("test", "", 0));
	printf("|%d|\n", ft_strncmp("test", "", 0));
	return (0);
}