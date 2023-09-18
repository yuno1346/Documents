#ifndef LIST_H_
#define LISH_H_
#include <stdbool.h>

//program-specific declararations

#define TSIZE 45

struct film{
    char title[TSIZE];
    int rating;
};

//general type definitions

typedef struct film Item;

typedef struct node{
    Item item;
    struct node *next;
}Node;

typedef Node *List;

//function prototype

//initialize a list

void InitializeList(List *plist);

bool ListIsEmpty(const List *plist);

//determine if list is full

bool ListIsFull(const List *plist);

//determine number of items in list

unsigned int ListItemCount(const List *plist);

//add item to end of list

bool AddItem(Item item, List *plist);

void Traverse(const List *plist, void (* pfun)(Item item));

void EmptyTheList(List *plist);

#endif