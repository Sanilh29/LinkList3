//Sanil Hattangadi
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
  Student();
  ~Student();
  //gets the info
  char* getFirst();
  char* getLast();
  float getGPA();
  int getID();
};
