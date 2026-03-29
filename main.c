#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "costanti.h"
#include "player.h"
#include "funzioni.h"

int main()
{

    struct Giocatore self[1];
    struct Node *list = NULL;

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
    int diplomated = 0;
    int tempAge = 0;
    int chiusura = 0;
    int controlDis = 0;
    int tempAfterSexualDisContracted = 0;
    int semen = 0;

    char nomeScelto[50];
    char cognomeScelto[50];

    self[0].age = 0;
    self[0].fertility = 1;
    self[0].iQ = randomQi(self);
    self[0].healht = (rand() % 100) + 1;
    self[0].mentalHealth = (rand() % 100) + 1;
    self[0].happiness = (rand() % 100) + 1;
    self[0].currentPortfolio = 0;
    self[0].salary = 0;
    self[0].friends = 0;
    strcpy(self[0].work, "Disoccupato");

    int randomIndex = rand() % 13;
    struct Nation *myNation = &world[randomIndex];
    identityCard(myNation, nomeScelto, cognomeScelto);

    for (int a = 1; a <= 7; a++)
    {
        self[0].age = a;
        self[0].healht += 5;
        self[0].iQ += 1;
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
        int probSexualDiseases = (rand() % 5) + 1;

        controlHealth(self);
        controlQi(self, &alive);
        controlKilledPeopleAndMentalHealth(self, &mentalDiseases, &killedPeople, &criminalRating);

        if (alive == 1)
        {
            if (alive == 1 && self[0].fertility <= 0)
            {
                printf(YELLOW "\n\n[SOFFRI DI DISFUNZIONE ERETTILE]\n\n" RESET);
                self[0].happiness -= 3;
                self[0].healht -= 2;
            }
            if (work == 1 && prision == 0)
            {
                checkWork(self, &work, &warProbabilies, &prision, &event, &nuclearProbability, &nuclearWeaponBuild, &hackWorkProb, &alive);
            }
            if (probPhysicDiseases <= 20)
            {
                physicDiseases(self, &alive, &yearsOfPhysicDiseases, &rollPhysicDiseases);
            }
            if (criminal == 50 && self[0].age > 15)
            {
                mafiaLetter(self, &criminal);
            }
            if (ludopatic == 1)
            {
                self[0].currentPortfolio -= 1000;
                self[0].mentalHealth -= 3;
            }
            if (sonsCount >= 1)
            {
                annualNetSons(self, &sonsCount);
            }
            if (work == 1)
            {
                workAnnualNet(self, &work, &servedYears, &retired);
            }
            if (retired == 1 && prision == 0)
            {
                verifyRetired(self, &servedYears);
                printf("\n\n*** PENSIONE: [%.2f] \n\n", self[0].salary);
            }
            if (uniCount == 0 && prision == 0 && self[0].age >= 18 && retired == 0)
            {
                workOrCollege(self, &uniCount, &yearCurrent, &work, &servedYears, &diplomated);
            }
            if (uniCount == 1 && prision == 1)
            {
                printf(RED "\n\n*** SMESSO DI FREQUENTARE, SEI IN PRIGIONE ***\n\n" RESET);
                uniCount = 0;
            }
            if (diplomated == 1 && work == 0 && retired == 0)
            {
                chooseWork(self, 1, &work);
            }
            if (ludopatic == 1)
            {
                ludo(self);
            }
            if (mentalDiseases == 1)
            {
                controlMentalDiseases(self);
            }
            if ((rand() % 100 < 8) && (mentalDiseases == 3))
            {
                probDiseases(self, &rollCauses, &mentalDiseases);
            }
            if (addiction == 1)
            {
                healthAndAddiction(self, &addiction);
            }
            if (probabilities == 3 && loverCount == 1)
            {
                goWithGirlfriend(self);
            }
        }

        controlYearProximative(self, &carLicense, &breakGirlProb, &fling, &loverCount, &mentalDiseases, &work, &prision, &alive);
        mentalDis(self);

        if (self[0].age >= 18 && uniCount == 0 && prision == 0 && work == 0)
        {
            if (retired == 0)
            {
                workOrCollege(self, &uniCount, &yearCurrent, &work, &servedYears, &diplomated);
            }
        }

        printf(YELLOW "\n--- STATISTICHE %d ANNI ---" RESET, self[0].age);
        printf(RED "\nSaldo: %.2f$ (+%.2f$/anno) | Lavoro: %s | Salute Fisica: %d | Malattie: %d" RESET, self[0].currentPortfolio, self[0].salary, self[0].work, self[0].healht, diseases);
        printf(RED "\nAmici: %d | Fidanzata: %d | Figli: %d | IQ: %d | Salute Mentale: %d\n" RESET, self[0].friends, loverCount, sonsCount, self[0].iQ, self[0].mentalHealth);
        printf(BLUE "Omicidi: %d | Reati: %d\n" RESET, killedPeople, criminalRating);

        printf(GREEN "\n<Clife>: Premi un tasto per avanzare...\n" RESET);

        if (getch())
        {

            self[0].age += 1;
            tempAge = self[0].age;

            addToHead(&list, &tempAge);
        }

        if (controlDis >= 1)
        {

            tempAfterSexualDisContracted++;

            if (tempAfterSexualDisContracted > controlDis)
            {
                printf(RED "\n\n[HAI UNA MALATTIA VENEREA, CURATELA ALTRIMENTI DIVENTI INFERTILE]\n\n" RESET);

                self[0].fertility -= 3;
                self[0].healht -= 2;

                if (self[0].fertility <= 30)
                {
                    printf(CYAN "\n\n[IL TUO FUNZIONAMENTO SESSUALE SI STA ABBASSANDO]\n\n" RESET);
                }

                if (self[0].fertility <= 0)
                {
                    printf(RED "\n\n[DISFUNZIONE ERETTILE]\n\n" RESET);
                }
            }
        }

        self[0].currentPortfolio += self[0].salary;

        if (diplomated == 0 && uniCount == 1)
        {
            college(self, &uniCount, &yearCurrent, &diplomated);
        }

        int choice;

        if (alive == 1)
        {

            printf("\n\nAZIONI: 1.Sport | 2.Lettura | 3.Musica | 4.Amici | 5.Ragazze | 6.Night Club |\n7.Passa del tempo con amici | 8.Passa del tempo con la tua ragazza | 9.Rehab\n");
            printf("10.Shopping | 11.Emigrare | 12.Casino (age >= 18) | 13.Compi Crimini | 14.Suicidio | 15.Ospedale\n16.Mangia | 17.Avanza di 1 anno\n\nScelta: ");

            int choice = getValidInput(1, 17);

            switch (choice)
            {
            case 1:
                gym(self);
                break;

            case 2:
                righting(self);
                break;

            case 3:
                music(self);
                break;

            case 4:
                newFriends(self);
                break;

            case 5:
                if (self[0].age < 12)
                {
                    printf(BLUE "\nSEI TROPPO PICCOLO\n" RESET);
                }
                else
                {
                    girlResearch(self, &loverCount, &sonsCount, &fling, &probSexualDiseases, &controlDis);
                }
                break;

            case 6:
                if (self[0].age < 14)
                {
                    printf(BLUE "\nSEI TROPPO PICCOLO\n" RESET);
                }
                else
                {
                    nightClub(self, &addiction, &alive);
                }
                break;

            case 7:
                if (self[0].friends >= 1)
                {
                    timeWithFriends(self, &fling);
                }
                else
                {
                    printf(BLUE "\nNON HAI AMICI\n" RESET);
                }
                break;

            case 8:
                if (loverCount < 1)
                {
                    printf(BLUE "\nNON HAI UNA RAGAZZA\n" RESET);
                }
                else if (prision == 1)
                {
                    printf(RED "\nSEI IN PRIGIONE\n" RESET);
                }
                else
                {
                    timeWithGirfriend(self, &sonsCount);
                }
                break;

            case 9:
                if (addiction < 1 && ludopatic < 1)
                {
                    printf(BLUE "\n\nNON SEI DIPENDENTE DA NESSUNA SOSTANZA\n" RESET);
                }
                else
                {
                    rehab(self, &addiction, &probRehab, &ludopatic);
                }
                break;

            case 10:
                if (self[0].currentPortfolio <= 0)
                {
                    printf(BLUE "\n\n*** NON HAI ABBASTANZA SOLDI ***\n" RESET);
                }
                else if (prision == 1)
                {
                    printf(RED "\nSEI IN PRIGIONE\n" RESET);
                }
                else
                {
                    shop(self, carLicense);
                }
                break;

            case 11:
                emigrate(self, &loverCount, uniCount, &prision, &prisProb);
                break;

            case 12:
                if (self[0].age < 18)
                {
                    printf(BLUE "\nSEI MINORENNE\n" RESET);
                }
                else
                {
                    blackJack(self, &ludopatic);
                }
                break;

            case 13:
                crimes(self, &criminal, &criminalRating, &prision, &killedPeople, &loverCount, &sonsCount, &prisProb);
                break;

            case 14:
                suicide(&alive);
                break;

            case 15:
                hospital(self, myNation, &alive, &sonsCount, &loverCount, &probSexualDiseases, &controlDis, &mentalDiseases, &semen);
                break;

            case 16:
                eat(self);
                break;

            case 17:
                printf(GREEN "\n\n[HAI DECISO DI RIPOSARE]\n\n" RESET);

                controlQi(self, &alive);
                
                break;

            default:
                printf(RED "\nScelta non valida!\n" RESET);
                break;
            }
        }

        if (self[0].healht > 100)
        {
            self[0].healht = 100;
        }
        if (self[0].healht < 0)
        {
            self[0].healht = 0;
            alive = 0;
        }
        if (self[0].mentalHealth > 100)
        {
            self[0].mentalHealth = 100;
        }
        if (self[0].mentalHealth < 0)
        {
            self[0].mentalHealth = 0;
        }

        while (prision == 1 && alive == 1)
        {

            controlQi(self, &alive);
            controlKilledPeopleAndMentalHealth(self, &mentalDiseases, &killedPeople, &criminalRating);

            int choice = 0;
            int prisionGymProbAliveOrDead = (rand() % 4) + 1;

            work = 0;
            uniCount = 0;

            if (alive == 1)
            {

                printf("1.Palestra | 2.Sentenza | 3.Visita coniugale | 4.Spedisci lettera| 5.Tenta la fuga | 6.Picchia | 7.Infermieria | 8.Suicidio\n\n");
                printf("Scelta: ");

                choice = getValidInput(1, 8);
            }

            switch (choice)
            {
            case 1:
                prisionGym(self, &alive, prisionGymProbAliveOrDead);
                break;
            case 2:
                sentenceRewiew(self, &prisProb, &prision);
                break;
            case 3:
                coniugalVisit(self, &loverCount);
                break;
            case 4:
                letter(self);
                break;
            case 5:
                escape(self, &prisProb, &prision, &yearsInPrision);
                break;
            case 6:
                mess(self, &prisProb);
                break;
            case 7:
                medicJail(self);
                break;
            case 8:
                suicide(&alive);
                break;
            default:
                break;
            }

            if (self[0].healht > 100)
            {
                self[0].healht = 100;
            }
            if (self[0].healht < 0)
            {
                self[0].healht = 0;
                alive = 0;
            }
            if (self[0].mentalHealth > 100)
            {
                self[0].mentalHealth = 100;
            }
            if (self[0].mentalHealth < 0)
            {
                self[0].mentalHealth = 0;
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

                    if (self[0].healht < 0)
                    {
                        self[0].healht = 0;
                        alive = 0;
                    }
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
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

                    if (self[0].healht < 0)
                    {
                        self[0].healht = 0;
                        alive = 0;
                    }
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
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

                    if (self[0].healht < 0)
                    {
                        self[0].healht = 0;
                        alive = 0;
                    }
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
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

                    if (self[0].healht < 0)
                    {
                        self[0].healht = 0;
                        alive = 0;
                    }
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
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

                    if (self[0].healht < 0)
                    {
                        self[0].healht = 0;
                        alive = 0;
                    }
                }
                else
                {
                    printf(GREEN BOLD "*** SEI FUORI DI PRIGIONE ***\n\n" RESET);
                    yearsInPrision = 0;
                    prisProb = 0;
                    prision = 0;
                }
            }

            if (self[0].healht <= 0)
            {
                alive = 0;
            }
            if (probPhysicDiseases <= 20)
            {
                physicDiseases(self, &alive, &yearsOfPhysicDiseases, &rollPhysicDiseases);
            }
            if (ludopatic == 1)
            {
                self[0].currentPortfolio -= 1000;
                self[0].mentalHealth -= 3;
            }
            if (sonsCount >= 1)
            {
                annualNetSons(self, &sonsCount);
            }
            if (uniCount == 1 && prision == 1)
            {
                printf(RED "\n\n*** SMESSO DI FREQUENTARE, SEI IN PRIGIONE ***\n\n" RESET);
                uniCount = 0;
            }

            printf(YELLOW "\n--- STATISTICHE %d ANNI ---" RESET, self[0].age);
            printf(RED "\nSaldo: %.2f$ (+%.2f$/anno) | Lavoro: %s | Salute Fisica: %d | Malattie: %d" RESET, self[0].currentPortfolio, self[0].salary, self[0].work, self[0].healht, diseases);
            printf(RED "\nAmici: %d | Fidanzata: %d | Figli: %d | IQ: %d | Salute Mentale: %d\n" RESET, self[0].friends, loverCount, sonsCount, self[0].iQ, self[0].mentalHealth);
            printf(BLUE "Omicidi: %d | Reati: %d\n" RESET, killedPeople, criminalRating);

            printf(GREEN "\n<Clife>: Premi un tasto per avanzare...\n" RESET);

            if (getch())
            {

                self[0].age += 1;

                tempAge = self[0].age;

                addToHead(&list, &tempAge);
            }
        }
    }

    printf(RED BOLD "\n--- GAME OVER ---\nLavoro: %s\nAmanti: %d\nFigli: %d\nPatrimonio: %.2f\n\n[Lista anni vissuti]:\n\n " RESET, self[0].work, fling, sonsCount, self[0].currentPortfolio);

    struct Node *corrente = list;

    while (corrente != NULL)
    {
        printf(GREEN BOLD " [%d]\n" RESET, corrente->expression - 1);
        printf(YELLOW "  ||\n" RESET);
        printf(YELLOW "  VV\n" RESET);
        corrente = corrente->next;
    }

    printf("NULL\n\n");

    printf("\nDigita '0' e premi INVIO per uscire: ");
    fflush(stdout);

    while (scanf(" %d", &chiusura) != 1 || chiusura != 0)
    {
        printf("\nDevi digitare proprio 0 per uscire: ");

        while (getchar() != '\n')
            ;
    }

    freeList(list);

    return 0;
}