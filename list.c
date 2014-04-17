#include <stdlib.h>
#include <stdio.h>
#include "list.h"

List list = {.firstNode=NULL, .lastNode=NULL};

int show(){
	Node *nodeShow=list.firstNode;
	if(nodeShow==NULL){
		return -1;
	}
	else{	
		do{

			printf("%d ", nodeShow->element);
		
			nodeShow=nodeShow->next;
		}while(nodeShow!=NULL);//EndWhile
		
		return 0;
	}
}


int insertFront(int num){
	Node *nodeInsert= malloc(sizeof(Node));
	if(!nodeInsert){
		return -2;
	}
	else{
		nodeInsert->element=num;

		if(list.firstNode==NULL){
			nodeInsert->next=NULL;
			list.lastNode=nodeInsert;
			}
		else{		
			nodeInsert->next=list.firstNode;
			}

		list.firstNode=nodeInsert;
		return 0;
	}
	
}

int insertEnd(int num){
	Node *nodeInsert= malloc(sizeof(Node));
	if(!nodeInsert){
		return -2;
	}
	
	else{
		nodeInsert->element=num;
		nodeInsert->next=NULL;
	
		if(list.firstNode==NULL){
			list.firstNode=nodeInsert;
			}
		else{		
			list.lastNode->next=nodeInsert;
			}
		
		list.lastNode=nodeInsert;
		
		return 0;
	}
}//End insertEnd

int deleteNum (int num){
	Node *nodeNow=list.firstNode;
	Node *nodeOld=NULL;
	if(nodeNow==NULL){
		return -1;
	}
	else{
		do{

			if(nodeNow->element==num){
				if (nodeNow==list.firstNode){
					list.firstNode=nodeNow->next;
				}
				else{
					if(nodeNow->next==NULL){
						nodeOld->next=NULL;
					}
					else{
						nodeOld->next=nodeNow->next;	
					}
				}
				unalocc(nodeNow);

			}
			else{
			nodeOld= nodeNow;
			}

			nodeNow=nodeNow->next;
		}while(nodeNow!= NULL);//endWhile
	return 0;
	}
}

int end(){
	Node *nodeDelete=list.firstNode;
	Node *nodeNextDelete=NULL;
	if (nodeDelete==NULL){
		return -1;
	}
	else{
		do{
			nodeNextDelete=nodeDelete->next;
			unalocc(nodeDelete);
			nodeDelete=nodeNextDelete;
		}while(nodeDelete!= NULL);
		return 0;
	}
}

int unalocc (Node* node3){
	free(node3);
}

