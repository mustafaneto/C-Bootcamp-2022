#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node *next;
}Node;

Node *createListOfNumber() {
    // Create a linked list
    // Receive numbers as input from the user
    // Every received number should be added to the end of the list
    // The "stopping condition" would be when number is "-1"
    // Return the New List

    Node *head; //Always keep the head of the linked list
    Node *cur_node;

    int num;

    printf("Please enter a number or '-1' to finish \n");
    scanf("%d", &num);

    if (num==-1)
        return NULL;

    //We assume that the first num was something legit number
    head = (Node*)malloc(sizeof(Node));
    cur_node = head;
    cur_node->data = num;

    printf("Please enter a number or '-1' to finish \n");
    scanf("%d", &num);

    while(num!=-1) {
        cur_node->next = (Node*)malloc(sizeof(Node));
        cur_node = cur_node->next;
        cur_node->data = num;
        printf("Please enter a number or '-1' to finish \n");
        scanf("%d", &num);
    }

    cur_node->next = NULL;
    return head;

}

int countNodesInList(Node *head){
    //Receive a list
    //Count how many nodes are there in that list
    //Return this count

    int count = 0;
    Node *temp = head;
    while(temp->next!=NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool isNumberInList(Node *head, int num){
    //Receives a Linked-List and some "int" number
    //Go through all the nodes of the list
    //Return "true" if this number exists in the list
    //Otherwise if it doesn't exist - we should return "false"

    Node *cur_node = head;
    while(cur_node->next!=NULL){
        if(cur_node->data == num) {
            answer = true;
        }
        cur_node = cur_node->next;
    }
    return false;
}

int totalNumberAppearancesInList (Node *head, int num) {
    //Receives a Linked-List and some "int" number
    //Return the number of occurences of this "int" number in the list
    int count = 0;
    Node *cur_node = head;

    while(cur_node->next!=NULL) {
        if(cur_node->data==num) { //Found a corresponding node
            count++;
        }
        cur_node = cur_node->next;
    }
    return count;
}


int main()
{
    return 0;
}
