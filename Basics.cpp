//
// Created by Greg Eales on 2019-07-22.
//

#include "Basics.h"

#include <iostream>

using namespace std;

void hello_world()
{
    cout<<"Hello, World!"<<endl;
}

//
void print_types()
{
    cout<<"the type bool is either true or false, 1 or 0"<<endl;
    cout<<"the char type specifies a character like 'A', 'X, or even '9' "<<endl;
    cout<<"the int type specifies an integer and takes up exactly 4 bytes"<<endl;
    cout<<"the double type is a double precision floating point number, taking up 8 bytes"<<endl;
}

void print_constants()
{
    cout<<"const is a promise that a declaration won't change"<<endl;
    cout<<"constexpr is saying it is constant at compile time"<<endl;
}

void get_user_input()
{
    string input;
    cout<<"Whats your first name?"<<endl;
    cin>>input;
    cout<<"Your name is: ";
    cout<<input<<endl;

}

void array_example()
{
    int x[10];
    for(int i=0; i<10; i++)
    {
        x[i]=5;
    }

    for(int i=0; i<10; i++)
    {
        cout<<x[i]<<endl;
    }
}

void pointer_example()
{
    int x = 5;
    int *x_pointer;
    x_pointer = &x;
    cout<<x_pointer<<endl;
}
