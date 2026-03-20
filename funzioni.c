#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

#include "funzioni.h"
#include "costanti.h"

void identityCard(struct Nation *n, char *nS, char *cS)
{
    char *nomiITA[] = {"Giuseppe", "Leonardo", "Francesco", "Alessandro"};
    char *cognomiITA[] = {"Rossi", "Russo", "Ferrari", "Esposito"};

    char *nomiUSA[] = {"John", "Michael", "Robert", "William"};
    char *cognomiUSA[] = {"Smith", "Johnson", "Williams", "Brown"};

    char *nomiNIG[] = {"Victor", "Ademola", "AKuchi", "Amada", "Ayo", "Adekunle", "Bola"};
    char *cognomiNIG[] = {"Eleke", "Emenalo", "Enyeama", "Ezeugo", "Oni", "Sada", "Akinn"};

    char *nomiCIN[] = {"Mei", "Xiao", "Lian", "Hui", "Fang", "Yue"};
    char *cognomiCIN[] = {"Wang", "Zhang", "Liu", "Yang", "Guo", "Ma"};

    char *nomiMAR[] = {"Ismail", "Amin", "Amir", "Brahim", "Moustafa"};
    char *cognomiMAR[] = {"Elhamzaoui", "Boufal", "Hassan", "Harroui"};

    char *nomiPAK[] = {"Muhammad", "Ali", "Bilal", "Hamza", "Salman", "Faisal"};
    char *cognomiPAK[] = {"Khan", "Malik", "Malek", "Shah", "Farah", "Qureshi"};

    char *nomiFRA[] = {"Kilian", "Paul", "François", "Enmanuel", "Hugo", "Armand"};
    char *cognomiFRA[] = {"De Brignac", "Blanc", "Fournier", "Vincent", "Garnier", "Dubois"};

    char *nomiIND[] = {"Arjun", "Rohan", "Roshan", "Ajay", "Kiran"};
    char *cognomiIND[] = {"Singh", "Kaur", "Khan", "Patel", "Sharma"};

    char *nomiBRA[] = {"Tais", "Leonardo", "Silva", "Thiago", "Gabriel"};
    char *cognomiBRA[] = {"De Jesus", "De Oliveira", "De Souza", "Pereira", "Rodrigues"};

    char *nomiEGI[] = {"Asa", "Ghupa", "Zervos", "Kheti", "Pentu", "Taharqa"};
    char *cognomiEGI[] = {"Hussein", "Heba", "Ahmed", "El-Masry", "Nadia", "Sherine"};

    char *nomiRUS[] = {"Nikolai", "Dmitri", "Aleksandr", "Ivan", "Sergey", "Vladimir"};
    char *cognomiRUS[] = {"Popov", "Volkov", "Vasiliev", "Morozov", "Petrov", "Smirnov"};

    char *nomiGIA[] = {"Noah", "Horst", "Friedrich", "Heike", "Ralf"};
    char *cognomiGIA[] = {"Schneider", "Schmidt", "Becker", "Meyer", "Enrique"};

    char *nomiGIP[] = {"Sakura", "Himari", "Aiko", "Haruto"};
    char *cognomiGIP[] = {"Sato", "Nakamura", "Yamamoto", "Watanabe"};

    int r;

    if (strcmp(n->nameNation, "Italia") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiITA[r]);
        r = rand() % 4;
        strcpy(cS, cognomiITA[r]);
    }
    else if (strcmp(n->nameNation, "Stati Uniti") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiUSA[r]);
        r = rand() % 4;
        strcpy(cS, cognomiUSA[r]);
    }
    else if (strcmp(n->nameNation, "Nigeria") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiNIG[r]);
        r = rand() % 4;
        strcpy(cS, cognomiNIG[r]);
    }
    else if (strcmp(n->nameNation, "Cina") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiCIN[r]);
        r = rand() % 4;
        strcpy(cS, cognomiCIN[r]);
    }
    else if (strcmp(n->nameNation, "Pakistan") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiPAK[r]);
        r = rand() % 4;
        strcpy(cS, cognomiPAK[r]);
    }
    else if (strcmp(n->nameNation, "India") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiIND[r]);
        r = rand() % 4;
        strcpy(cS, cognomiIND[r]);
    }
    else if (strcmp(n->nameNation, "Brasile") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiBRA[r]);
        r = rand() % 4;
        strcpy(cS, cognomiBRA[r]);
    }
    else if (strcmp(n->nameNation, "Egitto") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiEGI[r]);
        r = rand() % 4;
        strcpy(cS, cognomiEGI[r]);
    }
    else if (strcmp(n->nameNation, "Germania") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiGIA[r]);
        r = rand() % 4;
        strcpy(cS, cognomiGIA[r]);
    }
    else if (strcmp(n->nameNation, "Francia") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiFRA[r]);
        r = rand() % 4;
        strcpy(cS, cognomiFRA[r]);
    }
    else if (strcmp(n->nameNation, "Marocco") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiMAR[r]);
        r = rand() % 4;
        strcpy(cS, cognomiMAR[r]);
    }
    else if (strcmp(n->nameNation, "Russia") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiRUS[r]);
        r = rand() % 4;
        strcpy(cS, cognomiRUS[r]);
    }
    else if (strcmp(n->nameNation, "Giappone") == 0)
    {
        r = rand() % 4;
        strcpy(nS, nomiGIP[r]);
        r = rand() % 4;
        strcpy(cS, cognomiGIP[r]);
    }

    printf("\n--- DOCUMENTO DI RICONOSCIMENTO ---\n");
    printf("Nazione: %s\n", n->nameNation);
    printf("-------------\n");
    printf("Nome Completo: %s %s\n", nS, cS);
}

void gym(struct Giocatore *s)
{
    int sport = 0;
    printf(GREEN "\n\nInserisci uno sport da praticare:\n" RESET);
    printf(YELLOW BOLD "\n1. Calcio | 2. Nuoto | 3. Arti Marziali | 4. Basket | 5. Tennis:\n" RESET);
    printf(YELLOW BOLD "Scelta: " RESET);
    scanf("%d", &sport);

    if (sport == 1)
    {
        printf(BLUE BOLD "\n***HAI COMINCIATO A PRATICARE CALCIO***\n" RESET);
        s->healht += 5;
        s->fertility += 3;
        s->happiness += 3;
        s->friends += 3;
    }
    else if (sport == 2)
    {
        printf(BLUE BOLD "\n***HAI COMINCIATO A PRATICARE NUOTO***\n" RESET);
        s->healht += 5;
        s->fertility += 3;
        s->happiness += 3;
        s->friends += 2;
    }
    else if (sport == 3)
    {
        printf(BLUE BOLD "\n***HAI COMINCIATO A PRATICARE ARTI MARZIALI***\n" RESET);
        s->healht += 5;
        s->fertility += 3;
        s->happiness += 3;
        s->friends += 1;
    }
    else if (sport == 4)
    {
        printf(BLUE BOLD "\n***HAI COMINCIATO A PRATICARE BASKET***\n" RESET);
        s->healht += 5;
        s->fertility += 3;
        s->happiness += 3;
        s->friends += 2;
    }
    else if (sport == 5)
    {
        printf(BLUE BOLD "\n***HAI COMINCIATO A PRATICARE TENNIS***\n" RESET);
        s->healht += 5;
        s->fertility += 3;
        s->happiness += 3;
        s->friends += 3;
    }

    if (s->healht > 100)
    {
        s->healht = 100;
    }
    if (s->happiness > 100)
    {
        s->happiness = 100;
    }
    if (s->fertility > 100)
    {
        s->fertility = 100;
    }
}

void righting(struct Giocatore *l)
{
    if (l->age < 20)
    {
        l->iQ += 6;
        printf(YELLOW "[Studio]\n[IQ AUMENTATO]: {%d}\n\n" RESET, l->iQ);
    }
    else
    {
        l->iQ += 3;
        printf(YELLOW "[Lettura]\n[IQ AUMENTATO]: {%d}\n\n" RESET, l->iQ);
    }
}

void newFriends(struct Giocatore *fr)
{
    fr->friends += 1;
    printf(YELLOW BOLD "\n\nHai fatto un nuovo amico al parco!\n\n" RESET);
}

void girlResearch(struct Giocatore *g, int *counter, int *son, int *fl)
{
    int love, occ;
    printf(YELLOW BOLD "\nCerca: 1.In giro 2.Online: " RESET);
    scanf("%d", &love);
    while (getchar() != '\n')
        ;
    if (love == 1)
    {
        printf(YELLOW BOLD "Opzioni: 1.Cena 2.Bacio 3.Sesso: " RESET);
        scanf("%d", &occ);
        while (getchar() != '\n')
            ;
        if (occ == 1 || occ == 2)
        {
            printf(GREEN BOLD "\n\nTi sei fidanzato!\n" RESET);
            (*counter)++;
        }
        else if (occ == 2)
        {
            printf("\n\n*** HAI BECCATO UN PEDOFILO, TI PERSEGUITA PER 1 MESE E PER UN PERIODO SOFFRI DI ANSIA ***\n\n");
            g->mentalHealth -= 6;
        }
        else if (occ == 3)
        {
            printf(GREEN BOLD "\n\nHai fatto sesso occasionale.\n\n" RESET);
            (*fl)++;
            if (g->fertility >= 50)
            {
                printf(YELLOW BOLD "Hai avuto un figlio!\n" RESET);
                (*son)++;
            }
        }
    }
}

void eat(struct Giocatore *c)
{
    int eatMenu = 0;
    printf("\n\n*** DECIDI DOVE MANGIARE ***\n\n");

    printf("1.Ristorante (in famiglia) | 2.Fast food (amici) [mangiarne troppo spesso fa male!] | 3.Mangia a casa\nScelta: ");
    scanf("%d", &eatMenu);

    switch (eatMenu)
    {
    case 1:
        printf("\n\n*** HAI MANGIATO A RISTORANTE CON LA TUA FAMIGLIA ***\n\n");
        c->happiness += 3;
        break;
    case 2:
        printf("\n\n*** HAI MANGAITO AL FAST FOOD ***\n\n");
        c->happiness += 3;
        break;
    case 3:
        int volt = 1;
        if (volt == 1)
        {
            printf("\n\n*** PRIMA VOLTA CHE CUCINI, DISASTRO TOTALO HAI INCENDIATO CASA ***\n\n");
            volt += 2;
        }
        else if (volt > 10)
        {
            printf("\n\n*** STAI IMPARANDO A CUCINARE, NON FA TANTO SCHIFO ***\n\n");
            volt += 1;
        }
        else
        {
            printf("\n\n*** CUCINI DA DIO, PIATTI BUONISSIMI ***\n\n");
            volt += 1;
        }
        break;
    default:
        break;
    }
}

