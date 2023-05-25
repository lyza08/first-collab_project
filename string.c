#include <stdio.h>


int main()
{
	char *str;
	int h;

	str = "Habie and Liza Collabo";

	for (h = 0; str[h] != '\0'; h++)
	{
		printf("%c\n", str[h]);
	}

	return (0);
}

