//Sanil Hattangadi, contains all the variables and methods for student cpp
#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>
#include <iostream>

using namespace std;


class Student{
 private:
  //has the variables
  char* firstname;
  char* lastname;
  float gpa;
  int id;
 public:
  Student();//creates student
  ~Student();//deletes the student
  //gets the info
  char* getFirst();//get firstname
  char* getLast();//get last name
  float getGPA();//get gpa
  int getID();//get ID
};

#endif