void nightClub(struct Giocatore *night, int *addict, int *dead)
{
    int num = (rand() % 100) + 1;
    int roll = (rand() % 100) + 1;
    int acc;
    printf(BLUE BOLD "\nSei al Blue Point Club! (Evento: %d)\n" RESET, num);
    if (num > 55 && num <= 65)
    {
        printf(YELLOW "\nOfferta: Moscow Mule. Accetti? (1=Si, 0=No): " RESET);
        scanf("%d", &acc);
        while (getchar() != '\n')
            ;
        if (acc && *addict == 1)
        {
            if (roll <= 10)
                *dead = 0;
            else
                printf(BOLD "*** HAI BECUTO ALCOHOL ***\n" RESET);
        }
        if (acc && *addict == 0)
        {
            if (roll <= 20)
                *addict = 1;
            printf(RED BOLD "*** SEI DIPENDENTE DA ALCOHOL ***\n" RESET);
        }
        if (acc)
        {
            if (roll <= 10)
                *dead = 0;
        }
    }
    else if (num > 65 && num <= 85)
    {
        printf("Offerta: NEVE. Accetti? (1=Si, 0=No): ");
        scanf("%d", &acc);
        while (getchar() != '\n')
            ;
        if (acc && *addict == 1)
        {
            if (roll <= 20)
                *dead = 0;
            else
                printf(BOLD "*** HAI PIPPATO ***\n" RESET);
        }
        if (acc && *addict == 0)
        {
            if (roll <= 40)
                *addict = 1;
            printf(RED BOLD "*** SEI DIPENDENTE DA COCA ***\n" RESET);
        }
        if (acc)
        {
            if (roll <= 20)
                *dead = 0;
        }
    }
    else if (num > 85 && num <= 95)
    {
        printf(RED BOLD "Offerta: HERO. Accetti? (1=Si, 0=No): " RESET);
        scanf("%d", &acc);
        while (getchar() != '\n')
            ;
        if (acc && *addict == 1)
        {
            if (roll <= 40)
                *dead = 0;
            else
                printf(BOLD "*** HAI FATTO USO DI HERO ***\n" RESET);
        }
        if (acc && *addict == 0)
        {
            if (roll <= 60)
                *addict = 1;
            printf(RED BOLD "*** SEI DIPENDENTE DA HERO ***\n" RESET);
        }
        if (acc)
        {
            if (roll <= 40)
                *dead = 0;
        }
    }
    else
        printf("Tutto tranquillo.\n");
}

void chooseWork(struct Giocatore *s, int hasDegree, int *worke)
{
    int job;
    if (hasDegree == 1)
    {
        printf(YELLOW BOLD "\nLAVORI PER LAUREATI:\n1. Jr App Developer (30000$)\n2. Ingegnere Nucleare (48000$)\n3. Professore (36000$)\n4. Etichal Hacker (10000$)\nScelta: " RESET);
        scanf("%d", &job);

        if (job == 1 || job == 4)
        {
            if (strcmp(s->subject, "Computer Science") != 0)
            {
                printf(BLUE BOLD "\n\n*** NON HAI LA LAUREA ADATTA ***\n\n" RESET);
            }
            
        }
        if (job == 2 && strcmp(s->subject, "Ingegnere Nuc.") != 0)
        {
            printf(BLUE BOLD "\n\n*** NON HAI LA LAUREA ADATTA ***\n\n" RESET);
        }
        if (job == 1 && strcmp(s->subject, "Computer Science") == 0)
        {            
            strcpy(s->work, "Developer");
            s->salary = 30000;
            *worke = 1;
        }
        else if (job == 2 && strcmp(s->subject, "Ingegnere Nuc.") == 0)
        {
            strcpy(s->work, "Ingegnere Nuc.");
            s->salary = 48000;
            *worke = 1;
        }
        else if (job == 3 && hasDegree == 1)
        {
            strcpy(s->work, "Professore");
            s->salary = 16000;
            *worke = 1;
        }
        else if (job == 4 && strcmp(s->subject, "Computer Science") == 0)
        {
            strcpy(s->work, "Etichal Hacker");
            s->salary = 25000;
            *worke = 1;
        }

    }

    else
    {
        printf(YELLOW BOLD "\nLAVORI DISPONIBILI:\n1. Cassiere (1700$)\n2. Militare (3700$)\n3. Operaio (2300$)\nScelta: " RESET);
        scanf("%d", &job);
        if (job == 1)
        {
            strcpy(s->work, "Cassiere");
            s->salary = 1700;
        }
        else if (job == 2)
        {
            strcpy(s->work, "Militare");
            s->salary = 3700;
        }
        else
        {
            strcpy(s->work, "Operaio");
            s->salary = 2300;
        }
    }
    while (getchar() != '\n')
        ;
    printf(GREEN BOLD "Hai iniziato a lavorare come: %s\n" RESET, s->work);
}

void war(struct Giocatore *w, int militarChoice)
{
    if (militarChoice == 1)
    {
        printf(RED BOLD "\n\nIMBOSCATA! Un razzo sta arrivando verso il tuo mezzo!\n" RESET);
        printf(YELLOW "1. Salta fuori | 2. Rimani dentro e accelera:\n" RESET);

        int fast = 0;
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &fast);

        if (fast == 1)
        {
            printf(GREEN BOLD "\n\nTi sei salvato con qualche graffio.\n" RESET);
            w->healht -= 10;
        }
        else
        {
            printf(BLUE BOLD "\n\nIl mezzo esplode! Sei rimasto gravemente ferito e vieni riportato a casa.\n" RESET);
            w->healht -= 60;
        }
    }

    if (militarChoice == 2)
    {
        printf(RED BOLD "\n\nSei sotto il fuoco di un cecchino. Devi decidere la rotta.\n" RESET);
        printf(YELLOW "1. Passa per i vicoli | 2. Corri in campo aperto:\n" RESET);

        int sniper = 0;
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &sniper);

        if (sniper == 1)
        {
            printf(GREEN "\n\nSei passato inosservato, missione compiuta\n" RESET);
        }
        else
        {
            printf(RED BOLD "Il cecchino ti ha preso in testa, sei morto\n" RESET);
            w->healht = 0;
        }
    }
}

void nuclearProbabilitiesGeneral(struct Giocatore *n, int weaponN)
{
    int scelta = 0;
    printf(BLUE BOLD "\n--- GIORNATA ALLA CENTRALE NUCLEARE ---\n" RESET);

    switch (weaponN)
    {
    case 1:
        printf(RED BOLD "Lo Stato ti ha incaricato di costruire un'arma nucleare segreta.\n" RESET);
        printf(YELLOW "1. Ti impegni a costruirla | 2. Rifiutati per etica: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(BLUE BOLD "Il governo ti protegge, ma lo stress ti logora.\n" RESET);
            n->healht -= 5;
            n->happiness -= 10;
            n->currentPortfolio += 5000;
        }
        else
        {
            printf(RED BOLD "*** SEI STATO LICENZIATO E REPUTATO TRADITORE ***\n" RESET);
            n->salary = 0;
            strcpy(n->work, "Disoccupato");
        }
        break;

    case 2:
        printf(RED BOLD "Dei terroristi dell'ISIS ti hanno rapito per le tue conoscenze!\n" RESET);
        printf(YELLOW "1. Collabori sperando in un miracolo | 2. Tenti la fuga: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(BLUE BOLD "Ti hanno tenuto prigioniero per mesi. Perdi salute ma l'esercito ti salva!\n" RESET);
            n->healht -= 40;
            n->happiness -= 50;
        }
        else
        {
            if (n->iQ > 120)
            {
                printf(GREEN "Grazie al tuo ingegno crei un diversivo e scappi!\n" RESET);
                n->happiness += 20;
            }
            else
            {
                printf(RED BOLD "Ti hanno preso durante la fuga... Non sei sopravvissuto.\n" RESET);
                n->healht = 0;
            }
        }
        break;

    case 3:
        printf(RED BOLD "Perdita di refrigerante nel Reattore 4! C'e' poco tempo!\n" RESET);
        printf(YELLOW "1. Entra nel condotto (Rischio radiazioni) | 2. Evacua la zona: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(BLUE BOLD "Eroe! Hai salvato la citta', ma hai assorbito radiazioni.\n" RESET);
            n->healht -= 25;
            n->currentPortfolio += 10000;
        }
        else
        {
            printf(BLUE BOLD "Disastro sfiorato. La tua reputazione cala.\n" RESET);
            n->happiness -= 20;
            n->salary -= 200;
        }
        break;

    case 4:
        printf(RED BOLD "Spionaggio: Una potenza straniera ti offre 100.000$ per i piani della centrale.\n" RESET);
        printf(YELLOW "1. Accetta i soldi | 2. Denuncia l'accaduto: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            if ((rand() % 100) < 30)
            {
                printf(RED BOLD "*** ARRESTATO PER ALTO TRADIMENTO ***\n" RESET);
                n->healht = 0;
            }
            else
            {
                printf(BLUE BOLD "Sei ricco! Ma vivrai nel rimorso.\n" RESET);
                n->currentPortfolio += 100000;
                n->happiness -= 40;
            }
        }
        else
        {
            printf(GREEN BOLD "Ricevi una medaglia al valore!\n" RESET);
            n->happiness += 30;
        }
        break;

    case 5:
        printf(RED BOLD "Un errore di calcolo nelle barre di controllo causa un picco di calore.\n" RESET);
        if (n->iQ > 115)
        {
            printf(GREEN BOLD "Riesci a stabilizzare il nocciolo con un'equazione geniale.\n" RESET);
            n->iQ += 5;
        }
        else
        {
            printf(BLUE BOLD "Panico totale! Il nocciolo si danneggia e vieni multato.\n" RESET);
            n->currentPortfolio -= 2000;
            n->healht -= 10;
        }
        break;

    case 6:
        printf(RED BOLD "Conferenza Mondiale sull'Energia: Ti chiedono di parlare.\n" RESET);
        printf(YELLOW "1. Partecipa | 2. Declina: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(GREEN BOLD "Il tuo prestigio aumenta. IQ e Felicita' in crescita!\n" RESET);
            n->iQ += 10;
            n->happiness += 15;
        }
        break;

    case 7:
        printf(RED BOLD "Ispezione IAEA: Gli ispettori controllano il tuo lavoro.\n" RESET);
        if (n->iQ < 80)
        {
            printf(BLUE BOLD "Hanno trovato gravi negligenze. Stipendio tagliato.\n" RESET);
            n->salary -= 500;
        }
        else
        {
            printf(GREEN BOLD "Lavoro impeccabile. Ricevi un bonus!\n" RESET);
            n->currentPortfolio += 3000;
        }
        break;

    case 8:
        printf(RED BOLD "Un cortocircuito provoca un incendio nella sala turbine!\n" RESET);
        printf(YELLOW "1. Usa l'estintore manuale | 2. Attiva il sistema automatico (costoso): " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(BLUE BOLD "Spegni il fuoco ma inali fumi tossici.\n" RESET);
            n->healht -= 15;
        }
        else
        {
            printf(BLUE BOLD "Il sistema funziona, ma l'azienda ti incolpa del costo.\n" RESET);
            n->happiness -= 10;
        }
        break;

    case 9:
        printf(RED BOLD "SCOPERTA SCIENTIFICA! Hai trovato un modo per stabilizzare la Fusione!\n" RESET);
        printf(GREEN BOLD "Vinci il premio Nobel e un enorme premio in denaro!\n" RESET);
        n->currentPortfolio += 250000;
        n->happiness += 100;
        n->iQ += 20;
        break;

    case 10:
        printf(RED BOLD "Il direttore della centrale ti chiede di falsificare i report sulle scorie.\n" RESET);
        printf(YELLOW "1. Accetta (Bonus nero) | 2. Rifiuta e segnala: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(GREEN BOLD "Ti danno una mazzetta da 10.000$.\n" RESET);
            n->currentPortfolio += 10000;
        }
        else
        {
            printf(BLUE BOLD "Ti rendono la vita difficile al lavoro.\n" RESET);
            n->happiness -= 25;
        }
        break;

    case 11:
        printf(RED BOLD "Un subordinato commette un errore stupido. Come reagisci?\n" RESET);
        printf(YELLOW "1. Licenzialo | 2. Aiutalo a capire l'errore: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            printf(BLUE "La tua squadra ora ti teme.\n" RESET);
            n->friends--;
        }
        else
        {
            printf(GREEN "Hai guadagnato un amico e rispetto.\n" RESET);
            n->friends++;
            n->happiness += 5;
        }
        break;

    case 12:
        printf(RED BOLD "Stress da radiazioni: cominci ad avere allucinazioni durante i turni di notte.\n" RESET);
        printf(YELLOW "1. Vai in terapia (costoso) | 2. Ignora e continua: " RESET);
        scanf("%d", &scelta);
        if (scelta == 1)
        {
            n->currentPortfolio -= 1000;
            n->happiness += 20;
        }
        else
        {
            printf(BLUE BOLD "Le tue prestazioni calano drasticamente.\n" RESET);
            n->iQ -= 15;
            n->happiness -= 20;
        }
        break;

    case 13:
        printf(GREEN BOLD "PROMOZIONE: Ti viene offerto il ruolo di Direttore di Produzione!\n" RESET);
        printf(BLUE BOLD "Lo stipendio raddoppia, ma avrai zero tempo libero.\n" RESET);
        n->salary *= 2;
        n->happiness -= 15;
        break;

    default:
        printf("Una giornata noiosa passata a guardare monitor verdi.\n");
        break;
    }
    while (getchar() != '\n')
        ;
}

