// implementation of stack using array in cpp 
//  time complexity O(1);
#include<iostream>
#include <stdio.h>
using namespace std;
int stack[10], n = 10;
int top = -1;

void push(int data)
{

    if (top >= n - 1)
    {
        cout << "stack overflow\n";
    }
    else
    {
        top++;
        stack[top] = data;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "stack underflow\n";
    }
    else
    {
        top--;
    }
}

void display()
{
      if(top>0){

         while (top > -1)
    {
        cout << stack[top] << "\n";
        top--;
    }  
      }

      else{
          cout<<"stack is empty\n";
      }
   
}

int main()
{

    push(1);
    push(12);
    push(13);
    push(11);
    push(14);
    push(15);
    //  display();
    pop();
    pop();
    display();
}