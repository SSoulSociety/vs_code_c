// This program identifies a set of players using the linked list structure and finds the player
// with the highest score among these players and prints their information on the screen.

#include <stdio.h>

typedef struct
{
    int id;
    char name[20];
    float rating;
    struct Actor *next;
} Actor;

int main()
{
    Actor a5 = {5, "Şener Şen", 78.9, NULL};
    Actor a4 = {4, "Erol Taş", 87.2, &a5};
    Actor a3 = {3, "Nuri Alço", 73.7, &a4};
    Actor a2 = {2, "Kemal Sunal", 92.5, &a3};
    Actor a1 = {1, "Cüneyt Arkin", 75.2, &a2};

    Actor *temp1 = &a1;
    Actor temp2 = a1;

    while (temp1 != NULL)
    {
        if (temp1->rating > temp2.rating)
        { // temp2 is the player with the highest score. If "<" is used instead of ">", the player with the lowest score will be found.
            temp2 = *temp1;
        }
        temp1 = temp1->next;
    }

    printf("%d %s %.1f\n", temp2.id, temp2.name, temp2.rating);
    return 0;
}