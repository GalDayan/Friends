#include<stdio.h>
#include<stdlib.h>
char* CapitalsLowers(char *s1)
{
	int i, j, n = 0;
	char *s2 = '\0';
	for (i = 0; *(s1 + i) != '\0'; i++)
		if (*(s1 + i) >= 'A' && *(s1 + i) <= 'Z')
		{
			for (j = 0; *(s1 + j) != '\0'; j++)
				if (*(s1 + i) == *(s1 + j) + 32)
				{
					s2 = (char*)realloc(s2, (n + 1));
					*(s2 + n) = *(s1 + i);
					n++;
				}
		}
	*(s2 + n) = '\0';
	return s2;
}
void PrintString(char *s2)
{
	int i;
	for (i = 0; *(s2 + i) != '\0'; i++)
		putchar(*(s2 + i));
}
void main()
{
	char *s1[20], *s2;
	puts("insert sentence");
	getchar(); // Why do you use it?
	gets(s1);
	s2 = CapitalsLowers(s1);
	PrintString(s2);
	system("pause");
}