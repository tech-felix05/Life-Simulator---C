#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#include "costanti.h"
#include "player.h"
#include "funzioni.h"

int main()
{

    struct Giocatore self[1];

    struct Nation world[] = {
        {"India", 2.9},
        {"Cina", 2.8},
        {"Nigeria", 2.5},
        {"Pakistan", 2.2},
        {"Stati Uniti", 2.0},
        {"Brasile", 2.8},
        {"Egitto", 1.7},
        {"Russia", 1.9},
        {"Giappone", 2.4},
        {"Germania", 2.3},
        {"Francia", 2.2},
        {"Marocco", 1.2},
        {"Italia", 2.5}};

    srand(time(NULL));
    int alive = 1, addiction = 0, loverCount = 0, sonsCount = 0, fling = 0, uniCount = 0, yearCurrent = 0, ludopatic = 0;
    int servedYears = 0;
    int work = 0;
    int diseases = 0;
    int prision = 0;
    int yearsInPrision = 0;
    int criminal = 0;
    int criminalRating = 0;
    int killedPeople = 0;
    int prisProb = 0;
    int yearsOfPhysicDiseases = 0;
    int rehabOfDiseas = 0;
    int carLicense = 0;
    int car = 0;
    int retired = 0;

    char nomeScelto[50];
    char cognomeScelto[50];

    self[0].age = 0;
    self[0].fertility = 1;
    self[0].iQ = (rand() % 100) + 40;
    self[0].healht = (rand() % 100) + 1;
    self[0].mentalHealth = (rand() % 100) + 1;
    self[0].happiness = (rand() % 100) + 1;
    self[0].currentPortfolio = 0;
    self[0].salary = 0;
    self[0].friends = 0;
    strcpy(self[0].work, "Disoccupato");

    identityCard(world, nomeScelto, cognomeScelto);

    for (int a = 1; a <= 7; a++)
    {
        self[0].age = a;
        self[0].healht += 5;
        self[0].iQ += 10;
        self[0].fertility += 2;
        self[0].mentalHealth += 5;
        printf(BLUE BOLD "\nCrescita... Anno %d\n" RESET, self[0].age);
    }

    while (alive == 1)
    {

        int probPhysicDiseases = self[0].healht - (rand() % 40) + 1;
        int hackWorkProb = (rand() % 3) + 1;
        int probRehab = (rand() % 10) + 1;
        int probabilities = (rand() % 9) + 1;
        int warProbabilies = (rand() % 9) + 1;
        int event = (rand() % 3) + 1;
        int nuclearProbability = (rand() % 3) + 1;
        int nuclearWeaponBuild = (rand() % 13) + 1;
        int mentalDiseases = (rand() % 10) + 1;
        int rollCauses = (rand() % 10) + 1;
        int rollPhysicDiseases = (rand() % 5) + 1;
        int breakGirlProb = (rand() % 5) + 1;

        if (self[0].healht > 100)
        {
            self[0].healht = 100;
        }
        if (self[0].iQ > 100 && self[0].age < 14)
        {
            self[0].iQ = 80;
        }

        while (prision == 1 && alive == 1)
        {
            int choice = 0;
            int prisionGymProbAliveOrDead = (rand() % 4) + 1;

            work = 0;
            uniCount = 0;

            printf("1.Palestra | 2.Sentenza | 3.Visita coniugale | 4.Spedisci lettera| 5.Tenta la fuga | 6.Picchia | 7.Infermieria\n");
            printf("Scelta: ");
            scanf("%d", &choice);
            while (getchar() != '\n')
                ;

            switch (choice)
            {
            case 1:
                prisionGym(self, &alive, prisionGymProbAliveOrDead);
                break;
            case 2:
                sentenceRewiew(self, &prisProb, &prision);
                break;
            case 3:
                coniugalVisit(self);
                break;
            case 4:
                letter(self);
                break;
            case 5:
                escape(self, &prisProb, &prision);
                break;
            case 6:
                mess(self, &prisProb);
                break;
            case 7:
                medicJail(self);
                break;
            default:
                break;
            }

            if (strcmp(self[0].sentence, "Immigrazione") == 0)
            {
                printf(RED BOLD "\n\n*** SENTENZA: [%s] ***\n\n" RESET, self[0].sentence);
                if (yearsInPrision <= prisProb)
                {
                    printf(YELLOW BOLD "Anni in prigione: [%d] / [%d]\n\n" RESET, yearsInPrision, prisProb);

                    self[0].happiness -= 5;
                    self[0].healht -= 4;
                    self[0].mentalHealth -= 6;
                    self[0].fertility -= 2;
                    yearsInPrision++;
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                }
            }
            else if (strcmp(self[0].sentence, "Omicidio") == 0)
            {
                printf(RED BOLD "\n\n*** SENTENZA: [%s] ***\n\n" RESET, self[0].sentence);
                if (yearsInPrision <= prisProb)
                {
                    printf(YELLOW BOLD "Anni in prigione: [%d] / [%d]\n\n" RESET, yearsInPrision, prisProb);

                    self[0].happiness -= 5;
                    self[0].healht -= 4;
                    self[0].mentalHealth -= 7;
                    self[0].fertility -= 2;
                    yearsInPrision++;
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                }
            }
            else if (strcmp(self[0].sentence, "Furto domiciliare") == 0)
            {
                printf(RED BOLD "\n\n*** SENTENZA: [%s] ***\n\n" RESET, self[0].sentence);
                if (yearsInPrision <= prisProb)
                {
                    printf(YELLOW BOLD "Anni in prigione: [%d] / [%d]\n\n" RESET, yearsInPrision, prisProb);

                    self[0].happiness -= 5;
                    self[0].healht -= 4;
                    self[0].mentalHealth -= 6;
                    self[0].fertility -= 2;
                    yearsInPrision++;
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                }
            }
            else if (strcmp(self[0].sentence, "Furto auto") == 0)
            {
                printf(RED BOLD "\n\n*** SENTENZA: [%s] ***\n\n" RESET, self[0].sentence);
                if (yearsInPrision <= prisProb)
                {
                    printf(YELLOW BOLD "Anni in prigione: [%d] / [%d]\n\n" RESET, yearsInPrision, prisProb);

                    self[0].happiness -= 5;
                    self[0].healht -= 4;
                    self[0].mentalHealth -= 6;
                    self[0].fertility -= 2;
                    yearsInPrision++;
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                }
            }
            else if (strcmp(self[0].sentence, "Associazione mafiosa") == 0)
            {
                printf(RED BOLD "\n\n*** SENTENZA: [%s] ***\n\n" RESET, self[0].sentence);
                if (yearsInPrision <= prisProb)
                {
                    printf(YELLOW BOLD "Anni in prigione: [%d] / [%d]\n\n" RESET, yearsInPrision, prisProb);

                    self[0].happiness -= 5;
                    self[0].healht -= 4;
                    self[0].mentalHealth -= 6;
                    self[0].fertility -= 2;
                    yearsInPrision++;
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
                }
            }
            if (yearsInPrision == prisProb)
            {
                printf("\n\n*** SEI FUORI DI PRIGIONE ***\n\n");
                yearsInPrision = 0;
                prisProb = 0;
                prision = 0;
            }
        }


        printf(YELLOW "\n--- STATISTICHE %d ANNI ---" RESET, self[0].age);
        printf(RED "\nSaldo: %.2f$ (+%.2f$/anno) | Lavoro: %s | Salute Fisica: %d | Malattie: %d" RESET, self[0].currentPortfolio, self[0].salary, self[0].work, self[0].healht, diseases);
        printf(RED "\nAmici: %d | Fidanzata: %d | Figli: %d | IQ: %d | Salute Mentale: %d\n" RESET, self[0].friends, loverCount, sonsCount, self[0].iQ, self[0].mentalHealth);
        printf(BLUE "Omicidi: %d | Reati: %d\n" RESET, killedPeople, criminalRating);

        printf(GREEN "\n<Clife>: Premi un tasto per avanzare...\n" RESET);
        getch();

        self[0].age += 1;
        self[0].currentPortfolio += self[0].salary;

        controlYearProximative(self, &yearsOfPhysicDiseases, &carLicense, &rehab, &breakGirlProb, &fling, &loverCount, &mentalDiseases, &work);

        if (probPhysicDiseases <= 20) {physicDiseases(self, &alive, &yearsOfPhysicDiseases, &rollPhysicDiseases);}
        if (criminal >= 50 && self[0].age > 15) {mafiaLetter(self);}
        if (ludopatic == 1) {self[0].currentPortfolio -= 1000; self[0].mentalHealth -= 3;}
        if (sonsCount >= 1) { annualNetSons(self, &sonsCount); }
        if (work == 1) { workAnnualNet(self, &work , &servedYears); }
        if (retired == 1) { verifyRetired(self, &servedYears); printf("\n\n*** PENSIONE: [%d] \n\n", self[0].currentPortfolio); }
        if (uniCount == 1) { college(self, &uniCount); }
        if (uniCount == 1 && prision == 1) { printf(RED "\n\n*** SMESSO DI FREQUENTARE, SEI IN PRIGIONE ***\n\n" RESET); uniCount = 0; }
        if (work == 0) { chooseWork(self, 1); }

        checkWork(self, &work, warProbabilies, &prision, event, nuclearProbability, nuclearWeaponBuild, hackWorkProb);
        
    }
}
