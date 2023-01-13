#include<stdio.h>
#include<stdlib.h>

struct Node{
	int val;	 	
	Node* left;
	Node* right;
}*head=NULL,*tail=NULL;

struct Node* newNode(int val){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    
    temp->val=val;
    temp->right=NULL;
    temp->left=NULL;
    	
    return temp;
}

void pushHead(int val){
    struct Node* temp = newNode(val);
     
     if(head==NULL){
	      head=tail=temp;
	}else{
	    head->right=temp;
	    temp->left=head;
	    head=temp;
	}
}

void pushTail(int val){
    struct Node* temp = newNode(val);
     
    if(head==NULL){
	    head=tail=temp;
	}else{
	    tail->left=temp;
	    temp->right=tail;
	    tail=temp;
	}
}

void popHead(){
	struct Node* curr;
    
    if(head==tail){
        curr=head;
        head;tail=NULL;
        free(curr);
    }else{
    	curr=head;
    	head=head->left;
    	head->right=NULL;
    	free(curr);
    }
}

void popTail(){
    struct Node* curr;
    
    if(head==tail){	
        curr=head;
        head;tail=NULL;
        free(curr);
    }else{
    	curr=tail;
    	tail=tail->right;
    	tail->left=NULL
    	;free(curr);
    }
}
    
void printAll(){
    struct Node* curr=tail;
    
    while(curr){
	    printf("%d",curr->val);
	    curr=curr->right;
	}
}

int main(){			
    
	pushHead(1);
    pushHead(3);
    pushHead(4);
    pushHead(6);
    pushTail(-4);
    pushTail(-6);
    
    popTail();
    popHead();
    popHead();
    // -4 1 3
    printAll();
	
    return 0;
}
