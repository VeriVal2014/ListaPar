#ifndef LIST_H
#define LIST_H

typedef struct node Node;
typedef struct list List; 

struct node{
	int element;
	Node *next;
};

struct 	list{
	Node *firstNode;
	Node *lastNode;
};

extern int insertFront (int num);
extern int insertEnd (int num);
extern int deleteNum (int num);

#endif
 
