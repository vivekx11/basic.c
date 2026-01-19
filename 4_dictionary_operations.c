#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    char city[50];
};

int main() {
    struct Person person1 = {"John", 25, "New York"};
    struct Person person2 = {"Jane", 30, "London"};
    
    printf("Person 1 Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n\n", person1.city);
    
    printf("Person 2 Details:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("City: %s\n\n", person2.city);
    
    struct Person people[2] = {person1, person2};
    
    printf("All People:\n");
    for (int i = 0; i < 2; i++) {
        printf("%d. %s - Age: %d - City: %s\n", i+1, people[i].name, people[i].age, people[i].city);
    }
    
    return 0;
}
