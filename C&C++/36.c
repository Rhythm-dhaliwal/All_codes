#include <stdio.h>
#include <string.h>

struct student
{
    char name;
    int id;
    int marks;
    char fav_character;
};

int main()
{

    int id, marks;
    char name[20], fav[20];
    printf("ENTER THE INFORMATION BELOW:\n");
    printf("NAME:-"); //name//
    gets(name);

    printf("ID:-"); //id
    scanf("%d", &id);
    printf("MARKS:-"); //marks
    scanf("%d", &marks);
    printf("FAVROUITE CHARACTER:-"); //character//
    scanf("%d",&fav);

    struct student a, b, c;
    a.id = ("%d", id);
    b.id = ("%d", id);
    c.id = ("%d", id);

    //marks//
    a.marks = ("%d", marks);
    b.marks = ("%d", marks);
    c.marks = ("%d", marks);
    //favrouite character//
    a.fav_character = ("%s", fav);
    b.fav_character = ("%s", fav);
    c.fav_character = ("%s", fav);

    printf("NAME:%s\n", name);
    printf("ID:%d\n", id);
    printf("%s got %d marks\n", name, a.marks);
    printf("%s's favrouite character is:%s",name,fav);
    
    return 0;
}
