#include <stdio.h>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

void* malloc(size_t size);

typedef struct cell {

	int val;
	struct cell* next;

}CELL;

void create(CELL* head, int x);
void index(CELL* head);

int main()
{
	int val;
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("’Ç‰Á‚·‚é’l‚ð“ü—Í:");
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);

	}

	return 0;
}


void create(CELL* head, int x) {
	CELL* cell;
	//ƒƒ‚ƒŠ‚ðŠm•Û
	cell = (CELL*)malloc(sizeof(CELL));

	cell->val = x;
	cell->next = nullptr;

	while (head->next != nullptr) {
		head = head->next;
	}
	head->next = cell;
}

void index(CELL* head) {

	printf("[");
	while (head->next != nullptr) {
		head = head->next;
		printf("%d,", head->val);
	}
	printf("]\n");
	printf("-------------------------------\n");
}