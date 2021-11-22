#include <bits/stdc++.h>

#define Objects " \n\n Objects are the basic unit of OOP. They are instances of class, which have data members and uses various member functions to perform tasks. \n\n A class provides the blueprints for objects, so basically an object is created from a class. We declare objects of a class with exactly the same sort of \ndeclaration that we declare variables of basic types. Following statements \ndeclare two objects of class Box: \n\n Box Box1;          // Declare Box1 of type Box \n\n Box Box2;          // Declare Box2 of type Box \n\n  "
#define Classes " \n\n It is similar to structures in C language. Class can also be defined as user \ndefined data type but it also contains functions in it. So, class is basically a\n blueprint for object. It declare & defines what data variables the object will\n have and what operations can be performed on the class's object. \n\n A class definition starts with the keyword class followed by the class name; \nand the class body, enclosed by a pair of curly braces. A class definition must \nbe followed either by a semicolon or a list of declarations. \n\n class Box { \n     public:\n           double length; \n         }; \n\n  "
#define Abstraction " \n\n Abstraction refers to showing only the essential features of the application and hiding the details. In C++, classes provide methods to the outside world to access & use the data variables, but the variables are hidden from direct access. This can be done access specifiers. \n\n Now, if we talk in terms of C++ Programming, C++ classes provides great level of data abstraction. They provide sufficient public methods to the outside world to play with the functionality of the object and to manipulate object data, i.e., state without actually knowing how class has been implemented internally.\n\n "
#define Encapsulation " \n\n It can also be said data binding. Encapsulation is all about binding the data variables and functions together in class. \n\n All C++ programs are composed of the following two fundamental elements: \n\n Program statements (code): This is the part of a program that performs actions and they are called functions. \n\n Program data: The data is the information of the program which affected by the program functions. \n\n Encapsulation is an Object Oriented Programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding. \n\n "
#define Inheritance " \n\n Inheritance is a way to reuse once written code again and again. The class which is inherited is called base calls & the class which inherits is called derived class. So when, a derived class inherits a base class, the derived class can use all the functions which are defined in base class, hence making code reusable. \n\n In C++, we have 5 different types of Inheritance. Namely, \n\n 1.Single Inheritance \n\n 2.Multiple Inheritance \n\n 3.Hierarchical Inheritance \n\n 4.Multilevel Inheritance \n\n 5.Hybrid Inheritance (also known as Virtual Inheritance) \n\n"
#define Polymorphism " \n\n It is a feature, which lets us create functions with same name but different arguments, which will perform differently. That is function with same name, functioning in different way. Or, it also allows us to redefine a function to provide its new definition. \n\n Function Overriding \n\n If we inherit a class into the derived class and provide a definition for one of the base class's function again inside the derived class, then that function is said to be overridden, and this mechanism is called Function Overriding \n\n"
#define Exception_Handling " \n\n Exception handling is a feature of OOP, to handle unresolved exceptions or errors produced at runtime. \n\n An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero. \n\n Exceptions provide a way to transfer control from one part of a program to another. C++ exception handling is built upon three keywords: try, catch, and throw. \n\n throw: A program throws an exception when a problem shows up. This is done using a throw keyword. \n\n catch: A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception. \n\n try: A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.\n\n  "
#define Variables " \n\n Variable are used in C++, where we need storage for any value, which will change in program. Variable can be declared in multiple ways each with different memory requirements and functioning. Variable is the name of memory location allocated by the compiler depending upon the datatype of the variable. \n\n Declaration and Initialization \n\n Variable must be declared before they are used. Usually it is preferred to declare them at the starting of the program, but in C++ they can be declared in the middle of program too, but must be done before using them. \n\n Example : \n\n int i; \n\n char c; \n\n i = 10; \n\n  "
#define Operators " \n\n Operators are special type of functions, that takes one or more arguments and produces a new value. For example : addition (+), substraction (-), multiplication (*) etc, are all operators. Operators are used to perform various operations on variables and constants. \n\n Types of operators \n\n 1.Assignment Operator \n 2.Mathematical Operators \n 3.Relational Operators \n 4.Logical Operators \n 5.Bitwise Operators \n 6.Shift Operators \n 7.Unary Operators \n 8.Ternary Operator \n 9.Comma Operator \n "
#define Decision_Making " \n\n Decision making is about deciding the order of execution of statements based on certain conditions or repeat a group of statements until certain specified conditions are met. \n\n C++ handles decision-making by supporting the following statements, \n\n if statement \n\n switch statement \n\n conditional operator statement \n\n goto statement \n\n "
#define Looping " \n\n A sequence of statement is executed until a specified condition is true. This sequence of statement to be executed is kept inside the curly braces { } known as loop body. After every execution of loop body, condition is checked, and if it is found to be true the loop body is executed again. When condition check comes out to be false, the loop body will not be executed. \n\n There are 3 type of loops in C++ language \n\n 1.while loop \n\n 2.for loop \n\n 3.do-while loop \n\n "
#define Functions " \n\n Functions are used to provide modularity to a program. Creating an application using function makes it easier to understand, edit, check errors etc. \n\nSyntax of Function \n \n return-type function-name (parameters) \n { \n // function-body \n } \n\n return-type : suggests what the function will return. It can be int, char, some pointer or even a class object. There can be functions which does not return anything, they are mentioned with void. \n\n Function Name : is the name of the function, using the function name it is called. \n\n Parameters : are variables to hold values of arguments passed while function is called. A function may or may not contain parameter list. \n\n "

