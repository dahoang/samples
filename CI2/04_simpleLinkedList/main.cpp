//04_simple linked list

#include <iostream>

using namespace std;

//TODO - define a struct Node containing an int and a next pointer


// TODO - write a function that initializes the data for only for the 1st Node
void initNode(struct Node *head,int n){
}

// apending
void addNode(struct Node *head, int n) {
    //TODO - create and initialize a node pointer with n and next as null

    //TODO - create another temporary pointer named cur
    while(cur) {
        //TODO add insertion logic here.
        cur = cur->next;
    }
}

void insertFront(struct Node **head, int n) {
    //TODO - create and initialize new node with n
    newNode->next = //TODO ;
    //TODO assign new head
}

struct Node *searchNode(struct Node *head, int n) {
    //TODO define a new cur pointer and make it point to...

    while(cur) {
        //TODO - search logic here.
        cur = cur->next;
    }
    cout << "No Node " << n << " in list.\n";
}

bool deleteNode(struct Node **head, Node *ptrDel) {
    Node *cur = *head;
    if(ptrDel == *head) {
        *head = cur->next;
        delete ptrDel;
        return true;
    }

    while(cur) {
        if(cur->next == ptrDel) {
            cur->next = ptrDel->next;
            delete ptrDel;
            return true;
        }
        cur = cur->next;
    }
    return false;
}



void deleteLinkedList(struct Node **node)
{
    struct Node *tmpNode;
    while(*node) {
        tmpNode = *node;
        *node = tmpNode->next;
        delete tmpNode;
    }
}

void display(struct Node *head) {
    //TODO create a pointer to head

    while(list) {
        //TODO displat logic here.
    }
    cout << endl;
    cout << endl;
}

int main()
{
    struct Node *newHead;
    struct Node *head = new Node;

    initNode(head,10);
    display(head);

    addNode(head,20);
    display(head);

    addNode(head,30);
    display(head);

    addNode(head,35);
    display(head);

    addNode(head,40);
    display(head);

    insertFront(&head,5);
    display(head);

    /*
    int numDel = 5;
    Node *ptrDelete = searchNode(head,numDel);
    if(deleteNode(&head,ptrDelete))
        cout << "Node "<< numDel << " deleted!\n";
    display(head);







    numDel = 35;
    ptrDelete = searchNode(newHead,numDel);
    if(deleteNode(&newHead,ptrDelete)) {
        cout << "Node "<< numDel << " deleted!\n";
        cout << "The new list after the delete is\n";
        display(newHead);
    }





    cout << endl;
    cout << "Deleting the copied list\n";
    deleteLinkedList(&newHead);
    display(newHead);

    */

    return 0;
}