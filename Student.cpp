#include <cstring>
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){
  firstname = new char[32];
  lastname = new char[32];
  cout << "What's the students first name?" << endl;
  cin.get(firstname, 32);
  cin.ignore();
  cout << "What's the student's last name?" << endl;
  cin.get(lastname, 32);
  cin.ignore();
  cout << "What's the GPA?" << endl;
  cin >> gpa;
  cin.ignore();
  cout << "What's the ID?" << endl;
  cin >> id;
  cin.ignore();
}

Student::~Student(){

}

char* Student::getFirst(){
  return firstname;
}

char* Student::getLast(){
  return lastname;
}

float Student::getGPA(){
  return gpa;
}

int Student::getID(){
  return id;
}
