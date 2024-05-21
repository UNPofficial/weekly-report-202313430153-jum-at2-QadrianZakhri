#include <stdio.h>

// Created By 23343081_Qadrian Zakhri

struct Person {
    int age;
    float weight;
};\

int main() {
    struct Person *personPtr, person1;
    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %f\n", personPtr->weight);

    return 0;
}
