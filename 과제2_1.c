#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[100];
	int idx = 0;

	printf("���ڿ��� �Է��ϼ���: ");
	gets(str);
	printf("\n");

	printf("�Էµ� ���ڿ���\n");
	printf("\"%s\"\n",str);
	printf("�Դϴ�.\n\n");

	while (str[idx] != '\0') {
		idx++;
	}
	printf("�Էµ� ���ڿ��� ����=%d", idx);

	return 0;
}