#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* a program to store and manage student records */
  //variable initialization.
  char registrationNumber[18];
    printf("Enter your registrationNumber\n");
    scanf("%s",&registrationNumber);
    printf("RegistrationNumber %s\n",registrationNumber);

    char firstName[8];
    printf("Enter your name\n");
    scanf("%s",&firstName);
    printf("Welcome%s\n",firstName);

    char lastName[5];
    printf("Enter your name\n");
    scanf("%s",&firstName);
    printf("Welcome%s\n",lastName);

    float introductiontoProgramming;
    printf("Enter marks\n");
    scanf("%f",&introductiontoProgramming);
    printf("introductiontoProgramming marks%f\n",introductiontoProgramming);

    float networking;
    printf("Enter marks\n");
    scanf("%f",&networking);
    printf("networking marks%f\n",networking);

    float accounting;
    printf("Enter marks\n");
    scanf("%f",&accounting);
    printf("accounting marks%f\n",accounting);

    float operatingSystem;
    printf("Enter marks\n");
    scanf("%f",&operatingSystem);
    printf("operatingSystem marks%f\n",operatingSystem);

    float computerApplication;
    printf("Enter marks\n");
    scanf("%f",&computerApplication);
    printf("computerApplication marks%f\n",computerApplication);

    return 0;


}
