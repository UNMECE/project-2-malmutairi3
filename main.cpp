#include <iostream>
#include <vector>
#include <fstream>
#include "Art_Student.h"
#include "Physics_Student.h"

using namespace std;

 
Student::Student() {
    firstName =  "N/A" ;
    lastName = "N/A";
     gpa = 0.0;
    gradYear = 0;
    
    gradSemester = "N/A";
    enrollYear = 0;
    enrollSemester =  "N/A";
    level = "undergrad";
}



Student::~Student() { }

void Student::setName(string f, string l) 
{ 
    firstName = f; 
    lastName = l; 
}

void Student::setGPA(double g) 
{ 
    gpa = g; 
}

void Student::setGradYear(int y) 
{
 gradYear = y; 
}
void Student::setGradSemester(string s) 
{ 
    gradSemester = s; 
}

void Student::setEnrollYear(int y) 
{ 
    enrollYear = y; 
}

void Student::setEnrollSemester(string s) 
{ 
    enrollSemester  = s ; 
}


void Student::setLevel(string lvl) 
{ 
      level = lvl; 
}

void Student::writeToFile(ofstream& out) 
{
    out << "Name: "  << firstName << " " <<  lastName <<  endl;
     out << "GPA: " << gpa <<  endl ;
    out << "Graduation: " << gradSemester << " " <<  gradYear <<  endl;
    out << "Enrollment: " << enrollSemester << " " << enrollYear << endl;
    
    out << "Level: " << level << endl;
}

 
Art_Student::Art_Student() 
{ 
    art_emphasis = "Art Studio"; 
}
Art_Student::~Art_Student() {}

void Art_Student::setArtEmphasis(string a) 
{ 
    art_emphasis = a; 
}
void Art_Student::writeToFile(ofstream& out) 
{
    out << "Student Type: Art Student" << endl;
    Student::writeToFile(out);
    out << "Art Emphasis: " << art_emphasis << endl << endl;
}



Physics_Student::Physics_Student() 
{ 
    concentration = "Biophysics"; 
}
Physics_Student::~Physics_Student() {}

void Physics_Student::setConcentration(string c) 
{ 
    concentration = c;
}

void Physics_Student::writeToFile(ofstream& out) 
{
    out << "Student Type: Physics Student" << endl;
    Student::writeToFile(out);
    out << "Concentration: " << concentration << endl << endl;
}

int main()
{
    
    vector<Art_Student*> art_students;
    vector<Physics_Student*> physics_students;

     
    Art_Student* a1 = new Art_Student;
    a1->setName("Abdullah", "Almutairi");
    a1->setGPA(3.9);
    a1->setGradYear(2025);
    a1->setGradSemester("Spring");
    a1->setEnrollYear(2021);
    a1->setEnrollSemester("Fall");
    a1->setLevel("undergrad");
    a1->setArtEmphasis("Art Studio");
    art_students.push_back(a1);

    Art_Student* a2 = new Art_Student;
    a2->setName("Salman", "Almutairi");
    a2->setGPA(3.8);
    a2->setGradYear(2026);
    a2->setGradSemester("Spring");
    a2->setEnrollYear(2022);
    a2->setEnrollSemester("Fall");
    a2->setLevel("undergrad");
    a2->setArtEmphasis("Art History");
    art_students.push_back(a2);

    Art_Student* a3 = new Art_Student;
    a3->setName("Zahra", "Fatima");
    a3->setGPA(3.7);
    a3->setGradYear(2027);
    a3->setGradSemester("Spring");
    a3->setEnrollYear(2023);
    a3->setEnrollSemester("Fall");
    a3->setLevel("undergrad");
    a3->setArtEmphasis("Art Education");
    art_students.push_back(a3);

    Art_Student* a4 = new Art_Student;
    a4->setName("Noor", "Jayed");
    a4->setGPA(3.6);
    a4->setGradYear( 2028 );
    a4->setGradSemester( "Spring");
    a4->setEnrollYear(2024);
    a4->setEnrollSemester("fall");
    a4->setLevel("undergrad");
    a4->setArtEmphasis("art studio" );
    art_students.push_back(a4) ; 


    Art_Student* a5 =  new Art_Student;
    a5->setName("Uthman", "Alghareeb");
    
    a5->setGPA(3.5);
    a5->setGradYear(2029);

    a5->setGradSemester("spring");
    a5->setEnrollYear(2025);
    a5->setEnrollSemester("Fall");
    a5->setLevel("undergrad");
    a5->setArtEmphasis("Art history");
    art_students.push_back(a5);

    // Create and assign 5 Physics_Student objects
    Physics_Student* p1 = new Physics_Student;
    p1->setName("Jaisi", "Ghafoor");
    p1->setGPA(3.6);
    p1->setGradYear(2024);
    p1->setGradSemester("wnter");
    p1->setEnrollYear(2020);
    p1->setEnrollSemester("Spring");
    p1->setLevel("grad");
    p1->setConcentration("biophysics");
    physics_students.push_back(p1);

    Physics_Student* p2 = new Physics_Student;
    
    p2->setName("David", "Vance");
    p2->setGPA(3.7);
    
    p2->setGradYear(2025);
    p2->setGradSemester("Winter");
    p2->setEnrollYear(2021);
    p2->setEnrollSemester("Spring");
    p2->setLevel("grad");
    p2->setConcentration("Earth and planetary sciences");
    physics_students.push_back(p2);

    Physics_Student* p3 = new Physics_Student;
    p3->setName("Abdulrahman", "ALnafees");
    p3->setGPA(3.8);
    p3->setGradYear(2026);
    p3->setGradSemester("Winter");
    p3->setEnrollYear(2022);
    p3->setEnrollSemester("Spring");
    p3->setLevel("grad");
    p3->setConcentration("Biophysics");
    physics_students.push_back(p3);

    Physics_Student* p4 = new Physics_Student;
    p4->setName("Sophia", "Davis");
    p4->setGPA(3.9);
    p4->setGradYear(2027);
    p4->setGradSemester("Winter");
    p4->setEnrollYear(2023);
    p4->setEnrollSemester("Spring");
    p4->setLevel("grad");
    p4->setConcentration("Earth and Planetary Sciences");
    physics_students.push_back(p4);

    Physics_Student* p5 = new Physics_Student;
    
    p5->setName("Saba", "Matloob");
    
    p5->setGPA(4.0);
    p5->setGradYear(2028);
    p5->setGradSemester("Winter");
    p5->setEnrollYear(2024);
    p5->setEnrollSemester("Spring");
    p5->setLevel("grad");
    p5->setConcentration("Biophysics");
    
    physics_students.push_back(p5);

    // loops to write to the files
    ofstream outfile("student_info.dat");

    for (int i = 0; i < art_students.size(); i++) {
        art_students[i]->writeToFile(outfile);
    }

    for (int i = 0; i < physics_students.size(); i++) {
        physics_students[i]->writeToFile(outfile);
    }

    outfile.close();

    // clear memory
    for (int i = 0; i < art_students.size(); i++) {
        delete art_students[i];
    }

    for (int i = 0; i < physics_students.size(); i++) {
        delete physics_students[i];
    }

    return 0;
}