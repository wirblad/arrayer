#include <stdio.h>
#include <stdbool.h>
#include "uppg1.h"

#define NR_OF_NUMBERS 4
#define FIXED_ARRAY 5


typedef struct{
    float Temp;
    int Date;
} Measurement;

void uppg1(){

    
    int tal[NR_OF_NUMBERS];
    
    for( int i = 0; i < NR_OF_NUMBERS ; i ++){

        printf("Ange tal%d: ", i+1);
        scanf(" %d", &tal[i]);
    }

    int largestNr = tal[0];
    for( int i = 0; i < sizeof(tal) / sizeof(tal[0]); i++ ){

        if(tal[i] > largestNr)
            largestNr = tal[i];  
    }
    printf("The largest number is %d", largestNr);

}

void uppg2(){

    int howManyNumbers;
    printf("How many numbers do u want to enter?: ");
    scanf(" %d", &howManyNumbers);
    
    int tal[howManyNumbers];
    
    for( int i = 0; i < howManyNumbers ; i ++){

        printf("Ange tal%d: ", i+1);
        scanf(" %d", &tal[i]);
    }

    int largestNr = tal[0];
    for( int i = 0; i < sizeof(tal) / sizeof(tal[0]); i++ ){

        if(tal[i] > largestNr)
            largestNr = tal[i];  
    }
    printf("The largest number is %d", largestNr);

}

void uppg3(){

    int tal[FIXED_ARRAY];
    
    for(int i = 0;i < FIXED_ARRAY;i++){

        printf("Ange tal%d: ", i+1);
        scanf(" %d", &tal[i]);
    }

    for(int i = 0;i < sizeof(tal) / sizeof(tal[0]);i++){

        if(tal[i] % 2 == 0)
            tal[i] = 0;  
    }

    for(int i = 0;i < sizeof(tal) / sizeof(tal[0]);i++)
        printf("TAL%d = %d\n", i+1 , tal[i]);

}

void uppg4(){

    int howManyReadings;
    printf("How many readings do u want to enter?: ");
    scanf(" %d", &howManyReadings);
    
    float tempReadings[howManyReadings];

    for( int i = 0; i < howManyReadings ; i ++){

        printf("Enter temp%d: ", i+1);
        scanf(" %f", &tempReadings[i]);
    }

    float lowest = tempReadings[0];
    float highest = tempReadings[0];
    float sum = 0;

    for(int i = 0; i < sizeof(tempReadings) / sizeof(tempReadings[0]); i++ ){

        printf("TEMPREADING %d is: %f\n", i+1, tempReadings[i]);
        if(tempReadings[i] > highest)
            highest = tempReadings[i];
        if(tempReadings[i] < lowest)
            lowest = tempReadings[i];
        sum += tempReadings[i];   
    }

    printf("HIGHEST READING IS: %f\n", highest);
    printf("LOWEST READING IS: %f\n", lowest);
    printf("AVERAGE TEMP IS: %f\n", sum/howManyReadings);

}

void uppg5(){

    int howManyReadings;
    printf("How many readings do u want to enter?: ");
    scanf(" %d", &howManyReadings);
    
    float tempReadings[howManyReadings];
    int   tempDate[howManyReadings];

    for( int i = 0; i < howManyReadings ; i ++){

        printf("Enter temp%d: ", i+1);
        scanf(" %f", &tempReadings[i]);
        printf("Enter date: ");
        scanf(" %d", &tempDate[i]);
    }

    float lowest = tempReadings[0];
    float highest = tempReadings[0];
    float sum = 0;

    for(int i = 0; i < sizeof(tempReadings) / sizeof(tempReadings[0]); i++ ){

        printf("TEMPREADING %d is: %f at date: %d\n", i+1, tempReadings[i], tempDate[i]);
        if(tempReadings[i] > highest)
            highest = tempReadings[i];
        if(tempReadings[i] < lowest)
            lowest = tempReadings[i];
        sum += tempReadings[i];   
    }

    printf("HIGHEST READING IS: %f\n", highest);
    printf("LOWEST READING IS: %f\n", lowest);
    printf("AVERAGE TEMP IS: %f\n", sum/howManyReadings);

}

void uppg5b(){

    int howManyReadings;
    printf("How many readings do u want to enter?: ");
    scanf(" %d", &howManyReadings);
    
    Measurement tempReadings[howManyReadings];
    

    for( int i = 0; i < howManyReadings ; i ++){

        printf("Enter temp%d: ", i+1);
        scanf(" %f", &tempReadings[i].Temp);
        printf("Enter date: ");
        scanf(" %d", &tempReadings[i].Date);
    }

    float lowest = tempReadings[0].Temp;
    float highest = tempReadings[0].Temp;
    float sum = 0;

    for(int i = 0; i < sizeof(tempReadings) / sizeof(tempReadings[0]); i++ ){

        printf("TEMPREADING %d is: %f at date: %d\n", i+1, tempReadings[i].Temp, tempReadings[i].Date);
        if(tempReadings[i].Temp > highest)
            highest = tempReadings[i].Temp;
        if(tempReadings[i].Temp < lowest)
            lowest = tempReadings[i].Temp;
        sum += tempReadings[i].Temp;   
    }

    printf("HIGHEST READING IS: %f\n", highest);
    printf("LOWEST READING IS: %f\n", lowest);
    printf("AVERAGE TEMP IS: %f\n", sum/howManyReadings);

}