void verifyRetired(struct Giocatore *p, int *year)
{
    if (strcmp(p->work, "Cassiere") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }

    if (strcmp(p->work, "Militare") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }

    if (strcmp(p->work, "Operaio") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }

    if (strcmp(p->work, "Ingeniere Nu.") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }

    if (strcmp(p->work, "Developer") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }

    if (strcmp(p->work, "Professore") == 0)
    {
        int salary = 0;
        salary = (*year / p->salary) * 100;
        p->salary -= salary;
    }
}

void music(struct Giocatore *m)
{
    int instruments = 0;

    printf(YELLOW "\n\nQuale strumento vuoi suonare?\n" RESET);
    printf(YELLOW "1. Basso | 2. Chitarra | 3. Percussioni | 4. Flauto | 5. Violino:\n" RESET);
    printf(YELLOW "Scelta: " RESET);
    scanf("%d", &instruments);

    if (instruments == 1)
    {
        printf(GREEN BOLD "***HAI INIZIATO A SUONARE IL BASSO***\n\nHai fatto anche amicizia\n" RESET);
        m->iQ += 1;
        m->friends += 1;
    }
    else if (instruments == 2)
    {
        printf(GREEN BOLD "***HAI INIZIATO A SUONARE LA CHITARRA***\n\nHai fatto anche amicizia\n" RESET);
        m->iQ += 1;
        m->friends += 1;
    }
    else if (instruments == 3)
    {
        printf(GREEN BOLD "***HAI INIZIATO A SUONARE PERCUSSIONI***\n\nHai fatto anche amicizia\n" RESET);
        m->iQ += 1;
        m->friends += 1;
    }
    else if (instruments == 4)
    {
        printf(GREEN BOLD "***HAI INIZIATO A SUONARE IL FLAUTO***\n\nHai fatto anche amicizia\n" RESET);
        m->iQ += 1;
        m->friends += 1;
    }
    else
    {
        printf(GREEN BOLD "***HAI INIZIATO A SUONARE IL VIOLINO***\n\nHai fatto anche amicizia\n" RESET);
        m->iQ += 1;
        m->friends += 1;
    }
}

void timeWithFriends(struct Giocatore *f, int *ex)
{
    int spend = 0;

    printf(YELLOW "\n\n***VUOI PASSARE DEL TEMPO CON I TUOI AMICI***\n" RESET);
    printf(YELLOW "1. Strip Club | 2. Cinema | 3. Calcio | 4. Giocare alla PS4/PS5 | 5. Guardare una partita insieme\n" RESET);
    printf(YELLOW "Scelte: " RESET);
    scanf("%d", &spend);

    if (spend == 1)
    {
        printf(BLUE BOLD "\nAvete speso soldi allo strip club\n" RESET);
        f->happiness += 5;
    }
    else if (spend == 2)
    {
        printf(GREEN BOLD "\nSiete andati a vedere un film al cinema\n" RESET);
        f->happiness += 3;
    }
    else if (spend == 3)
    {
        int foot = 0;
        printf(GREEN BOLD "\n\nAvete organizzato una partita a calcio\n" RESET);
        printf(RED BOLD "\n***OCCASIONE DI FARE GOAL***\n\nSei solo davanti la porta a tu per tu col portiere:\n\n" RESET);
        printf(YELLOW "1. Fai il pallonetto | 2. Superi il portiere | 3. La passi al tuo compagno:\n" RESET);
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &foot);

        if (foot == 1)
        {
            printf(GREEN BOLD "\n\n*** GOALLLL***\n" RESET);
            f->healht += 3;
            f->happiness += 4;
            f->fertility += 3;
        }
        else if (foot == 2)
        {
            printf(RED BOLD "\n\n***IL PORTIERE ESCE SULLA TUA GAMBA, TI SEI ROTTO IL MALLEOLO***\n" RESET);
            f->healht -= 2;
            f->happiness -= 1;
        }
        else if (foot == 3)
        {
            printf(BLUE BOLD "\n\n***IL TUO COMPAGNO SBAGLIA A PORTA VUOTA***\n" RESET);
            f->healht += 3;
            f->happiness += 4;
            f->fertility += 3;
        }
    }
    else if (spend == 4)
    {
        printf(GREEN BOLD "\n\n***AVETE PASSATO UNA NOTTE A GIOCARE ALLA PLAYSTATION***\n" RESET);
        f->happiness += 5;
    }
    else if (spend == 5)
    {
        int sched = 0;

        printf(YELLOW "\n***VI GIOCATE UNA SCHEDINA SULLA PARTITA***\n\n" RESET);
        printf(YELLOW "1. Vittoria squadra di casa | 2. [X] Pareggio | 3. [2] Vittoria della squadra in trasferta\n" RESET);
        scanf("%d", &sched);

        if (sched == 1)
        {
            printf(RED BOLD "\n\n***HAI PERSO LA SCHEDINA***\nSoldi scalati\n" RESET);
            f->currentPortfolio -= 10;
        }
        else if (sched == 2)
        {
            printf(GREEN BOLD "\n\n***HAI INDOVINATO***\nTi accreditano soldi\n" RESET);
            f->currentPortfolio += 300;
        }
        else
        {
            printf(RED BOLD "\n\n***HAI PERSO LA SCHEDINA ALL'ULTIMO MINUTO!!***\nTi addebitano soldi\n" RESET);
            f->currentPortfolio -= 5;
        }
    }
}

void timeWithGirfriend(struct Giocatore *grl, int *cson)
{
    int spe2 = 0;

    printf(YELLOW "\n\n***PASSI DEL TEMPO INSIEME ALLA TUA RAGAZZA***\n\n" RESET);
    printf(YELLOW "1. Andate a mangiare il gelato | 2. Fate l'amore | 3. Fate un viaggio insieme:\n" RESET);
    printf(YELLOW "Scelta: " RESET);
    scanf("%d", &spe2);

    if (spe2 == 1)
    {
        printf(GREEN BOLD "\n\n***PASSATE DEI BEI MOMENTI INSIEME***\n" RESET);
        grl->happiness += 3;
    }
    else if (spe2 == 2)
    {
        int pr = 0;
        int keep = 0;

        printf(GREEN BOLD "\n\n***DECIDETE DI DARCI DENTRO***\n" RESET);
        printf(YELLOW "1. Usi protezioni | 2. Non usi protezioni:\n" RESET);
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &pr);

        if (pr == 1)
        {
            printf(BLUE "\n\n***LO AVETE FATTO CON PROTEZIONI***\n" RESET);
            grl->happiness += 5;
        }
        else if (pr == 2)
        {
            printf(BLUE "\n\n***LO AVETE FATTO SENZA***\n" RESET);
            if (grl->fertility >= 50)
            {
                printf(RED BOLD "\nLa tua ragazza ora è rimasta incinta\nVuoi tenerlo? (1=SI, 0=nO)\nScelta: " RESET);
                scanf("%d", &keep);
                if (keep == 1)
                {
                    (*cson)++;
                }
            }
        }
    }
    else if (spe2 == 3)
    {
        printf("***AVETE FATTO UN ESPERIENZA NUOVA***\n");
    }
}

void probDiseases(struct Giocatore *mental, int *rolls, int *dis)
{
    // Genera un nuovo roll ogni volta che viene chiamata
    *rolls = (rand() % 10) + 1;

    switch (*rolls)
    {
    case 1:
        printf("\n*** I TUOI GENITORI HANNO DIVORZIATO ***\n");
        mental->mentalHealth -= 15;
        mental->happiness -= 20;
        break;
    case 2:
        printf("\n*** TUA MADRE HA SUBITO UN INCIDENTE E NON C'E' PIU' ***\n");
        mental->mentalHealth -= 25;
        mental->happiness -= 30;
        // Qui potresti mettere un flag per segnare che la madre è morta
        break;
    case 3:
        printf("\n*** COMINCI A SOFFRIRE DI ANSIA GENETICA ***\n");
        mental->mentalHealth -= 10;
        break;
    case 4:
        printf("\n*** VEDI COSE CHE ALTRI NON VEDONO (SCHIZOFRENIA) ***\n");
        mental->mentalHealth -= 40;
        mental->iQ -= 10; // La confusione mentale abbassa l'IQ
        break;
    case 5:
        printf("\n*** INSONNIA FAMILIARE FATALE [INCURABILE] ***\n");
        printf("Non dormirai mai piu' bene. La tua vita sara' breve.\n");
        mental->healht -= 20;
        mental->mentalHealth -= 50;
        break;
    case 6:
        printf("\n*** SEI VITTIMA DI BULLISMO: ATTACCHI DI RABBIA ***\n");
        mental->happiness -= 15;
        mental->mentalHealth -= 10;
        break;
    case 7:
        printf("\n*** HAI VISTO SCENE DI TERRORISMO: PTSD ***\n");
        mental->mentalHealth -= 20;
        mental->happiness -= 15;
        break;
    case 8:
        printf("\n*** GENITORI MALTRATTANTI: DISTURBO DDI ***\n");
        mental->mentalHealth -= 45;
        mental->happiness -= 30;
        break;
    case 9:
        printf("\n*** UN CARO AMICO E' MORTO. TRAUMA DA LUTTO ***\n");
        mental->happiness -= 25;
        mental->mentalHealth -= 10;
        break;
    case 10:
        printf("\n*** SEI RIMASTO SOLO. VIVI IN ORFANATROFIO ***\n");
        mental->healht -= 10;
        mental->mentalHealth -= 30;
        mental->happiness -= 40;
        break;
    default:
        return;
    }

    *dis = 1;
}

