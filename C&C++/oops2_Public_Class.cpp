#include<iostream>
#include<conio.h>

class Room
{
    public:
    double length;
    double breadth;
    double height;
    double calculateArea()
    {
        return length*breadth;
    }
    double calculateVolume()
    {
        return length*breadth*height;
    }
};

int main()
{
    Room room1;
    room1.length=42.5;
    room1.breadth=30.8;
    room1.height=19.2;
    std::cout<<"Area of Room="<<room1.calculateArea()<<"\n";
    std::cout<<"Volume of Room="<<room1.calculateVolume();

    getch();
    return 0;
}