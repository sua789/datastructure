#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "stackS.h"

int main(void) {
	element item;
	printf("\n** ���� ���� ���� **\n");
	printStack();
	push(1); printStack();
	push(2); printStack();
	push(3); printStack();

	item = peek(); printStack();
	printf(" peek => %d", item);

	item = pop(); printStack();
	printf("\t pop => %d", item);

	item = pop(); printStack();
	printf("\t pop => %d", item);

	item = pop(); printStack();
	printf("\t pop => %d", item);

	getchar(); return 0;
}