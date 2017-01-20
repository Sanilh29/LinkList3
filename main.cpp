#include <iostream>
#include <cstring>
#include <iomanip>
#include "Student.h"

using namespace std;

void addStudent(Node* &h);
void deleteStudent(Node* &h);
void printStudent(Node* &h);
void averageGPA(Node* &h);

int main() {
  char command[10];
  bool playing = true;
  while (playing == true){
    cout << "Enter one of the commands listed: add, delete, print, average, or quit." << endl;
    cin >> command;
    Node* head = NULL;
    if (0== strcmp(command, "add")){
      addStudent(Node* &h);
    }
    if (0== strcmp(command, "delete")){
      deleteStudent(Node* &h);
    }
    if (0== strcmp(command, "print")){
      printStudent(Node* &h);
    }
    if (0== strcmp(command, "average")){
      averageGPA(Node* &h);
    }
    if (0== strcmp(command, "quit")){
      playing = false;
    }
  }
}

void addStudent(Node* &h){
  Node* n = new Node;
  Student* s = new Student;
  n.setNext(head);
  n.setStudent(s);
  head = n;
}

void deleteStudent(Node* &h){

}

void printStudent(Node* &h){

}

void averageGPA(Node* &h){

}

