#include "main.h"

/**
 * cap_string - check the code
 * @l: char letra
 * Return: Always 0.
 */
char *cap_string(char *l)
{
	int x;
	int i;
	char *ptr;

	if (l[0] >= 97 && l[0] <= 122)
	{
		l[0] = l[0] - 32;
	}

	ptr = l;

	while (*ptr != '\0')
		ptr++;
	x = ptr - l;
	for (i = 0; i <= x; i++)
	{
		if (l[i] >= 97 && l[i] <= 122)
		{
			i--;
			if (l[i] == ' ' ||  l[i] == 9 || l[i] == '\n' || l[i] == ',' || l[i] == '.')
			{
				i++;
				l[i] = l[i] - 32;
				i--;
			}
			else if  (l[i] == '?' || l[i] == 34 || l[i] == '{' || l[i] == '}')
			{
				i++;
				l[i] = l[i] - 32;
				i--;
			}
			i++;
		}
	}
	return (l);
}
