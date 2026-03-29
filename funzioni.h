#ifndef FUNZIONI_H
#define FUNZIONI_H
#include "player.h"

void controlQi(struct Giocatore *controlQi, int *controlLife);
int randomQi(struct Giocatore *qi);
int getValidInput(int min, int max);
void identityCard(struct Nation *n, char *nS, char *cS);
void gym(struct Giocatore *s);
void righting(struct Giocatore *l);
void newFriends(struct Giocatore *fr);
void girlResearch(struct Giocatore *g, int *counter, int *son, int *fl, int *sexualDis, int *cDs);
void eat(struct Giocatore *c);
void nightClub(struct Giocatore *night, int *addict, int *dead);
void chooseWork(struct Giocatore *s, int hasDegree, int *worke);
void war(struct Giocatore *w, int *militarChoice, int *survived);
void nuclearProbabilitiesGeneral(struct Giocatore *n, int *weaponN, int *surviveOrNot);
void verifyRetired(struct Giocatore *p, int *year);
void music(struct Giocatore *m);
void timeWithFriends(struct Giocatore *f, int *ex);
void timeWithGirfriend(struct Giocatore *grl, int *cson);
void probDiseases(struct Giocatore *mental, int *rolls, int *dis);
void rehab(struct Giocatore *rb, int *add, int *pror, int *ludp);
void shop(struct Giocatore *sh, int tl);
void emigrate(struct Giocatore *em, int *cntlove, int cnt, int *pris, int *snt);
void hackingProbabilities(struct Giocatore *hack);
void blackJack(struct Giocatore *black, int *ludo);
void crimes(struct Giocatore *crim, int *crimCount, int *ratingCrim, int *prs, int *kd, int *lvCnt, int *sCnt, int *proe);
void prisionJail(struct Giocatore *prj);
void sentenceRewiew(struct Giocatore *stR, int *sProb, int *prss);
void medicJail(struct Giocatore *medic);
void mess(struct Giocatore *sqeeze, int *pseNt);
void coniugalVisit(struct Giocatore *coniug, int *girl);
void letter(struct Giocatore *lett);
void escape(struct Giocatore *esc, int *sEsca, int *prsE, int *yearInPris);
void physicDiseases(struct Giocatore *dis, int *al, int *yPD, int *rlPD);
void takeCarLicense(struct Giocatore *car, int *cle);
void hospital(struct Giocatore *osp, struct Nation *nationsName, int *vivo, int *sons, int *love, int *sXd, int *controlsDis, int *mentalDis, int *seme);
void prisionGym(struct Giocatore *palgym, int *vivoOmorto, int mortoOvivo);
void controlYearProximative(struct Giocatore *control, int *patLicense, int *brkGirlProb, int *flong, int *lvc, int *mtb, int *wrk, int *pris, int *al);
void mafiaLetter(struct Giocatore *maf, int *crime);
void annualNetSons(struct Giocatore *son, int *snc);
void workAnnualNet(struct Giocatore *netWork, int *krw, int *svdYear, int *rtd);
void college(struct Giocatore *stud, int *uniCt, int *yct, int *dipl);
void checkWork(struct Giocatore *check, int *workLife, int *probWar, int *prisionCheck, int *probEvent, int *probNuclear, int *weaponNuclearBuild, int *workProbHack, int *lived);
void controlHealth(struct Giocatore *healthControl);
void ludo(struct Giocatore *ludp);
void controlMentalDiseases(struct Giocatore *controlMtb);
void mentalDis(struct Giocatore *mtbControl);
void healthAndAddiction(struct Giocatore *addictAndHealth, int *add);
void goWithGirlfriend(struct Giocatore *go);
void workOrCollege(struct Giocatore *workOrColl, int *countUni, int *yearCurr, int *workkk, int *yearsSvd, int *dipp);
void addToHead(struct Node** head, int *age);
struct Node* createNode(int *new_expression);
void freeList(struct Node* head);
void suicide(int *notVivo);
void endo(struct Giocatore *endoc, int *viv, int *sem, int *countSon, int *amorCount);
void matVen(struct Giocatore *venee, int *viv, int *probSxD, int *crtlsDis);
void familyDoctor(struct Giocatore *doc, int *viv);
void psyco(struct Giocatore *psy, int *viv, int *mentalDis);
void controlKilledPeopleAndMentalHealth(struct Giocatore *kill, int *mentalDeas, int *kd, int *criminalRat);


#endif