void rehab(struct Giocatore *rb, int *add, int *pror, int *ludp)
{
    if (*pror == 5)
    {
        printf(GREEN BOLD "\n\n*** COSTO RIABILITAZIONE: [20.000$]\nSaldo: [%.2f]\n" RESET, rb->currentPortfolio);
        printf(GREEN BOLD "\n\n*** TI SEI RIABILITATO ***\n" RESET);
        rb->currentPortfolio -= 20000;
        printf(YELLOW "------------------------------------------------------------\n" RESET);
        printf(RED BOLD "Saldo dopo transazione: [%.2f]\n" RESET, rb->currentPortfolio);

        (*add)--;
        (*ludp)--;
    }
    else
    {
        printf("\n\n*** NON SEI RIUSCITO A LIBERARTENE ***");
    }
}

void shop(struct Giocatore *sh, int tl)
{
    int things = 0;

    printf(YELLOW "\n\n--- SHOPPING ---\n" RESET);
    printf(YELLOW "\n1.Gioielli | 2.Case | 3.Automobili | 4.Aerei | 5.Animali da compagnia\n" RESET);
    printf(YELLOW "Scelta: " RESET);
    scanf("%d", &things);

    switch (things)
    {
    case 1:
        int jews = 0;

        printf(BLUE BOLD "1.Collana diamanti [15.000$] | 2.Anello argento [500$] | 3.Anello oro [5.000$] | 4.Anello diamante [25.000$]\n" RESET);
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &jews);

        if (jews == 1)
        {
            if (sh->currentPortfolio < 15000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 15000;
            }
        }

        if (jews == 2)
        {
            if (sh->currentPortfolio < 500)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 500;
            }
        }

        if (jews == 3)
        {
            if (sh->currentPortfolio < 5000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 5000;
            }
        }

        if (jews == 4)
        {
            if (sh->currentPortfolio < 25000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 25000;
            }
        }

        break;
    case 2:
        if (sh->age < 18)
        {
            printf("\n\n*** SEI TROPPO PICCOLO ***\n");
        }
        int house = 0;

        printf(BLUE BOLD "1.Villa [200.000$] | 2.Appartamento [15.000$] \n" RESET);
        printf(YELLOW "Scelta; " RESET);
        scanf("%d", &house);

        if (house == 1)
        {
            if (sh->currentPortfolio < 200000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 200000;
            }
        }

        if (house == 2)
        {
            if (sh->currentPortfolio < 15000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 15000;
            }
        }

        break;
    case 3:
        if (sh->age < 18 || tl == 0)
        {
            printf("\n*** NON HAI LA PATENTE ***\n");
            break;
        }
        int autos = 0;
        printf(BLUE BOLD "\n1.Wolkswagen [9.800$] | 2.Ferrari [175.000$] | 3.Fiat Panda [2.300$] | 4.Lamborghini [117.100$] | 5.McLaren [200.000$]\n" RESET);
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &autos);

        if (autos == 1)
        {
            if (sh->currentPortfolio < 9800)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 9800;
            }
        }

        if (autos == 2)
        {
            if (sh->currentPortfolio < 175000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 175000;
            }
        }

        if (autos == 3)
        {
            if (sh->currentPortfolio < 2300)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 2300;
            }
        }

        if (autos == 4)
        {
            if (sh->currentPortfolio < 117100)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 117100;
            }
        }

        if (autos == 5)
        {
            if (sh->currentPortfolio < 200000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 2000000;
            }
        }
        break;
    case 4:
        if (sh->age < 18)
        {
            printf("\n*** NON HAI LA PATENTE ***\n");
            break;
        }
        int det = 0;
        printf(BLUE BOLD "1.Jet privato [1.000.000$] | 2.Elicottero [850.000]\n" RESET);
        scanf("%d", &det);

        if (det == 1)
        {
            if (sh->currentPortfolio < 1000000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 1000000;
            }
        }

        if (det == 2)
        {
            if (sh->currentPortfolio < 850000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 850000;
            }
        }
        break;
    case 5:
        int shelter = 0;
        printf(BLUE BOLD "1.BullDog [3.200$] | 2.Pit Bull [5.000$] | 3.Barboncino [1.000$]\n" RESET);
        printf(YELLOW "Scelta: " RESET);
        scanf("%d", &shelter);

        if (shelter == 1)
        {
            if (sh->currentPortfolio < 3200)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 3200;
            }
        }

        if (shelter == 2)
        {
            if (sh->currentPortfolio < 5000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 5000;
            }
        }

        if (shelter == 3)
        {
            if (sh->currentPortfolio < 1000)
            {
                printf("\n*** NON HAI ABBASTANZA DENARO ***\n");
            }
            else
            {
                printf("\n*** ACQUISTO EFFETTUATO ***\n");
                sh->currentPortfolio -= 1000;
            }
        }
        break;
    default:
        break;
    }
}

void emigrate(struct Giocatore *em, int *cntlove, int cnt, int *pris, int *snt)
{
    int newp = 0;
    int illegal = 0;
    int ilprob = (rand() % 2) + 1;

    printf(GREEN BOLD "\n\n*** PAESI DISPONIBILI PER EMIGRARE ***\n" RESET);
    printf(YELLOW "1.Arabia | 2.Colombia | 3.Croazia | 4.Inghilterra\n" RESET);
    printf(YELLOW "Scelta: " RESET);
    scanf("%d", &newp);

    if (newp == 1)
    {
        if (cnt == 1)
        {
            printf(GREEN "\n\n*** BENVENUTO IN ARABIA ***\n" RESET);
            em->currentPortfolio -= 4200;
            printf(RED BOLD "\n\nHai pagato 4.200$\nSaldo: %.2f\n" RESET, em->currentPortfolio);
            (*cntlove) = 0;
        }
        else if (em->currentPortfolio < 100000)
        {
            printf(RED BOLD "\n\n*** RICHIESTA NON APPROVATA ***\n" RESET);
            printf(YELLOW "\n\nVuoi emigrare illegalmente?\n" RESET);
            printf(YELLOW "Scelta: " RESET);
            scanf("%d", &illegal);

            if (ilprob == 1)
            {
                printf(RED BOLD "\n\n*** LA POLIZIA TI HA SCOPERTO, VAI IN PRIGIONE ***\n" RESET);
                (*pris)++;
                (*snt) = 20;
                strcpy(em->sentence, "Immigrazione");
            }
        }
    }
    else if (newp == 2)
    {
        if (cnt == 1)
        {
            printf(GREEN BOLD "\n\n*** BENVENUTO IN COLOMBIA ***\n" RESET);
            em->currentPortfolio -= 2200;
            printf(RED BOLD "\n\nHai pagato 2.200$\nSaldo: %.2f\n" RESET, em->currentPortfolio);
            (*cntlove) = 0;
        }
        else if (em->currentPortfolio < 100000)
        {
            printf(RED BOLD "\n\n*** RICHIESTA NON APPROVATA ***\n" RESET);
            printf(YELLOW "\n\nVuoi emigrare illegalmente?\n" RESET);
            printf(YELLOW "Scelta: " RESET);
            scanf("%d", &illegal);

            if (ilprob == 1)
            {
                printf(RED BOLD "\n\n*** LA POLIZIA TI HA SCOPERTO, VAI IN PRIGIONE ***\n" RESET);
                (*pris)++;
                (*snt) = 10;
                strcpy(em->sentence, "Immigrazione");
            }
        }
    }
    else if (newp == 3)
    {
        if (cnt == 1)
        {
            printf(GREEN BOLD "\n\n*** BENVENUTO IN CROAZIA ***\n" RESET);
            em->currentPortfolio -= 4500;
            printf(RED BOLD "\n\nHai pagato 4.500$\nSaldo: %.2f\n" RESET, em->currentPortfolio);
            (*cntlove) = 0;
        }
        else if (em->currentPortfolio < 100000)
        {
            printf(RED BOLD "\n\n*** RICHIESTA NON APPROVATA ***\n" RESET);
            printf(YELLOW "\n\nVuoi emigrare illegalmente?\n" RESET);
            printf(YELLOW "Scelta: " RESET);
            scanf("%d", &illegal);

            if (ilprob == 1)
            {
                printf(RED BOLD "\n\n*** LA POLIZIA TI HA SCOPERTO, VAI IN PRIGIONE ***\n" RESET);
                (*pris)++;
                (*snt) = 5;
                strcpy(em->sentence, "Immigrazione");
            }
        }
    }
    else if (newp == 4)
    {
        if (cnt == 1)
        {
            printf(GREEN BOLD "\n\n*** BENVENUTO IN INGHILTERRA ***\n" RESET);
            em->currentPortfolio -= 17200;
            printf(RED BOLD "\n\nHai pagato 17.200$\nSaldo: %.2f\n" RESET, em->currentPortfolio);
            (*cntlove) = 0;
        }
        else if (em->currentPortfolio < 100000)
        {
            printf(RED BOLD "\n\n*** RICHIESTA NON APPROVATA ***\n" RESET);
            printf(YELLOW "\n\nVuoi emigrare illegalmente?\n" RESET);
            printf(YELLOW "Scelta: " RESET);
            scanf("%d", &illegal);

            if (ilprob == 1)
            {
                printf(RED BOLD "\n\n*** LA POLIZIA TI HA SCOPERTO, VAI IN PRIGIONE ***\n" RESET);
                (*pris)++;
                (*snt) = 15;
                strcpy(em->sentence, "Immigrazione");
            }
        }
    }
}

