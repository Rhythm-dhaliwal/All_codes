#include <iostream>
#include <fstream>
using namespace std;
class student_info
{
    char name[20];
    int age;
    char sex;
    float height;
    float weight;

public:
    void read();
    void write();
};
void student_info::read()
{
    cout << "\nEnter name :";
    cin >> name;
    cout << "\nEnter age :";
    cin >> age;
    cout << "Enter gender (F/M) :";
    cin >> sex;
    cout << "Enter height :";
    cin >> height;
    cout << "Enter weight (kilogram) :";
    cin >> weight;
}
void student_info::write()
{
    cout << "\n\n Name:"
         << name << "\nAge:"
         << age << "\nGender:"
         << sex << "\nHeight:"
         << height << "\nWeight:"
         << weight << "\nkg";
}
int main()
{
    int n;
    cout << "Enter how many records are to be stored : ";
    cin >> n;
    student_info s[n];
    ofstream fout;
    fout.open("data.txt");
    for (int i = 0; i < n; i++)
    {
        s[i].read();
        fout.write((char *)&s[i], sizeof(s[i]));
    }
    fout.close();
    ifstream fin;
    cout << "......Displaying The Contents Of The File.....\n"
         << endl;
    fin.open("data.text");
    for (int i = 0; i < n; i++)
    {
        while (fin.read((char *)&s[i], sizeof(s[i])))
        {
            s[i].write();
        }
    }
    fin.close();
    cout << "\n\nRHYTHM DHALIWAL\nIT(SHIFT-2)";
    return 0;
}