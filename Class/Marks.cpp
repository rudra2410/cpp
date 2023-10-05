#include <iostream>

using namespace std;

// C++ program to calculate the average marks of two students  :-
/*
class student
{
      public:
      double marks;

      student(double m)
      {
            marks = m;
      }
};

      void average(student s1 ,student s2)
      {
            double average = (s1.marks + s2.marks) / 2;
      

            cout << "Average marks : " << average <<endl;
      }

int main()
{
      student student1(88.45) , student2(82.40);

      average(student1,student2);
      return 0;
}
*/
      //C++ Return Object from a Function :-

class student
{
      public:
      double mark1 ,mark2;
      
};

      student creatstudent()
      {
            student Student;

            Student.mark1 = 90.50;
            Student.mark2 = 80.22;

            
            cout<<"Mark 1 = "<<Student.mark1 << endl;
            cout<<"Mark 2 = "<<Student.mark2 << endl;
            
            return Student;
      }
int main()
{
      student student1;

      student1 = creatstudent();
}