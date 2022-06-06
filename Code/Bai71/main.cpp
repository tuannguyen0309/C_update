#include "Student.cpp"

int main()
{
    vector<Student> student;
    student.push_back(Student("NameA", 1, 6, 7));
    student.push_back(Student("NameB", 2, 5, 9));
    student.push_back(Student("NameC", 3, 4, 8));

    Student::getStudentMaxAvg(student);
    for (int i = 0; i < Student::getStudentMaxAvg(student).size(); i++)
    {
        Student::getStudentMaxAvg(student)[i].display();
    }

    Student::getStudentMaxMath(student);
    for (int i = 0; i < Student::getStudentMaxMath(student).size(); i++)
    {
        Student::getStudentMaxMath(student)[i].display();
    }

    Student::getStudentMaxPhysic(student);
    for (int i = 0; i < Student::getStudentMaxPhysic(student).size(); i++)
    {
        Student::getStudentMaxPhysic(student)[i].display();
    }

    Student::getStudentMaxChemistry(student);
    for (int i = 0; i < Student::getStudentMaxChemistry(student).size(); i++)
    {
        Student::getStudentMaxChemistry(student)[i].display();
    }
}