#pragma once
#include "Defines.h"

// liste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
using namespace std;

struct nod
{
	int val;
	struct nod *next;
};

void push(int val, nod *head);
void printList(nod *next);
void pushFront(int val, nod **head);
int  popFront(nod **head);
int popBack(nod *head);
int removeByIndex(nod **head, int index);
//======================================================

