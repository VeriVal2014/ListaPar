#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(){
	int option=0, number=0, endLoop=0, error=0;
	
	while(endLoop==0){
	
		scanf("%d", &option);
		
		switch(option){
		case 1: 
			scanf("%d", &number);
			error=insertFront(number); 
			break; 
		
		case 2:	
			scanf("%d", &number);
			error=insertEnd(number); 
			break;
		
		case 3: 
			scanf("%d", &number);
			error=deleteNum(number);
			break;
	
		case 4:	
			error = show(); 
			break;
		
		default:
			endLoop++;
			error=end();
			break;
		}
		
		switch(error){
		case -1:
			fprintf(stderr,"Lista Vazia\n");
			break;
		case -2:
			fprintf(stderr,"sem Memoria\n");
			break;
		default:
			break;
		}				
		
	}

	
	return 0;

}
