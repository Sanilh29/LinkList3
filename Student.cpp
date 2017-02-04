//Sanil Hattangadi. student.cpp that gets all the info
#include <cstring>
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){//gets the info for the student: first name, last name, gpa, id
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

Student::~Student(){//deletes name
  delete firstname;
  delete lastname;
}

char* Student::getFirst(){//returns first name
  return firstname;
}

char* Student::getLast(){//returns last name
  return lastname;
}

float Student::getGPA(){//returns gpa
  return gpa;
}

int Student::getID(){//returns ID
  return id;
}
