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
void addStudent(Node* h, Student* student);
void deleteStudent(Node* current, Node* previous, int deleted);
void printStudent(Node* h);
void averageGPA(Node* h);

int main() {//gets the input for add, quit, delete, and average
  Node* h = new Node(NULL);
  char command[10];
  bool playing = true;
  while (playing == true){
    cout << "Enter one of the commands listed: add, delete, print, average, or quit." << endl;
    cin >> command;
    cin.ignore();
    if (0== strcmp(command, "add")){ //do add method
      addStudent(h, new Student);
    }
    if (0== strcmp(command, "delete")){//do delete method
      int deleted;
      cout << "What's the ID of the person you wish to delete?" << endl;
      cin >> deleted;
      cin.ignore();
      deleteStudent(h, NULL, deleted);
      cout << "Student deleted." << endl;
    }
    if (0== strcmp(command, "print")){//print out the studebts
      printStudent(h->getNext());
    }
    if (0== strcmp(command, "average")){//average student GPa
      averageGPA(h->getNext());
    }
    if (0== strcmp(command, "quit")){//quit program
      playing = false;
    }
  }
}

void addStudent(Node* h, Student* student){//add the students to the link list and sorts them by ID
  if (!h->getNext()){
    h->setNext(new Node(student));
  }
  else if(h->getNext()->getStudent()->getID() > student->getID()){// if the next students ID is greater than you ID
    Node* temp = h->getNext();//set a temp var for next node
    h->setNext(new Node(student));//set the new student as next
    h->getNext()->setNext(temp);//set the temp as the next node after new student
  }
  else{
    addStudent(h->getNext(), student);//keep going through list
  }
}
  /*if(h->getNext() != NULL){
    addStudent(h->getNext());
  } 
  else {
    h->setNext(new Node(new Student));
  }
  }*/
  
void deleteStudent(Node* current, Node * previous, int deleted){//deleting a student with a given ID
  if (current->getStudent() != NULL && current->getStudent()->getID() == deleted){//if inputted ID is equal 
    previous->setNext(current->getNext());//set the previous node to connect with the node 2 spots ahead
    delete current;//delete current
  }
  else if (current->getNext()){//if ID isnt equal
    deleteStudent(current->getNext(), current, deleted);//keep going through list
  }
  else {
    cout << "There is no student with that ID." << endl;
  }
}
/*int deleted;
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
  }*/

void printStudent(Node* h){//prints the students out
  /* for (Node* currentNode = h; currentNode != NULL; currentNode = currentNode->getNext()){//as you go through the link list
    cout << "Name: " << currentNode->getStudent()->getFirst() << " "<< currentNode->getStudent()->getLast() << endl;
    cout << "ID: " << currentNode->getStudent()->getID() << endl;
    cout << "GPA: " << setprecision(2) << fixed << currentNode->getStudent()->getGPA() << endl;
    cout << endl;
  }//print all this out
}*/
  if(!h){
    return;
  }
  //print out all the info
  cout << "Name: " << h->getStudent()->getFirst() << " " << h->getStudent()->getLast() << endl;
  cout << "GPA: " << setprecision(2) << fixed << h->getStudent()->getGPA() << endl;
  cout << "ID: " << h->getStudent()->getID() << endl;
  cout << endl;
  // if next node isnt null, print it
  if (h->getNext()){
    printStudent(h->getNext());
  }
}

void averageGPA(Node* h){//get the average gpa
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

