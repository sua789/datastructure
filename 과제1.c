#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char *str1[4] = {"Korea", "Seoul", "Mapo", "152¹øÁö 2 / 3"};
	printf("%s\n", str1[0]);
	printf("%s\n", str1[1]);
	printf("%s\n", str1[2]);
	printf("%s\n", str1[3]);

	printf("\n\n");

	str1[2] = "Jongno";
	printf("%s\n", str1[0]);
	printf("%s\n", str1[1]);
	printf("%s\n", str1[2]);
	printf("%s\n", str1[3]);
}