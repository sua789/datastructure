#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("�л� %d�� �̸�: ", i + 1);  //�극��ũ ����Ʈ
		gets(student[i][0]);
		printf("�л� %d�� �а�: ", i + 1);
		gets(student[i][1]);
		printf("�л� %d�� �й�: ", i + 1);
		gets(student[i][2]); printf("\n");
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n �л�%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0';k++)  //�� ���ڰ� ���� ������ ����ϱ�!
				printf("%c", student[i][j][k]);
		}
	}
}