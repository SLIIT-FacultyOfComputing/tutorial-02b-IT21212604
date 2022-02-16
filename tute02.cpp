/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>

int main()
{
   double salary, netSalary;  //declare variables
   int etype, otHrs, otRate;   //declare variables
   std::cout<<"Enter Employee Type : ";  //display enter employee type
   std::cin>>etype; //enter employee type from keyboard
   std::cout<<"Enter Salary  : ";  //display enter salary
   std::cin>>salary;  //enter salary from keyboard
   std::cout<<"Enter OtHrs : "; //display enter OtHrs
   std::cin>>otHrs; //enter otHrs from keyboard
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;  //calculate net salary
   std::cout<<"Net Salary is :"<<netSalary<<std::endl;  //display net salary
  
   return 0;
}
