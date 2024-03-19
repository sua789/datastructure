#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[2][3][4];
	int x, y, z, num = 1;

	for (int x = 0; x < 2; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 4; z++) {
				array[x][y][z] = num;
				printf("array[%d][%d][%d]=%d\n", x, y, z, array[x][y][z]);
				num++;
			}
		}
	}

}
