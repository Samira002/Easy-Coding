#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\t\t\tWelcome to Easy (C)oding"<<endl;
    cout<<endl<<endl;
l:
    cout<<"Select the number : "<<endl;
    cout<<"Enter 1 to know  the basic structure "<<endl;
    cout<<"Enter 2 to know  how to print my massage "<<endl;
    cout<<"Enter 3 to know  about variables "<<endl;
    cout<<"Enter 4 to know  how to input "<<endl;
    cout<<"Enter 5 to know  how to get the output "<<endl;
    cout<<"Enter 0 to terminate "<<endl<<endl;
    cin>>a;
    if(a==1)
    {
        cout<<"In C programming you have to write basic c programming structure in codeblocks. \nand the structure is given below :"<<endl<<endl;
        cout<<"#include<stdio.h>"<<endl;
        cout<<"int main()"<<endl;
        cout<<"{"<<endl<<endl<<endl;
        cout<<"return 0;"<<endl;
        cout<<"}"<<endl<<endl;
        cout<<"you have to write your program between those second bracket({}) \nand bfore return 0."<<endl<<"and  semicolon(;) is must after every statement."<<endl<<endl;

         goto l  ;
    }
    if(a==2)
    {
        cout<<"to print your massage youu have to write the following code between the brackets({}) of the structure:"<<endl<<endl;
        cout<<"printf(\"your text\");"<<endl<<endl;
        cout<<"if u print your text in next line then use \\n. An example has given below: "<<endl;
        cout<<"printf(\"your text \\n the next line.\");"<<endl<<endl;

        cout<<"\n\nAfter writting the complete code press f9"<<endl<<endl;



        goto l  ;

    }
    if(a==3)
    {
       cout<<"\nYou need variable to store your data. \n you need to declare your data type variable.\n for character you need \"char\", \n for integer you need \"int\" and etc..  "<<endl<<endl;



       goto l  ;
    }

    if(a==0)
    {
        cout<<"\n\n"<<endl;


        return 0;
    }
}
