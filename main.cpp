//Sanil Hattangadi
//February 1
//uses a link list to add, delete, print, and average student info
//we get the first and last name, gpa, and ID
#include <iostream>
#include <cstring>
#include <iomanip>
#include "Student.h"
#include "Node.h"

using namespace std;
//methods i use
void addStudent(Node* &h);
void deleteStudent(Node* &h);
void printStudent(Node* &h);
void averageGPA(Node* &h);

int main() {//gets the input for add, quit, delete, and average
  char command[10];
  bool playing = true;
  Node* h = NULL;
  while (playing == true){
    cout << "Enter one of the commands listed: add, delete, print, average, or quit." << endl;
    cin >> command;
    cin.ignore();
    if (0== strcmp(command, "add")){ //do add method
      addStudent(h);
    }
    if (0== strcmp(command, "delete")){//do delete method
      deleteStudent(h);
    }
    if (0== strcmp(command, "print")){//print out the studebts
      printStudent(h);
    }
    if (0== strcmp(command, "average")){//average student GPa
      averageGPA(h);
    }
    if (0== strcmp(command, "quit")){//quit program
      playing = false;
    }
  }
}

void addStudent(Node* &h){//add the students to the link list
  Node* n = new Node; //create a new node
  Student* s = new Student;//create a student
  n->setNext(h);//set the node to the front
  n->setStudent(s);//set the student to the node
  h = n;
}

void deleteStudent(Node* &h){//deleting a student with a given ID
  int deleted;
  cout << "What's the person's ID that you wish to delete?" << endl;
  cin >> deleted;
  Node* previous = NULL;
  Node* n = h;
  Node* temp = NULL;
  if (h->getStudent()->getID() == deleted){//if the head = id
    h = h->getNext();
  }
  while (n != NULL){//getting a seg fault when i delete the last node because the last node doesnt have a next and we cant set the revious node to NULL
    if (n->getStudent()->getID() == deleted){//if the current node = id
      if (previous != NULL){
	previous->setNext(n->getNext());
      }
      n = NULL;
      temp = n;
      delete temp;//delete the node
      break;
      cout << "Student deleted" << endl;
    }
    previous = n;
    n = n->getNext();
  }
}
void printStudent(Node* &h){//prints the students out
  for (Node* currentNode = h; currentNode != NULL; currentNode = currentNode->getNext()){//as you go through the link list
    cout << "Name: " << currentNode->getStudent()->getFirst() << " "<< currentNode->getStudent()->getLast() << endl;
    cout << "ID: " << currentNode->getStudent()->getID() << endl;
    cout << "GPA: " << setprecision(2) << fixed << currentNode->getStudent()->getGPA() << endl;
    cout << endl;
  }//print all this out
}

void averageGPA(Node* &h){//get the average gpa
  int count =0;
  float gpa=0;
  cout << endl;
  for (Node* currentNode = h; currentNode != NULL; currentNode = currentNode->getNext()){//as you go through the link list
    count++;//add 1
    gpa += currentNode->getStudent()->getGPA();//add the gpa of the student to the gpa number
  }
  gpa/=count; //divide the gpa by count
  cout << "Average GPA:" << setprecision(2) << fixed << gpa << endl;
}

