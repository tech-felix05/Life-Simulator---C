#ifndef PLAYER_H
#define PLAYER_H

struct Giocatore {
    int age;
    int fertility;
    int iQ;
    int healht;
    int happiness;
    int mentalHealth;
    float currentPortfolio;
    float salary; 
    int friends;
    char work[20];
    char subject[20];
    char sentence[20];
};

struct Nation {
    char *nameNation;
    double annualBirth;
};

struct Node {
    int expression;
    struct Node* next;
};

#endif