void hackingProbabilities(struct Giocatore *hack)
{
    int rollHacking = (rand() % 4) + 1;
    int payload = 0;

    if (rollHacking == 1)
    {
        printf("\n\n*** [MISSIONE INTELLIGENCE] SERVER TARGET NEMICO TROVATO SUL DARK WEB ***\n\n");
        printf("Scegli un Payload da iniettare:\n\n");
        printf("1. [DDOS] (Destributed - Denial Of Service) | 2. [SOCIAL ENGINEERING]\n");
        printf("Scelta: ");
        scanf("%d", &payload);

        if (payload == 1)
        {
            int totale = 100;
            int lengthBar = 20;

            for (int i = 0; i <= totale; i++)
            {
                float perCent = (float)i / totale;
                int riemp = perCent * lengthBar;

                printf(RED BOLD "[+] LOG BRUTE FORCE [%d]\n" RESET, i);

                printf(GREEN BOLD "\rProgress: [" RESET);
                for (int j = 0; j < lengthBar; j++)
                {
                    if (j < riemp)
                        printf("#");
                    else
                        printf("-");
                }
                printf("] %d%%", (int)(perCent * 100));

                fflush(stdout);
                usleep(30000);
            }

            printf(GREEN BOLD "\n\n[SERVER CRASHED]: MISSIONE COMPIUTA\n\n" RESET);
        }

        if (payload == 2)
        {
            printf(GREEN BOLD "\n\n*** TI SEI FINTO UN TECNICO, ORA HAI LE CREDENZIALI PER RUBARE DATI ***\n\n" RESET);
        }
    }
    else if (rollHacking == 2)
    {
        printf(RED BOLD "\n\n*** [PERICOLO TERRORISMO] HAI TROVATO DEI MESSAGGI CRIPTATI DI UNA CELLULA TERRORISTICA, TROVA LA GIUSTA KEY ***\n\n" RESET);

        char messaggioCifrato[] = {85, 105, 122, 122, 101, 126, 0};
        int chiaveUtente = 0;
        int chiaveCorretta = 10;
        int tentativi = 3;

        printf("\n--- [INTERCETTAZIONE] ---\n");
        printf("Hai recuperato un file criptato: %s\n", messaggioCifrato);
    loop4:
        printf("Inserisci la chiave numerica (0-255) per tentare la decriptazione: ");
        scanf("%d", &chiaveUtente);

        printf("\nRisultato tentativo: ");
        for (int i = 0; messaggioCifrato[i] != '\0'; i++)
        {
            char carattereDecriptato = messaggioCifrato[i] ^ chiaveUtente;
            printf("%c", carattereDecriptato);
        }

        if (chiaveUtente != chiaveCorretta)
        {
            if (tentativi < 1)
            {
                printf("\n\n*** MISSIONE FALLITA, ATTACCO TERRORISTICO NON SVENTATO ***\n\n");
            }
            else
            {
                printf("[ERROR KEY] Tentativi rimasti: [%d]\n\n", tentativi);
                goto loop4;
            }
        }
        else if (chiaveUtente == chiaveCorretta)
        {
            printf("\n\n[SUCCESSO] Messaggio decifrato! Il codice era: 'ATTACCO'\n");
        }
    }
    else if (rollHacking == 3)
    {
        printf(BLUE BOLD "\n\n*** [ESFILTRAZIONE DATI DA DATABASE NEMICO] ***\n\n" RESET);
        int sceltaIndirizzo;

        printf(GREEN BOLD "Accesso alla RAM ottenuto. Trova il settore con i dati criptati:\n" RESET);
        printf(YELLOW BOLD "1. [0x7FFD1] - Settore Sistema\n" RESET);
        printf(RED BOLD "2. [0x0042A] - Database Utenti\n" RESET);
        printf(BLUE BOLD "3. [0x11BCC] - File System\n" RESET);
        printf("Scegli l'indirizzo: ");
        scanf("%d", &sceltaIndirizzo);

        if (sceltaIndirizzo == 2)
        {
            printf(GREEN BOLD "[SUCCESS] Download in corso: 100%%... Dati esfiltrati!\n" RESET);
            hack->currentPortfolio += 5000;
        }
        else
        {
            printf(RED BOLD "[FAIL] Allarme attivato! Il database ha rilevato l'intrusione.\n" RESET);
        }
    }
    else
    {
        int sequenza[3] = {2, 4, 16};
        int risposta;
        int tentativi = 2;
        bool protetto = false;

        printf(BLUE BOLD "\n*** [CRIPTAZIONE DATI DEL TUO FORUM SEGRETO] ***\n\n" RESET);
        printf(RED BOLD "ATTENZIONE: La Polizia sta tentando un attacco Brute Force!\n\n" RESET);
        printf(YELLOW "Per blindare il database, completa la sequenza logica del salto di bit:\n\n" YELLOW);
        printf(YELLOW "Sequenza: %d, %d, %d, [?]\n" RESET, sequenza[0], sequenza[1], sequenza[2]);

        while (tentativi > 0 && !protetto)
        {
            printf(GREEN "Inserisci il prossimo valore (Tentativi rimasti: %d): " RESET, tentativi);
            scanf("%d", &risposta);

            // La logica è elevamento a potenza del precedente: 2*2=4, 4*4=16, 16*16=256
            if (risposta == 256)
            {
                printf(GREEN BOLD "\n[+] Protocollo AES-256 attivato con successo. Connessioni nemiche rifiutate.\n" RESET);
                protetto = true;
            }
            else
            {
                tentativi--;
                if (tentativi > 0)
                    printf(RED BOLD "[!] Errore nel Checksum. Il firewall sta cedendo...\n" RESET);
            }
        }

        if (!protetto)
        {
            printf(RED BOLD "\n[VULNERABILE] Il database e' stato decriptato. I log del forum sono in mano ai SS!\n" RESET);
        }
    }
}

void blackJack(struct Giocatore *black, int *ludo)
{
    int lose = 1;
    int manoG[10], manoB[10]; // Array per contenere fino a 10 carte
    int nG = 0, nB = 0;       // Contatori per quante carte hanno in mano
    int totG = 0, totB = 0;

    printf(YELLOW BOLD "\n\n--- BENVENUTO ALLO STAR CASINO ---\n\n" RESET);

    // 1. DISTRIBUZIONE INIZIALE
    manoG[nG++] = (rand() % 10) + 1;
    manoG[nG++] = (rand() % 10) + 1;
    totG = manoG[0] + manoG[1];

    manoB[nB++] = (rand() % 10) + 1; // Prima carta scoperta
    totB = manoB[0];
    int cartaNascosta = (rand() % 10) + 1; // La seconda resta segreta per ora
    int totB_reale = totB + cartaNascosta;

    printf(RED BOLD "||| IL BANCO TI STA DANDO LE CARTE |||\n\n" RESET);

    while (lose == 1)
    {
        // STAMPA INTERO MAZZO GIOCATORE
        printf(YELLOW "*** IL TUO MAZZO: " RESET);
        for (int i = 0; i < nG; i++)
            printf("| %d | ", manoG[i]);
        printf(GREEN " (Totale: %d) ***\n" RESET, totG);

        // STAMPA MAZZO BANCO (Mostra solo la prima finché il giocatore non passa)
        printf("*** MAZZO BANCO: | %d | | ? | ***\n\n", manoB[0]);

        if (totG > 21)
        {
            printf(RED BOLD "!!! HAI SBALLATO !!! PERDI [800$]\n" RESET);
            black->currentPortfolio -= 800;
            break;
        }

        int scelta;
        printf(YELLOW "1. Pesca | 2. Passa | : " RESET);
        scanf("%d", &scelta);

        if (scelta == 1)
        {
            int nuova = (rand() % 10) + 1;
            manoG[nG++] = nuova;
            totG += nuova;
            printf(GREEN BOLD "\n--- HAI PESCATO UNA CARTA ---\n" RESET);
        }
        else
        {
            // TURNO DEL BANCO
            printf(BLUE BOLD "\n--- IL BANCO SCOPRE LA CARTA NASCOSTA ---" RESET);
            manoB[nB++] = cartaNascosta;
            totB = totB_reale;

            while (totB < 17)
            {
                int nuovaB = (rand() % 10) + 1;
                manoB[nB++] = nuovaB;
                totB += nuovaB;
            }

            // STAMPA FINALE MAZZO BANCO
            printf(BLUE BOLD "\n*** MAZZO BANCO FINALE: " RESET);
            for (int i = 0; i < nB; i++)
                printf("| %d | ", manoB[i]);
            printf(GREEN " (Totale: %d) ***\n" RESET, totB);

            // VERIFICA VINCITORE
            if (totB > 21 || totG > totB)
            {
                printf(GREEN BOLD "!!! HAI VINTO !!! [+1.000$]\n" RESET);
                black->currentPortfolio += 1000;
            }
            else if (totG == totB)
            {
                printf(BLUE BOLD "--- PAREGGIO ---\n" RESET);
            }
            else
            {
                printf(RED BOLD "--- IL BANCO VINCE --- PERDI [800$]\n" RESET);
                black->currentPortfolio -= 800;
            }
            lose = 0;
        }
    }

    if ((rand() % 10) + 1 == 5)
    {
        printf(RED BOLD "\n*** ATTENZIONE: La dipendenza dal gioco aumenta... SEI LUDOPATICO! ***\n" RESET);
        (*ludo)++;
    }
}

