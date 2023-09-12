#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

//redefine Item as appropriate
#define SLEN 20
typedef struct item
{
    char petname[20];
    char petkind[20];
}Item;

#define MAXITEM 10

typedef struct trnode
{
    Item item;
    struct trnode *left; //pointer to left branch?
    struct trnode *right; //pointer to right branch?
}Trnode;

typedef struct tree
{
    Trnode *root;
    int size;
}Tree;

//function prototype

//operation: initialize a tree to empty
//precondition: ptree points to a tree
//postcondition: the tree is initialized to empty
void InitializeTree(Tree *ptree);

//operation: determine if tree is empty
//precondition: ptree points to a tree
//postcondition: function returns true if tree is empty and returns false otherwise
bool TreeIsEmpty(const Tree *ptree);

//operation: determine if tree is full
//precondition: ptree point to tree
//postcondition: function returns true if tree is full and returns false otherwise
bool TreeIsFull(const Tree *ptree);

//operation: determine number of items in tree
//precondition: ptree points to a tree
//postcondition: function return number of items in tree
int TreeItemCount(const Tree *ptree);

//operation: add an item to a tree
//precondition: pi is address of item to be added ptree points to an initialized tree
//postcondition: if possible, function adds item to tree and returns true; otherwise, the function returns false
bool AddItem(const Item *pi, Tree *ptree);

//operation: find an item in a tree
//precondition: pi points to an item
//postcondition: function return true if item is in tree and returns false otherwise
bool InTree(const Item *pi, const Tree *ptree);

//operation: delete an item from a tree
//precondition: pi is address of item to be deleted ptree points to an initialized tree
//postcondition: if possible, function deleted item from tree and returns ture; otherwise the function returns false;
bool DeleteItem(const Item *pi, Tree *ptree);

//operation: apply a function to each item in the tree
//precondition: ptree points to a tree / pfun points to a function that takes an Item argument and has no return value
//postcondition: the function pointed to by pfun is executed once for each item in tree
void Traverse(const Tree *ptree, void (* pfun)(Item item));

//operation: delete everything from a tree
//precondition: ptree points to an initialized tree
//postcondition: tree is empty
void DeleteAll(Tree *ptree);

#endif