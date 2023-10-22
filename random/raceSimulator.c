#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Structures section
struct Race
{
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName[50];
    char firstPlaceCarColor[20];
};
struct RaceCar
{
    char driverName[50];
    char raceCarColor[20];
    int totalLapTime;
};

// Print functions section
void printIntro()
{
    printf("Welcome to our main event digital race fans! I hope everybody has their snacks because we are about to begin!\n");
};
void printCountDown()
{
    printf("Racers Ready! In..\n");
    for (int i = 5; i > 0; i--)
    {
        printf("%d\n", i);
    }
    printf("Race!\n");
};
void printFirstPlaceAfterLap(struct Race race)
{
    printf("After lap number %d\nFirst Place Is: %s\n%s race car!\n", race.currentLap, race.firstPlaceDriverName, race.firstPlaceCarColor);
};
void printCongratulation(struct Race race)
{
    printf("Let's all congratulate %s in the %s race car for an amazing performance. It truly was a great race and everybody have a goodnight!\n", race.firstPlaceDriverName, race.firstPlaceCarColor);
};

// Logic functions section
int randNumRange1To3()
{
    return (rand() % 3) + 1;
}
int calculateTimeToCompleteLap()
{
    int speed = randNumRange1To3();
    int acceleration = randNumRange1To3();
    int nerves = randNumRange1To3();
    return speed + acceleration + nerves;
};
void updateRaceCar(struct RaceCar *raceCarPointer)
{
    int timeToCompleteLap = calculateTimeToCompleteLap();
    raceCarPointer->totalLapTime += timeToCompleteLap;
};
void updateFirstPlace(struct Race *race, struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    if (raceCar1->totalLapTime <= raceCar2->totalLapTime)
    {
        strcpy(race->firstPlaceDriverName, raceCar1->driverName);
        strcpy(race->firstPlaceCarColor, raceCar1->raceCarColor);
    }
    else
    {
        strcpy(race->firstPlaceDriverName, raceCar2->driverName);
        strcpy(race->firstPlaceCarColor, raceCar2->raceCarColor);
    };
};
void startRace(struct RaceCar *raceCar1, struct RaceCar *raceCar2)
{
    struct Race race = {5, 1, "", ""};
    for (int i = 0; i < race.numberOfLaps; i++)
    {
        printf("\n");
        updateRaceCar(raceCar1);
        updateRaceCar(raceCar2);
        updateFirstPlace(&race, raceCar1, raceCar2);
        printFirstPlaceAfterLap(race);
        race.currentLap += 1;
    };
    printf("\n");
    printCongratulation(race);
}

int main()
{
    srand(time(0));
    printIntro();
    printCountDown();
    struct RaceCar racecar1 = {"Chemi", "Red", 0};
    struct RaceCar racecar2 = {"Caro", "Purple", 0};
    startRace(&racecar1, &racecar2);
};