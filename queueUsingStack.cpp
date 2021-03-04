#include<iostream>
#define N 5
using namespace std;
int s1[5],s2[5];
int top1=-1,top2=-1,count=0;

         void push1(int x)
         {
         	if(top1==N-1)
         	{
         		cout<<"queue is full\n";
			 }
			 else{
			 	top1++;
			 	s1[top1]=x;
			 }
		 }
		 void enqueue(int x)
		 {
		 	push1(x);
		 	count++;
		 }
		 int pop1()
		 {
		 	return s1[top1--];
		 }
		 int pop2(){
		 	return s2[top2--];
		 }
		 void push2(int data)
		 {
		 	if(top1==N-1)
		 	{
		 		cout<<"queue is full\n";
			 }
			 else{
			 	top2++;
			 	s2[top2]=data;
			 }
		 }
		 void dequeue(){
		 	int i,a,b;
		 	if(top1==-1 & top2==-1 )
		 	{
		 		cout<<"queue is empty\n";
			 }
			 else{
			 	for(i=0;i<count;i++)
			 	{
			 		a=pop1();
			 		push2(a);
				 }
				 b=pop2();
				 cout<<"dequeue element is \t"<<b<<endl;
				 count--;
				 
			 	for(i=0;i<count;i++)
			 	{
			 		a=pop2();
			 		push1(a);
				 }
			 }
		 }
		 void display(){
		 	int i;
		 	for(i=0;i<=top1;i++)
		 	{
		 		cout<<s1[i]<<endl;
			 }
		 }
		 int main(){
		 	enqueue(5);
		 	push1(10);
		 	push1(15);
		 	push1(25);
		 	push1(35);
		 	push1(45);
		 	// display();
			 dequeue();
			 	 dequeue();
				  	 dequeue();
					   	 dequeue();
			 		 	display();

		 }





