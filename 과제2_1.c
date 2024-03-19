#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100];
	int idx = 0;

	printf("문자열을 입력하세요: ");
	gets(str);
	printf("\n");

	printf("입력된 문자열은\n");
	printf("\"%s\"\n",str);
	printf("입니다.\n\n");

	while (str[idx] != '\0') {
		idx++;
	}
	printf("입력된 문자열의 길이=%d", idx);

	return 0;
}