void crimes(struct Giocatore *crim, int *crimCount, int *ratingCrim, int *prs, int *kd, int *lvCnt, int *sCnt, int *proe)
{
    int chooseCrime = 0;
    // Probabilità generate all'inizio della funzione
    int probPolice = (rand() % 7) + 1;

    printf(RED BOLD "\n\n--- MENU CRIMINE ---\n" RESET);
    printf(YELLOW BOLD "1.Ruba | 2.Uccidi | 3.Rapina Banca | 4.Ruba Macchina\nScelta: " RESET);
    scanf("%d", &chooseCrime);

    switch (chooseCrime)
    {
    case 1:
    {
        int caseCrime = 0;
        int approach = 0;

        printf(YELLOW BOLD "\n1.Villa | 2.Store | 3.Appartamento\nScelta: " RESET);
        scanf("%d", &caseCrime);

        if (caseCrime == 1)
        {
            if (probPolice == 2)
            {
                printf(RED BOLD "\n*** POLIZIA! TI HANNO PRESO ***\n" RESET);
                (*crimCount) += 2;
                (*ratingCrim)++;
                (*prs)++;
                (*proe) = 5;
                strcpy(crim->sentence, "Furto domiciliare");
            }
            else
            {
                printf(GREEN BOLD "\n*** SUCCESSO! HAI RUBATO [2.300$] DI [PS5 E CONTANTI] ***\n" RESET);
                crim->currentPortfolio += 2300;
                (*crimCount) += 5;
                (*ratingCrim)++;
            }
        }
        else if (caseCrime == 2)
        {
            if (probPolice == 4)
            {
                printf(RED BOLD "\n*** METAL DETECTOR! ARRIVA LA POLIZIA ***\n" RESET);
                (*crimCount) += 2;
                (*ratingCrim)++;
                (*prs)++;
                (*proe) = 5;
                strcpy(crim->sentence, "Furto domiciliare");
            }
            else
            {
                printf(GREEN BOLD "\n*** SUCCESSO! HAI RUBATO [4.500$] DI [VESTITI] ***\n" RESET);
                crim->currentPortfolio += 4500;
                (*crimCount) += 5;
                (*ratingCrim)++;
            }
        }
        else if (caseCrime == 3)
        {
            printf(YELLOW BOLD "\n\n--- DECIDI APPROCCIO ---\n\n" RESET);
            printf(BLUE BOLD "1.Di notte | 2.Di giorno |\n" RESET);
            printf(YELLOW BOLD "Scelta: " RESET);
            scanf("%d", &approach);

            if (approach == 1)
            {
                printf(RED BOLD "\n\n*** I PROPRIETARI SONO TORNATI PRIMA DEL PREVISTO, SEI ARRESTATO ***\n\n" RESET);
                (*crimCount) += 2;
                (*ratingCrim)++;
                (*prs)++;
                (*proe) = 5;
                strcpy(crim->sentence, "Furto domiciliare");
            }
            else
            {
                printf(RED BOLD "\n\n*** LA POLIZIA TI AVEVA VISTO PRECEDENTEMENTE ***\n\n" RESET);
                (*crimCount) += 2;
                (*ratingCrim)++;
                (*prs)++;
                (*proe) = 5;
                strcpy(crim->sentence, "Furto domiciliare");
            }
        }
        break;
    }

    case 2:
    {
        int chooseWhoToKill = 0;
        int probKilled = (rand() % 2) + 1;
        int chooseConoscent = 0;
        printf(YELLOW BOLD "\n1.Random | 2.Conoscenti\nScelta: " RESET);
        scanf("%d", &chooseWhoToKill);

        if (chooseWhoToKill == 1)
        {
            if (probKilled == 2)
            {
                printf(RED BOLD "*** NON CI SEI RIUSCITO. ARRESTATO! ***\n" RESET);
                (*crimCount) += 3;
                (*prs)++;
                (*ratingCrim)++;
                (*proe) = 25;
                strcpy(crim->sentence, "Omicidio");
            }
            else
            {
                printf(RED BOLD "*** HAI UCCISO UNA PERSONA!! ***\n" RESET);
                (*kd)++;
                (*crimCount) += 6;
                (*ratingCrim)++;
            }
        }
        else if (chooseWhoToKill == 2)
        {
            printf(BLUE BOLD "\n\n1.Amico (coltellata) | 2.Tua ragazza (forchetta) | 3.Tuo figlio (avveleni)\n" RESET);
            printf(YELLOW BOLD "Scelta: " RESET);
            scanf("%d", &chooseConoscent);

            if (chooseConoscent == 1)
            {
                if (probKilled == 1)
                {
                    printf(RED BOLD "*** NON CI SEI RIUSCITO. ARRESTATO! ***\n" RESET);
                    (*crimCount) += 3;
                    (*prs)++;
                    (*ratingCrim)++;
                    (*proe) = 25;
                    strcpy(crim->sentence, "Omicidio");
                }
                else
                {
                    printf(RED BOLD "*** HAI UCCISO UN TUO AMICO!! ***\n" RESET);
                    (*kd)++;
                    (*crimCount) += 6;
                    (*ratingCrim)++;
                    crim->friends -= 1;
                }
            }
            else if (chooseConoscent == 2 && *lvCnt >= 1)
            {
                if (probKilled == 2)
                {
                    printf(RED BOLD "*** NON CI SEI RIUSCITO. ARRESTATO! ***\n" RESET);
                    (*crimCount) += 3;
                    (*prs)++;
                    (*ratingCrim)++;
                    (*proe) = 25;
                    strcpy(crim->sentence, "Omicidio");
                }
                else
                {
                    printf(RED BOLD "*** HAI UCCISO LA TUA RAGAZZA!! ***\n" RESET);
                    (*kd)++;
                    (*crimCount) += 6;
                    (*ratingCrim)++;
                    (*lvCnt)--;
                }
            }
            else if (chooseConoscent == 3 && *sCnt >= 1)
            {
                if (probKilled == 1)
                {
                    printf(RED BOLD "*** NON CI SEI RIUSCITO. ARRESTATO! ***\n" RESET);
                    (*crimCount) += 3;
                    (*prs)++;
                    (*ratingCrim)++;
                    (*proe) = 35;
                    strcpy(crim->sentence, "Omicidio");
                }
                else
                {
                    printf(RED BOLD "*** HAI UCCISO TUO FIGLIO!! ***\n" RESET);
                    (*kd)++;
                    (*crimCount) += 6;
                    (*ratingCrim)++;
                    (*sCnt)--;
                }
            }
        }
        break;
    }

    case 3:
    {
        if (strcmp(crim->work, "Mafioso") == 0)
        {
            if (probPolice == 5)
            {
                printf(RED BOLD "\n*** RAPINA FALLITA! ***\n" RESET);
                (*crimCount) += 5;
                (*prs)++;
                (*ratingCrim)++;
                (*proe) = 15;
                strcpy(crim->sentence, "Associazione mafiosa");
            }
            else
            {
                printf(RED BOLD "\n*** COLPO IN BANCA RIUSCITO! [+50.000$] ***\n" RESET);
                crim->currentPortfolio += 50000;
                (*crimCount) += 11;
                (*ratingCrim)++;
            }
        }
        else
        {
            printf(RED BOLD "\n--- NON SEI NELLA MAFIA! ---\n" RESET);
        }
        break;
    }

    case 4:
    {
        int chooseCar = 0;
        int probCar = (rand() % 10) + 1;

        printf(YELLOW BOLD "\n\n--- SCEGLI UNA MACCHINA DA RUBARE E VENDERE ---\n\n" RESET);
        printf(BLUE BOLD "1. Fiat Panda (Facile - 500$) | 2. Renault (Media - 1.500$)\n" RESET);
        printf(BLUE BOLD "3. Toyota Aygo (Sicura - 1.000$) | 4. Maserati (Difficile - 15.000$)\n" RESET);
        printf(YELLOW BOLD "Scelta: " RESET);
        scanf("%d", &chooseCar);

        if (chooseCar == 1)
        {
            if (probCar <= 2)
            {
                printf(RED BOLD "\n*** L'ALLARME DELLA PANDA E' SCATTATO! POLIZIA IN ARRIVO! ***\n" RESET);
                (*crimCount) += 2;
                (*ratingCrim) += 5;
                (*prs)++;
                (*proe) = 6;
                strcpy(crim->sentence, "Furto auto");
            }
            else
            {
                printf(GREEN BOLD "\n*** PANDA RUBATA E VENDUTA AL RICETTATORE PER 500$ ***\n" RESET);
                crim->currentPortfolio += 500;
                (*crimCount) += 3;
                (*ratingCrim) += 2;
            }
        }
        else if (chooseCar == 2)
        {
            if (probCar <= 4)
            {
                printf(RED BOLD "\n*** IL PROPRIETARIO ERA UN POLIZIOTTO IN BORGHESE! MANETTE! ***\n" RESET);
                (*crimCount) += 4;
                (*ratingCrim) += 10;
                (*prs)++;
                (*proe) = 6;
                strcpy(crim->sentence, "Furto auto");
            }
            else
            {
                printf(GREEN BOLD "\n*** RENAULT PIAZZATA SUL MERCATO NERO PER 1.500$ ***\n" RESET);
                crim->currentPortfolio += 1500;
                (*crimCount) += 5;
                (*ratingCrim) += 5;
            }
        }
        else if (chooseCar == 3)
        {
            if (probCar == 1)
            {
                printf(RED BOLD "\n*** UN PASSANTE HA FOTOGRAFATO LA TARGA! SEI RICERCATO ***\n" RESET);
                (*ratingCrim) += 8;
                (*prs)++;
                (*proe) = 6;
                strcpy(crim->sentence, "Furto auto");
            }
            else
            {
                printf(GREEN BOLD "\n*** TOYOTA AYGO RUBATA SENZA TRACCE! [+1.000$] ***\n" RESET);
                crim->currentPortfolio += 1000;
                (*crimCount) += 4;
                (*ratingCrim) += 4;
            }
        }
        else if (chooseCar == 4)
        {
            if (probCar <= 7)
            {
                printf(RED BOLD "\n*** IL GPS SATELLITARE DELLA MASERATI TI HA TRADITO! ARRESTATO! ***\n" RESET);
                (*crimCount) += 10;
                (*ratingCrim) += 30;
                (*prs)++;
                (*proe) = 6;
                strcpy(crim->sentence, "Furto auto");
            }
            else
            {
                printf(GREEN BOLD "\n*** COLPO PAZZESCO! MASERATI VENDUTA ALL'ESTERO PER 15.000$ ***\n" RESET);
                crim->currentPortfolio += 15000;
                (*crimCount) += 15;
                (*ratingCrim) += 25;
            }
        }
        else
        {
            printf(BLUE BOLD "\n--- HAI ESITATO TROPPO E LA MACCHINA SE N'E' ANDATA --- \n" RESET);
        }
        break;
    }

    default:
    {
        printf(BLUE BOLD "\nScelta non valida!\n" RESET);
        break;
    }
    } // FINE SWITCH

    // LIMITI STATISTICHE
    if (*crimCount > 100)
    {
        *crimCount = 100;
    }
    if (*crimCount < 0)
    {
        *crimCount = 0;
    }
}

void prisionJail(struct Giocatore *prj)
{
    printf(GREEN BOLD "\n\n*** TI SEI ALLENATO IN PALESTRA ***\n\n" RESET);
    prj->healht += 3;
    prj->fertility += 1;
    prj->happiness += 1;
    prj->mentalHealth += 1;
}

void sentenceRewiew(struct Giocatore *stR, int *sProb, int *prss)
{
    int chooseSentence = 0;

    printf(YELLOW BOLD "\n\n--- SEI AL TRIBUNALE PER LA TUA SENTENZA ---\n\n" RESET);
    printf(YELLOW BOLD "--- PUOI CHIEDERE DI FARLA SCENDERE A DIEVRSI AVVOCATI (ufficio - personali) ---\n\n" RESET);
    printf(RED BOLD "1.Plead & Guilty | Avvocati personali | Costo: 156.000$\n" RESET);
    printf(RED BOLD "2.Giuridicy | Avvocati d'ufficio | Costo: GRATIS\n" RESET);
    printf(RED BOLD "3.Decidi di lasciare la sentenza come era prima\n" RESET);
    printf(YELLOW BOLD "Scelta: " RESET);
    scanf("%d", &chooseSentence);

    if (chooseSentence == 1 && stR->currentPortfolio >= 156000)
    {
        if (strcmp(stR->sentence, "Immigrazione") == 0)
        {
            printf(GREEN BOLD "\n\n*** PENA DIMINUITA DI 10 ANNI ***\n\n" RESET);
            (*sProb) -= 10;
            stR->currentPortfolio -= 156000;
        }
        if (strcmp(stR->sentence, "Omicidio") == 0)
        {
            printf(GREEN BOLD "\n\n*** PENA DIMINUITA DI 8 ANNI ***\n\n" RESET);
            (*sProb) -= 8;
            stR->currentPortfolio -= 156000;
        }
        if (strcmp(stR->sentence, "Furto domiciliare") == 0)
        {
            printf(GREEN BOLD "\n\n*** SEI USCITO DI PRIGIONE ***\n\n" RESET);
            (*sProb) = 0;
            (*prss) = 0;
            stR->currentPortfolio -= 156000;
        }
        if (strcmp(stR->sentence, "Furto auto") == 0)
        {
            printf(GREEN BOLD "\n\n*** SEI USCITO DI PRIGIONE ***\n\n" RESET);
            (*sProb) = 0;
            (*prss) = 0;
            stR->currentPortfolio -= 156000;
        }
        if (strcmp(stR->sentence, "Associazione mafiosa") == 0)
        {
            printf(GREEN BOLD "\n\n*** PENA DIMINUITA DI 5 ANNI ***\n\n" RESET);
            (*sProb) -= 5;
            stR->currentPortfolio -= 156000;
        }
    }
    else if (chooseSentence == 2)
    {
        if (strcmp(stR->sentence, "Immigrazione") == 0)
        {
            printf(RED BOLD "\n\n*** OFFERTA RESPINTA ***\n\n" RESET);
        }
        if (strcmp(stR->sentence, "Omicidio") == 0)
        {
            printf(RED BOLD "\n\n*** OFFERTA RESPINTA ***\n\n" RESET);
        }
        if (strcmp(stR->sentence, "Furto domiciliare") == 0)
        {
            printf(YELLOW BOLD "\n\n*** PENA DIMINUITA DI 1 ANNO ***\n\n" RESET);
            (*sProb) -= 1;
        }
        if (strcmp(stR->sentence, "Furto auto") == 0)
        {
            printf(YELLOW BOLD "\n\n*** PENA DIMINUITA DI 2 ANNI ***\n\n" RESET);
            (*sProb) -= 2;
        }
        if (strcmp(stR->sentence, "Associazione mafiosa") == 0)
        {
            printf(RED BOLD "\n\n*** OFFERTA RESPINTA ***\n\n" RESET);
        }
    }
    else
    {
        printf(BLUE BOLD "\n\n*** LA TUA SENTENZA RIMANE UGUALE ***\n\n" RESET);
    }
}

