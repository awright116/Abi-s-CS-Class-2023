#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "friend.h"


void printFriend( Friend myFriend)
{
    printf("Name of friend: %s\n, Age of friend: %d\n, Gender of friend: %s\n, Friend's interests: %s\n, Hight of friend: %d \n",  
    myFriend.name,
    myFriend.age,
    myFriend.gender,
    myFriend.interests,
    myFriend.height
    );
}

Friend myFriend[5];

int main() {
    
    // Friend #1
    strcpy(myFriend[0].name, "Mogli");
    myFriend[0].age = 5;
    strcpy(myFriend[0].gender, "Male");
    strcpy(myFriend[0].interests, "Playing fetch");
    myFriend[0].height = 2.5;

    // Friend #2
    strcpy(myFriend[1].name, "Evan");
    myFriend[1].age = 25;
    strcpy(myFriend[1].gender, "Male");
    strcpy(myFriend[1].interests, "Video games");
    myFriend[1].height = 6.0;

    // Friend #3
    strcpy(myFriend[2].name, "Lexy");
    myFriend[2].age = 27;
    strcpy(myFriend[2].gender, "Female");
    strcpy(myFriend[2].interests, "Yoga");
    myFriend[2].height = 5.5;

    // Friend #4
    strcpy(myFriend[3].name, "Antonio");
    myFriend[3].age = 28;
    strcpy(myFriend[3].gender, "Male");
    strcpy(myFriend[3].interests, "Video games");
    myFriend[3].height = 6.1;

    // Friend #5
    strcpy(myFriend[4].name, "Caylee");
    myFriend[4].age = 25;
    strcpy(myFriend[4].gender, "Female");
    strcpy(myFriend[4].interests, "Playing computer games");
    myFriend[4].height = 5.2;

    FILE* fp = fopen("friend.dat", "wb");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }

    int myFriendsWritten = 0;

    // Friend #1
    myFriendsWritten = fwrite(&myFriend[0], sizeof(myFriend[0]), 1, fp);
    printf("%d friend written\n", myFriendsWritten);


    // Friend #2
    myFriendsWritten = fwrite(&myFriend[1], sizeof(myFriend[1]), 1, fp);
    printf("%d friend written\n", myFriendsWritten);
    
    // Friend #3
    myFriendsWritten = fwrite(&myFriend[2], sizeof(myFriend[2]), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    // Friend #4
    myFriendsWritten = fwrite(&myFriend[3], sizeof(myFriend[3]), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    // Friend #5
    myFriendsWritten = fwrite(&myFriend[4], sizeof(myFriend[4]), 1, fp);
    printf("%d friend written\n", myFriendsWritten);

    fclose(fp);

    return 0;
}