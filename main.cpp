#include <stdio.h>
#include <stdlib.h>

typedef struct cell
{
	int val;
	struct cell* next;
}CELL;

void Create(CELL* head, int val);

void index(CELL* head);

int main()
{
	int val;
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("\nD‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

		printf("“ü—Í‚·‚é’l: ");

		scanf_s("%d", &val);

		Create(&head, val);

		index(&head);
	}
	return 0;
}

void Create(CELL* head, int val)
{
	CELL* New;
	New = (CELL*)malloc(sizeof(CELL));

	New->val = val;

	New->next = nullptr;

	while (head->next != nullptr)
	{
		head = head->next;
	}
	head->next = New;
}

void index(CELL* head)
{
	while (head->next != nullptr)
	{
		head = head->next;

		printf("%d,", head->val);

	}
}