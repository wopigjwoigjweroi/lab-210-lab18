#include <iostream>

using namespace std; 

struct Node {

	float value; 
	Node *next;
	string comment; 
};

void headNode(Node *&head, double rating, const string &comment); 
void tailNode(Node *&head, double rating, const string &comment); 
void reviews(Node *head); 
