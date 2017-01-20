#include <iostream>
#include <cstring>
#include <iomanip>
#include "Student.h"

using namespace std;

void addStudent();
void deleteStudent();
void printStudent();
void averageGPA();

int main() {
  char command[10];
  bool playing = true;
  while (playing == true){
    cout << "Enter one of the commands listed: add, delete, print, average, or quit." << endl;
    cin >> command;
    if (0== strcmp(command, "add")){

    }
    if (0== strcmp(command, "delete")){

    }
    if (0== strcmp(command, "print")){

    }
    if (0== strcmp(command, "average")){

    }
    if (0== strcmp(command, "quit")){
      playing = false;
    }
  }
}

void addStudent(){

}

void deleteStudent(){

}

void printStudent(){

}

void averageGPA(){

}

