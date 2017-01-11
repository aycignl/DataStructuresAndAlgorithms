/* 

Gonul AYCI
Bogazici University, January 2017

*/

#include <stdio.h>
#include <stdlib.h> //for malloc


struct n{

	int x;
	n * next;

};


typedef n node;

void printScreen(node * r){
	while(r != NULL){
		printf("%d\n", r -> x);
		r = r -> next;

	}

}

int main(){

	node * root;
	root = (node *)malloc(sizeof(node));
	root -> x=10;
	root -> next = (node *)malloc(sizeof(node));
	root -> next -> x =20;
	root -> next -> next = (node *)malloc(sizeof(node));
	root -> next -> next -> x=30;
	root -> next -> next -> next = NULL;

	node * iter;
	iter = root;
	printf("%d\n", iter ->x);
	iter = iter -> next;
	printf("%d\n", iter ->x);

	//print elements of nodes into the while loop
	// "iter -> next = NULL" provides that we can add new node 
	iter = root;
	int i = 0;
	while(iter -> next != NULL){
		i++;
		printf("%dinci element: %d\n", i, iter -> x);
		iter = iter -> next;

	}
	//add new node
	for(i=0; i<5; i++){
		iter -> next = (node *)malloc(sizeof(node));
		iter = iter -> next;
		iter -> x = i*10;
		iter -> next = NULL;
	}
	printScreen(root);

}

