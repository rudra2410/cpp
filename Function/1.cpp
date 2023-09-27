#include <iostream>
using namespace std;

int main()
{
   int* pc, c;
   
   c = 22;
   cout<<"Address of c: \n" << c;
   cout<<"Value of c: \n \n" << c;  // 22
   
   pc = &c;
   cout<<"Address of pointer pc: \n" << pc;
   cout<<"Content of pointer pc: \n \n" << *pc; // 22
   
   c = 11;
   cout<<"Address of pointer pc: \n" << pc;
   cout<<"Content of pointer pc: \n \n" << *pc; // 11
   
   *pc = 2;
   cout<<"Address of c: \n" << c;
   cout<<"Value of c: \n \n" << c; // 2
   
   return 0;
}


/* output

Address of c: 2686784
Value of c: 22

Address of pointer pc: 2686784
Content of pointer pc: 22

Address of pointer pc: 2686784
Content of pointer pc: 11

Address of c: 2686784
Value of c: 2 */
