#include<iostream>
#include<conio.h>
using namespace std;
void sum(int a=10,int b=10,int c=10)
{
    int d;
    d=a+b+c;
    cout<<"sum="<<d;
}

int main()
{
    cout<<"i am in main""\n";
    sum(10,20,30);
    getch();

}