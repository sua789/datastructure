#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, j, k;
	char student[2][3][20];
	for (i = 0; i < 2; i++) {
		printf("학생 %d의 이름: ", i + 1);  //브레이크 포인트
		gets(student[i][0]);
		printf("학생 %d의 학과: ", i + 1);
		gets(student[i][1]);
		printf("학생 %d의 학번: ", i + 1);
		gets(student[i][2]); printf("\n");
	}

	for (i = 0; i < 2; i++) {
		printf("\n\n 학생%d", i + 1);
		for (j = 0; j < 3; j++) {
			printf("\n\t");
			for (k = 0; student[i][j][k] != '\0';k++)  //널 문자가 나올 때까지 출력하기!
				printf("%c", student[i][j][k]);
		}
	}
}