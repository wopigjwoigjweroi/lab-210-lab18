#include <iostream>

using namespace std; 

struct Node {

	float value; 
	Node *next;
	string comment; 
};

  // Function Prototypes
void headNode(Node *&head, double rating, const string &comment); 
void tailNode(Node *&head, double rating, const string &comment); 
void reviews(Node *head); 

void headNode(Node *&head, double rating, const string &comment) {

    Node *newNode = new Node; 

    newNode->value = rating; 

    newNode->comment = comment; 

    newNode->next = head; 

    head = newNode; 
}

void tailNode(Node *&head, double rating, const string &comment) {

    Node *newNode = new Node;

    newNode->value = rating; 

    newNode->comment = comment; 

    newNode->next = nullptr; 

    if (!head) {

        head = newNode; 
    } else {

        Node *temp = head; 

        while (temp->next) {
            temp = temp->next; 
        }
            temp->next = newNode; 
    }
}


