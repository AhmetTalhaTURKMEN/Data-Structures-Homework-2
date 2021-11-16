#include <stdio.h>
#include <stdlib.h>


struct node {
  int data;
  struct node *next;
} *head;


void insert(int num) {//asıl odev linked list uzunlugu bulmak oldugu icin linked liste eleman eklemek icin internetten biraz yardim aldim
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    newNode->next = head;
    head = newNode;
}


int LLLength(struct node *head){
    if (head == NULL)
        return 0;
    int i=1;
    i=i+LLLength(head->next);
    return i;

}

int main() {

    insert(2);
    insert(2);
    insert(2);
    insert(2);
    //insert(2);
    insert(2);
    printf("Bagli listenin uzunlugu: %d", LLLength(head));
    return 0;
}
