#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char* name;
    int age;
    int height;
    int weight;
};

struct Person* Person_create(char* name, int age, int height, int weight) {
    struct Person* who = malloc(sizeof(struct Person));
    assert(who != NULL); // NULL ~ unset or invalid (i.e. null) pointer

    who->name = strdup(name); // sets deep copy of string to attribute
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person* who) {
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person* who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

void aged_Person_print(struct Person who) {
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char* argv[]) {
    // make two people structures
    struct Person* joe = Person_create("Joe Alex", 32, 64, 140);
    struct Person* frank = Person_create("Frank Blank", 20, 72, 180);
    struct Person* viri = Person_create("Viridiana Cadena", 26, 60, 120);

    // display them and their locations in memory
    printf("Joe is at memory location %p:\n", joe);
    Person_print(joe);
    
    printf("Frank is at memory location %p:\n", frank);
    Person_print(frank);

    printf("Viri is at memory location %p:\n", viri);
    Person_print(viri);

    printf("---\n");

    // make everyone age 20 years and display them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    aged_Person_print(*joe);

    frank->age += 20;
    frank->weight += 20;
    aged_Person_print(*frank);

    (*viri).age += 20;
    (*viri).weight -= 10;
    aged_Person_print(*viri);

    // destroy them to clean up
    Person_destroy(joe);
    Person_destroy(frank);
    Person_destroy(viri);

    return 0;
}