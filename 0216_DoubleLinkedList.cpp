#include <iostream>
#include <string>
using namespace std;

struct node {
    int noMhs;
    string name;
    node* next;
    node* prev;
}

Node* START = NULL;

void addNode(){
    Node* newNode = new Node();
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs;
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name;

    if (START == NULL || newNode->noMhs <= START->noMhs) {
        
        if(START != NULL && newNode->noMhs == START->noMhs) {
            cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
            

        }
    }
}