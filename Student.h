#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <fstream>
using namespace std;

class Student {
protected:
    string firstName, lastName;
    double gpa;

    int gradYear;
    string gradSemester ;
    int enrollYear;
    string enrollSemester;
    string level;

public:
    Student();
    
    virtual ~Student(); 

    void setName(string f, string l);
    void setGPA(double g);
    void setGradYear(int y);
    void setGradSemester(string s);
    void setEnrollYear(int y);
    void setEnrollSemester(string s);
    void setLevel(string lvl);

    void writeToFile(ofstream& out);  
};

#endif
