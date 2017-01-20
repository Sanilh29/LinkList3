#include <cstring>
#include <iostream>

using namespace std;

class Student{
 private:
  char* firstname;
  char* lastname;
  float gpa;
  int id;
 public:
  Student();
  ~Student();
  char* getFirst();
  char* getLast();
  float getGPA();
  int getID();
};
