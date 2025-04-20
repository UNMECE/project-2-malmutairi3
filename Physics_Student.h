#ifndef PHYSICS_STUDENT_H
#define PHYSICS_STUDENT_H

#include "Student.h"

class Physics_Student : public Student {
private:
    
    string concentration;

public:
    Physics_Student();
 virtual   ~Physics_Student();
    void setConcentration(string c);
     
    void writeToFile(ofstream& out) ;
};

#endif
