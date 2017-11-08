#pragma once
#include "Defines.h"

typedef struct node node;
struct node
{
	int data;
	int index;

	struct node *prev;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;


bool isEmpty();
int getListLength(void);
void displayForward();
void displayBackward();
void insertFirst(int index, int data);
void insertLast(int index, int data);
struct node *deleteFirst();
struct node *deleteTail();
struct node *deleteByIndex(int index);
bool insertAfter(int index, int newIndex, int data);