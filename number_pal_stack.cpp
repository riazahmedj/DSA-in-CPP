#include<iostream>
#include<stdlib.h>
// It's a good practice
using namespace std;
const int size=10;
struct Stack{
int a[size];
int top;
};

void push(Stack * sx, int x)
{
    if(sx->top==size-1) { cout<<"Stack overflow\n"; return ;}
    sx->top=sx->top+1; 
    sx->a[sx->top]=x; 
    //cout<<"pushed succfully\n";
    
}
// pop function

int pop(Stack * sx)
{
    int y;
    if(sx->top==-1) { cout<<"Stack underflow\n"; exit(0);}
    
    y=sx->a[sx->top];
    sx->top=sx->top-1;   
    //cout<<"Item popped\n";
    return y;
}


void display(Stack sx)
{
    int i;
    cout<<"The stack item are\t";
    for(i=sx.top;i>=0;i--)
    cout<<sx.a[i]<<"     ";
    
    cout<<"\n";
}

int main()
{
    int op,x,y; Stack s1; s1.top=-1;
    int n,i,rev=0;
    
    cout<<"Enter any integer(max ten digits)\n";
    cin>>n;
    
    for(i=n;i>0;i=i/10)
    {   x=i%10;
        push(&s1,x);
    }    
    
    int flag=0,m=n;
    while(s1.top!=-1)
    {
        y=m%10; m=m/10;
        if(pop(&s1)!=y)
        {flag=1; break;}
    }
    
    if(flag==0)
    cout<<"Palind";
    else
    cout<<" Not a palind";
    
    
    /*while(1)
    {
        cout<<"1:PUSH\t2:POP\t3:Display\t4:exit\n"; cin>>op;
        switch(op)
        {
            case 1: cout<<"Enter item to be pushed\n"; cin>>x; push(&s1,x); break;
            case 2: y=pop(&s1); cout<<"Item popped is "<<y<<endl; break;
            case 3: display(s1); break; case 4: exit(0);
        }
    }*/
    
}



