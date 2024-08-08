// WAP to show difference between Structure and Union

#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

union Data {
    int i;
    float f;
    char str[50];
};

int main() {
   
    struct Person person1;
    strcpy(person1.name, "vasu");
    person1.age = 30;
    person1.height = 5.5;

    union Data data1;
    data1.i = 10; 
    printf("Union  integer: %d\n", data1.i);
    
    data1.f = 220.5; 
    printf("Union  float: %f\n", data1.f);
    
    strcpy(data1.str, "Hello, World!"); 
    printf("Union  string: %s\n", data1.str);

    printf("Structure person1:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f\n", person1.height);

    printf("\nUnion data1 :\n");
    printf("Integer: %d\n", data1.i); 
    printf("Float: %f\n", data1.f); 
    printf("String: %s\n", data1.str); 

}

