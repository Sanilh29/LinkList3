#include <iostream>
#include <cstring>
#include <iomanip>
#include "Student.h"
#include "Node.h"

using namespace std;

void addStudent(Node* &h);
void deleteStudent(Node* &h);
void printStudent(Node* &h);
void averageGPA(Node* &h);

int main() {
  char command[10];
  bool playing = true;
  Node* h = NULL;
  while (playing == true){
    cout << "Enter one of the commands listed: add, delete, print, average, or quit." << endl;
    cin >> command;
    cin.ignore();
    if (0== strcmp(command, "add")){
      addStudent(h);
    }
    if (0== strcmp(command, "delete")){
      deleteStudent(h);
    }
    if (0== strcmp(command, "print")){
      printStudent(h);
    }
    if (0== strcmp(command, "average")){
      averageGPA(h);
    }
    if (0== strcmp(command, "quit")){
      playing = false;
    }
  }
}

void addStudent(Node* &h){
  Node* n = new Node;
  Student* s = new Student;
  n->setNext(h);
  n->setStudent(s);
  h = n;
}

void deleteStudent(Node* &h){
  
}

void printStudent(Node* &h){
  for (Node* currentNode = h; currentNode != NULL; currentNode = currentNode->getNext()){
    cout << "Name: " << currentNode->getStudent()->getFirst() << " "<< currentNode->getStudent()->getLast() << endl;
    cout << "ID: " << currentNode->getStudent()->getID() << endl;
    cout << "GPA: " << currentNode->getStudent()->getGPA() << endl;
    cout << endl;
  }
}

void averageGPA(Node* &h){

}