using namespace std;

int main()

{
system("color F0");
l:
cout<<
"  ______                   _____          _ _                  \n"
" |  ____|                 / ____|        | (_)                  \n"
" | |__   __ _ ___ _   _  | |     ___   __| |_ _ __   __ _       \n"
" |  __| / _` / __| | | | | |    / _ \\ / _` | | '_ \\ / _` |    \n"
" | |___| (_| \\__ \\ |_| | | |___| (_) | (_| | | | | | (_| |     \n"
" |______\\__,_|___/\\__, |  \\_____\\___/ \\__,_|_|_| |_|\\__, |  \n"
"                   __/ |                             __/ |        \n "
"                 |___/                             |___/          \n\n"
"        -----learn basics of programming-----                     "<<endl<<endl<<endl;






cout<<"   Enter 1 to know about Objects "<<endl;
cout<<"   Enter 2 to know about Classes"<<endl;
cout<<"   Enter 3 to know about Abstraction"<<endl;
cout<<"   Enter 4 to know about Encapsulation"<<endl;
cout<<"   Enter 5 to know about Inheritance"<<endl;
cout<<"   Enter 6 to know about Polymorphism"<<endl;
cout<<"   Enter 7 to know about Exception Handling"<<endl;
cout<<"   Enter 8 to know about Variables"<<endl;
cout<<"   Enter 9 to know about Operators"<<endl;
cout<<"   Enter 10 to know about Decision Making"<<endl;
cout<<"   Enter 11 to know about Looping"<<endl;
cout<<"   Enter 12 to know about Functions"<<endl;



int a;
cin>>a;

switch ( a ) { int temp;
case 1:
   cout<<Objects;
   cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 2:
  cout<<Classes;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
  cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 3:
  cout<<Abstraction;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 4:
  cout<<Encapsulation;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 5:
  cout<<Inheritance;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 6:
  cout<<Polymorphism;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 7:
  cout<<Exception_Handling;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 8:
  cout<<Variables;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 9:
  cout<<Operators;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 10:
  cout<<Decision_Making;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 11:
  cout<<Looping;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

case 12:
  cout<<Functions;
  cout<<"Back to main menu? enter 0 for no or 1 for yes >> ";
   cin>>temp;
   if (temp==1)
   	  {goto l;}
  break;

default:

  break;
}


}
