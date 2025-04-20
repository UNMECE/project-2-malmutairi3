#ifndef ART_STUDENT_H
#define ART_STUDENT_H

#include "Student.h"

class Art_Student : public Student {
private:
    
    string art_emphasis;

public:
    
    Art_Student();
 virtual   ~Art_Student();
    void setArtEmphasis (string a);
    void writeToFile (ofstream& out) ;
};

#endif