void medicJail(struct Giocatore *medic)
{
    int probMedical = (rand() % 2) + 1;

    printf(YELLOW BOLD "\n\n--- CHIEDI ALLE GUARDIE DI ANDARE IN INFERMIERIA ---\n\n" RESET);
    if (probMedical == 1)
    {
        printf(RED BOLD "\n\n*** LE GUARDIA NON HANNO VOLUTO ***\n\n" RESET);
    }
    else if (probMedical == 2)
    {
        printf(GREEN BOLD "*** SEI ANDATO IN INFERMIERIA ***\n\n" RESET);
        printf(GREEN BOLD "*** LA TUA SALUTE MIGLIORA LEGGERMENTE ***\n\n" RESET);
        medic->healht += 3;
    }
}

void mess(struct Giocatore *sqeeze, int *pseNt)
{
    int strong = 0;

    printf(RED BOLD "\n\n--- VUOI PICCHIARE UN ALTRO DETENUTO ---\n\n" RESET);
    printf(YELLOW BOLD "Quale mossa usi?\n" RESET);
    printf(BLUE BOLD "1.Gancio destro\n" RESET);
    printf(RED BOLD "2.Calcio rotante\n" RESET);
    printf(YELLOW BOLD "3.Calcio nelle parti basse\n" RESET);
    printf(GREEN BOLD "4.Pugni sulla nuca\n" RESET);
    printf(RED BOLD "5.Calcio in faccia\n" RESET);
    printf(YELLOW BOLD "Scelta: " RESET);
    scanf("%d", &strong);

    if (strong == 1)
    {
        printf(RED BOLD "\n\n*** HAI PICCHIATO FORTEMENTE UN DETENUTO, PENA AUMENTATA ***\n\n" RESET);
        sqeeze->happiness -= 3;
        (*pseNt) += 3;
    }
    else if (strong == 2)
    {
        printf(RED BOLD "\n\n*** LO HAI MANCATO E LUI TI PICCHIA ***\n\n" RESET);
        sqeeze->healht -= 10;
        sqeeze->happiness -= 5;
        sqeeze->mentalHealth -= 5;
    }
    else if (strong == 3)
    {
        printf(YELLOW BOLD "\n\n*** HAI RESO STERILE UN DETENUTO ***\n\n" RESET);
    }
    else if (strong == 4)
    {
        printf(BLUE BOLD "\n\n*** HAI TENTATO DI DARE UN PUGNO IN TESTA AD UN DETENUTO, MA LUI ERA CAMPIONE DI BOXE ***\n\n" RESET);
        printf(RED BOLD "--- TI HA ROTTO IL BRACCIO DESTRO E TI HA TAGLIATO UN ORECCHIO ***\n\n" RESET);
        sqeeze->healht -= 20;
        sqeeze->happiness -= 15;
        sqeeze->mentalHealth -= 10;
    }
    else
    {
        printf(GREEN BOLD "\n\n*** HAI DATO UN CALCIO IN TESTA AD UN DETENUTO E ORA SI TROVA IN COMA ***\n\n" RESET);
    }
}

void coniugalVisit(struct Giocatore *coniug)
{
    printf(RED BOLD "\n\n--- VISITA CONIUGALE ---\n\n" RESET);
    printf(GREEN BOLD "*** HAI RIVISTO LA TUA RAGAZZA ***\n\n" RESET);
    printf(YELLOW BOLD "*** TROVATE IL MODO DI AVVICINARVI E VI SCATENATE ***\n\n" RESET);
    coniug->happiness += 5;
    coniug->mentalHealth += 5;

    if (coniug->fertility >= 50)
    {
        printf(GREEN BOLD "--- ORA ASPETTI UN FIGLIO ---\n\n" RESET);
    }
}

void letter(struct Giocatore *lett)
{
    int let = 0;

    printf(GREEN BOLD "\n\n--- A CHI VUOI SPEDIRE LA LETTERA? ---\n\n" RESET);
    printf(YELLOW BOLD "1.La tua ragazza (se la hai) | 2.I tuoi genitori | 3.Tuoi amici\n" RESET);
    printf(YELLOW BOLD "Scelta: " RESET);
    scanf("%d", &let);

    if (let == 1)
    {
        printf(GREEN BOLD "\n\n*** TI HA MANDATO ANCHE LEI UNA LETTERA ***\n\n" RESET);
        lett->happiness += 3;
    }
    else if (let == 2)
    {
        printf(BLUE BOLD "\n\n*** HAI MANDATO UNA LETTERA AI TUOI GENITORI, GLI MANCHI ***\n\n" RESET);
        lett->happiness -= 5;
    }
    else if (let == 3)
    {
        printf(RED BOLD "\n\n*** NON TI HANNO RISPOSTO ***\n\n" RESET);
        lett->happiness -= 10;
        lett->friends = 0;
    }
}

void escape(struct Giocatore *esc, int *sEsca, int *prsE)
{
    int playerX = 1, playerY = 1;
    int guardX = 8, guardY = 8;
    int exitX = 9, exitY = 9;
    char input;
    int escaped = 0;

    printf(RED BOLD "--- EVASIONE DALLA PRIGIONE ---\n" RESET);
    printf(BLUE BOLD "Usa W-A-S-D per muoverti. Raggiungi la 'E' senza farti prendere dalla guardia 'G'!\n" RESET);

    while (!escaped)
    {
        for (int y = 0; y < 10; y++)
        {
            for (int x = 0; x < 10; x++)
            {
                if (x == playerX && y == playerY)
                    printf(" () ");
                else if (x == guardX && y == guardY)
                    printf(" G ");
                else if (x == exitX && y == exitY)
                    printf(" E ");
                else
                    printf(" . ");
            }
            printf("\n");
        }

        input = getch();
        if (input == 'w')
            playerY--;
        guardY--;
        if (input == 's')
            playerY++;
        guardX++;
        if (input == 'a')
            playerX--;
        guardX--;
        if (input == 'd')
            playerX++;
        guardX++;

        // if (guardX < playerX) guardX++;
        // else if (guardX > playerX) guardX--;

        // if (guardY < playerY) guardY++;
        // else if (guardY > playerY) guardY--;

        if (playerX == guardX && playerY == guardY)
        {
            printf(RED BOLD "\n*** LA GUARDIA TI HA PRES0! ISOLAMENTO E PENA AUMENTATA NOTERIORMENTE. ***\n" RESET);
            (*sEsca) += 10;
            esc->happiness -= 15;
            esc->mentalHealth -= 15;
            break;
        }
        if (playerX == exitX && playerY == exitY)
        {
            printf(GREEN BOLD "\n*** SEI LIBERO! EVASIONE RIUSCITA. ***\n" RESET);
            escaped = 1;
            (*prsE) = 0;
        }

        system("cls");
    }
}

void physicDiseases(struct Giocatore *dis, int *al, int *yPD, int *rlPD)
{
    int posComa = (rand() % 12) + 1;
    printf(RED BOLD "\n\n--- SEI ANDATO IN OSPEDALE ---\n\n" RESET);

    if (*rlPD == 1)
    {
        printf(RED BOLD "*** SEI ANDATO IN OSPEDALE PER UN ANEURISMA, NON SONO RIUSCITI A SALVARTI IN TEMPO ***\n\n" RESET);
        (*al) = 0;
    }
    else if (*rlPD == 2)
    {
        printf(BLUE BOLD "*** SEI STATO PORTATO IN OSPEDALE DOPO AVER SBATTUTO FORTEMENTE LA TESTA, SEI IN COMA PER [%d] ANNI ***\n\n" RESET, posComa);
        (*yPD) = 5;
    }
    else if (*rlPD == 3)
    {
        printf(BLUE BOLD "*** SEI STATO MORSO DA UN PITBULL NEI LUOGHI INTIMI, POTRESTI RIMANERE INFERTILE ***\n\n" RESET);
        (*yPD) = 3;
        dis->fertility -= 55;
        dis->healht -= 20;
        dis->happiness -= 30;
    }
    else if (*rlPD == 4)
    {
        printf(YELLOW BOLD "*** TI SEI TAGLIATO UN DITO MENTRE CUCINAVI ***\n\n" RESET);
        (*yPD) = 1;
        dis->healht -= 2;
    }
    else
    {
        printf(GREEN BOLD "*** ATTACCO DI PANICO ***\n\n" RESET);
    }

}

