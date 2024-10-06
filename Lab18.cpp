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
double average(Node *head); 

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

void reviews(Node *head) {

    int review = 1; 
    Node *current = head; 

    while (current) {
        cout << "> Review #" << review << ": " << ": " << current->value << ": " << current->comment << endl; 

        current = current->next; 

        review++; 
    }
     
}

double average(Node *head) {

	 int count = 0; 

    double sum = 0.0; 

    Node *current = head; 

	 while (current) {

        sum += current->value; 

        count ++;

        current = current->next; 
    }

    return (count > 0) ? sum / count : 0.0; 
}

int main() {

	 Node *head = nullptr; 

    int choice; 

    cout << "Which linked list method should we use?" << endl << "[1] New nodes are added at the head of the linked list" << endl << 
    "[2] New nodes are added at the tail of the linked list" << endl; 

    cout << "Choice: ";
    cin >> choice; 

    char review2; 
}

