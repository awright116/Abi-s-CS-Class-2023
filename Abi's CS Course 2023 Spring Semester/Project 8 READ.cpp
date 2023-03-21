#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "friend.h"

int main() {

    Friend Mogli;
    Friend Evan;
    Friend Lexy;
    Friend Antino;
    Friend Caylee;

    strcpy(Mogli.name, "Mogli");
    Mogli.age = 5;
    strcpy(Mogli.gender, "Male");
    strcpy(Mogli.interests, "Playing fetch");
    Mogli.height = 2.5;

    // Friend #2
    strcpy(Evan.name, "Evan");
    Evan.age = 25;
    strcpy(Evan.gender, "Male");
    strcpy(Evan.interests, "Video games");
    Evan.height = 6.0;

    // Friend #3
    strcpy(Lexy.name, "Lexy");
    Lexy.age = 27;
    strcpy(Lexy.gender, "Female");
    strcpy(Lexy.interests, "Yoga");
    Lexy.height = 5.5;

    // Friend #4
    strcpy(Antino.name, "Antonio");
    Antino.age = 28;
    strcpy(Antino.gender, "Male");
    strcpy(Antino.interests, "Video games");
    Antino.height = 6.1;

    // Friend #5
    strcpy(Caylee.name, "Caylee");
    Caylee.age = 25;
    strcpy(Caylee.gender, "Female");
    strcpy(Caylee.interests, "Playing computer games");
    Caylee.height = 5.2;

    FILE* fp = fopen ("friend.dat", "wb");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    int myFriendsWritten = 0;

    // Friend #1
    myFriendsWritten = fwrite(&Mogli, sizeof(Mogli), 1, fp);
    printf("%d friend written\n", myFriendsWritten);
  

    // Friend #2
    myFriendsWritten = fwrite(&Evan, sizeof(Evan), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    // Friend #3
    myFriendsWritten = fwrite(&Lexy, sizeof(Lexy), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    // Friend #4
    myFriendsWritten = fwrite(&Antino, sizeof(Antino), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    // Friend #5
    myFriendsWritten = fwrite(&Caylee, sizeof(Caylee), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    fclose(fp);

    return 0;
}