void takeCarLicense(struct Giocatore *car, int *cle)
{
    int car1 = 0, car2 = 0, car3 = 0, point = 0, malus = 0;

    printf(YELLOW "\n\n*** ESAME DI GUIDA, RISPONDI CORRETTAMENTE A 3 DOMANDE PER AVERE LA PATENTE ***\n\n" RESET);
    printf(GREEN "In presenza di un segnale di 'STOP' a un incrocio, come deve comportarsi il conducente?\n" RESET);
    printf(RED "1.Suonare il clacson | 2.Rallentare e passare solo se non vengono altri veicoli | 3.Fermarsi e dare precedenza | 4.Fermarsi solo se ci sono pedoni\nScelta: " RESET);
    scanf("%d", &car1);

    if (car1 == 3)
    {
        printf(GREEN "\n\n*** risposto correttamente ***\n\n" RESET);
        point += 1;
    }
    else
    {
        printf(RED BOLD "\n\n*** hai sbagliato, non puoi permetterti un altro errore! ***\n\n" RESET);
        malus += 1;
    }

    printf(GREEN "\n\nQual è il limite massimo di velocità consentito sulle autostrade per i neopatentati (nei primi 3 anni dal conseguimento)?\n" RESET);
    printf(RED "1. 110 Kmh | 2. 100 Kmh | 3. 130 Kmh | 4. 90 Kmh\nScelta: " RESET);
    scanf("%d", &car2);

    if (car2 == 2)
    {
        printf(GREEN BOLD "\n\n*** risposto correttamente ***\n\n" RESET);
        point += 1;
    }
    else if (car2 != 2 && malus >= 1)
    {
        printf(RED BOLD "\n\n*** SEI STATO BOCCIATO ***\n\n" RESET);
        point = 0;
        malus += 1;
    }

    if (malus <= 1)
    {
        printf(GREEN "Lo spazio di frenata aumenta se...\n" RESET);
        printf(RED "1.Gli pneumatici sono usurati e la strada è bagnata | 2.Il conducente è molto stanco | 3.La strada è in salita | 4.Si viaggia a bassa velocità\nScelta: " RESET);
        scanf("%d", &car3);

        if (car3 == 1)
        {
            printf(GREEN BOLD "\n\n*** CONGRATULAZIONI! HAI RICEVUTO LA PATENTE DI GUIDA ***\n\n" RESET);
            (*cle) = 1;
        } else {
            printf(RED BOLD "\n\n*** BOCCIATO ***\n\n" RESET);
        }
    }
}

void prisionGym(struct Giocatore *palgym, int *vivoOmorto, int mortoOvivo)
{

    if (mortoOvivo == 2)
    {
        printf(RED BOLD "\n\n*** TI HANNO ASSASSINATO MENTRE ERI IN PALESTRA ***\n\n" RESET);
        (*vivoOmorto) = 0;
    }
    else
    {
        printf(GREEN "\n\n*** HAI FATTO PESISTICA ***\n\n" RESET);
        palgym->happiness += 10;
        palgym->healht += 10;
        palgym->mentalHealth += 10;
        palgym->fertility += 3;
    }
}

void controlYearProximative(struct Giocatore *control, int *patLicense, int *brkGirlProb, int *flong, int *lvc, int *mtb, int *wrk, int *pris)
{
    if ((*pris) == 0)
    {

        if (control->age >= 18 && *patLicense == 0)
        {
            int carChoice = 0;
            printf("\n\n--- VUOI PRENDERE LA PATENTE? (1=Si, 0=No) ---\nScelta: ");
            scanf("%d", &carChoice);

            if (carChoice == 1)
            {
                takeCarLicense(control, patLicense);
            }
        }
    }

    if ((*pris) == 0)
    {

        if (control->age > 23 && *wrk == 0)
        {
            printf("\n\n*** CONTINUERAI A SOFFRIRE DI ANSIA SE NON RIESCI A TROVARE LAVORO ***\n\n");
            control->happiness -= 5;
            control->healht -= 4;
            control->mentalHealth -= 4;
            (*mtb)++;
        }
        else if (control->age > 23 && *lvc < 1)
        {

            printf("\n\n*** CONTINUI A ESSERE TRISTE SENZA UNA PARTNER ***\n\n");
            control->happiness -= 6;
            control->healht -= 4;
            control->mentalHealth -= 4;
            (*mtb)++;
        }
        else if (control->friends < 1 && control->age > 14)
        {

            printf("\n\n*** NON HAI AMICI :( ***\n\n");
            control->happiness -= 6;
            control->healht -= 4;
            control->mentalHealth -= 3;
            (*mtb)++;
        }

        if (*brkGirlProb == 2 && *lvc == 1 && *flong >= 1)
        {
            printf(RED BOLD "\n\n*** LA TUA RAGAZZA TI HA SCOPERTO MENTRE LA TRADIVI, ORA SEI SINGLE ***\n\n" RESET);
            (*lvc) = 0;
        }
    }
}

void mafiaLetter(struct Giocatore *maf, int *crime)
{

    if (*crime == 50 && maf->age > 15)
    {
        int lifeStyle = 0;

        printf(BLUE BOLD "\n\n*** LA MAFIA TI VUOLE RECLUTARE ***\n\n" RESET);
        printf(YELLOW BOLD "1.Accetti | 2.Rifiuti\n" RESET);
        printf(YELLOW BOLD "Scelta: " RESET);
        scanf("%d", &lifeStyle);

        if (lifeStyle == 1)
        {
            printf(RED BOLD "\n\n--- SEI ENTRATO ---\n\n" RESET);
            strcpy(maf->work, "Mafioso");
        }
        else
        {
            printf(RED BOLD "\n\n--- HAI RIFIUTATO ---\n\n" RESET);
        }
    }
}

void annualNetSons(struct Giocatore *son, int *snc)
{

    int net = 0;

    net = ((*snc) * 3000);

    son->currentPortfolio -= net;
}

void workAnnualNet(struct Giocatore *netWork, int *krw, int *svdYear)
{
    int temp = 0;

    (*svdYear)++;
    temp = 50 - (*svdYear);
    printf("\n\n*** LAVORO: [%s]\nANNI RIMANENTI PER PENSIONE: [%d] ***\n\n", netWork->work, temp);

    if (temp == 0)
    {
        printf("*** SEI ANDATO IN PENSIONE ***\n\n");
        *krw = 0;
    }
}

void college(struct Giocatore *stud, int *uniCt, int *yct, int *dipl)
{
    (*yct)++;
    printf(GREEN "\n[College] Stai studiando %s. Anno %d di 5\n" RESET, stud->subject, *yct);

    if (*yct >= 5)
    {
        printf(BLUE "\n\n\n*** CONGRATULAZIONI! TI SEI LAUREATO! ***\n" RESET);
        *uniCt = 1;
        *dipl = 1;
        *yct = 0;
    }
}

void checkWork(struct Giocatore *check, int *workLife, int *probWar, int *prisionCheck, int *probEvent, int *probNuclear,
               int *weaponNuclearBuild, int *workProbHack)
{
    if (strcmp(check->work, "Militare") == 0 && check->healht <= 40)
    {
        printf(RED BOLD "\n\n*** SEI STATO CONGEDATO ***\n" RESET);
        strcpy(check->work, "Disoccupato");
        *workLife = 0;
    }
    else
    {
        if (strcmp(check->work, "Militare") == 0 && (*probWar == 1) && (*prisionCheck == 0))
        {
            printf(RED BOLD "\n\n*** SEI STATO CHIAMATO IN MISSIONE, [AFGHANISTAN] ***\n" RESET);
            war(check, *probEvent);

            if (*probWar == 3)
            {
                printf(RED BOLD "\n\n*** SEI STATO CHIAMATO IN MISSIONE, [IRAQ] ***\n" RESET);
                war(check, *probEvent);
            }

            if (*probWar == 10)
            {
                printf(RED BOLD "\n\n*** SEI STATO CHIAMATO IN MISSIONE, [DAGHESTAN] ***\n" RESET);
                war(check, *probEvent);
            }
        }

        if (strcmp(check->work, "Ingegnere Nuc.") == 0 && check->iQ < 90)
        {
            printf(RED BOLD "\n\n*** SEI STATO LICENZIATO ***\n" RESET);
            strcpy(check->work, "Disoccupato");
        }
        else
        {
            if (strcmp(check->work, "Ingegnere Nuc.") == 0 && (*probNuclear) == 2 && (*prisionCheck == 0))
            {
                nuclearProbabilitiesGeneral(check, *probNuclear);
            }
        }

        if (strcmp(check->work, "Etichal Hacker") == 0 && check->iQ < 87)
        {
            printf(RED BOLD "\n\n*** SEI STATO LICENZIATO ***\n" RESET);
            strcpy(check->work, "Disoccupato");
        }
        else
        {
            if (strcmp(check->work, "Etichal Hacker") == 0 && *workProbHack == 2)
            {
                hackingProbabilities(check);
            }
        }
    }
}

void controlHealth(struct Giocatore *healthControl){

    if (healthControl->healht > 100) { healthControl->healht = 100; }
    else if (healthControl->healht < 0) { healthControl->healht = 0; }
    else if (healthControl->age <= 13) { healthControl->iQ += 3; }

}

void ludo(struct Giocatore *ludp){

    ludp->currentPortfolio -= 1000;
    ludp->mentalHealth -= 3;

}

void controlMentalDiseases(struct Giocatore *controlMtb){

    controlMtb->happiness -= 5;
    controlMtb->mentalHealth -= 2;

}

void mentalDis(struct Giocatore *mtbControl){

    if (mtbControl->mentalHealth < 20){

        mtbControl->healht -= 5;
        printf(RED BOLD "[MALATTIA] La tua mente sta consumando il tuo corpo...\n" RESET);
    }

}

void healthAndAddiction(struct Giocatore *addictAndHealth, int *add){

    if (*add == 1) { addictAndHealth->healht -= 7; addictAndHealth->iQ -= 5; addictAndHealth->fertility -= 4; addictAndHealth->mentalHealth -= 5; }
        else { if (addictAndHealth->age < 25) { addictAndHealth->iQ += 2; addictAndHealth->fertility += 4; addictAndHealth->healht += 5; } if (addictAndHealth->age >= 35) {addictAndHealth->fertility -=1;} if (addictAndHealth->age >=70) { addictAndHealth->iQ -= 3; addictAndHealth->fertility -= 4; addictAndHealth->healht -=3; } }
        if (addictAndHealth->iQ < 0) { addictAndHealth->iQ = 0; }
        if (addictAndHealth->healht > 100) { addictAndHealth->healht = 100; }
        if (addictAndHealth->mentalHealth > 100) { addictAndHealth->mentalHealth = 100; } else if (addictAndHealth->mentalHealth < 0) { addictAndHealth->mentalHealth = 0; }

}

void goWithGirlfriend(struct Giocatore *go){

    printf(YELLOW "\nLa tua ragazza vuole uscire. (1=Si, 0=No): " RESET);
    int sn;
    
    scanf("%d", &sn); while(getchar() != '\n');

    if(sn) printf(GREEN "*** AVETE PASSATO TEMPO INSIEME ***!\n" RESET);

}

void workOrCollege(struct Giocatore *workOrColl, int *countUni, int *yearCurr, int *workkk, int *yearsSvd, int *dipp){

    int c18 = 0;

    printf(GREEN BOLD "\nHAI 18 ANNI! 1.Cerca Lavoro | 2.Iscriviti al College: " RESET);
            scanf("%d", &c18); while(getchar() != '\n');
            if (c18 == 2) {
                printf(YELLOW BOLD "1.Ingegneria Nucleare | 2.Computer Science\n" RESET);
                printf(YELLOW "Inserisci facolta': " RESET);
                fgets(workOrColl->subject, 20, stdin);
                workOrColl->subject[strcspn(workOrColl->subject, "\n")] = '\0';
                *countUni = 1; *yearCurr = 0;
                college(workOrColl, countUni, yearCurr, dipp);
            } else {
                chooseWork(&workOrColl[0], 0, workkk);
                *workkk = 1; *yearsSvd = 0;
            }

}