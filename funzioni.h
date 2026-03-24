#ifndef CRIMINI_H
#define CRIMINI_H
#include "player.h"

void identityCard(struct Nation *n, char *nS, char *cS);
void gym(struct Giocatore *s);
void righting(struct Giocatore *l);
void newFriends(struct Giocatore *fr);
void girlResearch(struct Giocatore *g, int *counter, int *son, int *fl);
void eat(struct Giocatore *c);
void nightClub(struct Giocatore *night, int *addict, int *dead);
void chooseWork(struct Giocatore *s, int hasDegree, int *worke);
void war(struct Giocatore *w, int militarChoice);
void nuclearProbabilitiesGeneral(struct Giocatore *n, int *weaponN);
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
void escape(struct Giocatore *esc, int *sEsca, int *prsE);
void physicDiseases(struct Giocatore *dis, int *al, int *yPD, int *rlPD);
void takeCarLicense(struct Giocatore *car, int *cle);
void hospital(struct Giocatore *osp, struct Nation *nationsName, int *vivo);
void prisionGym(struct Giocatore *palgym, int *vivoOmorto, int mortoOvivo);
void controlYearProximative(struct Giocatore *control, int *patLicense, int *brkGirlProb, int *flong, int *lvc, int *mtb, int *wrk, int *pris, int *al);
void mafiaLetter(struct Giocatore *maf, int *crime);
void annualNetSons(struct Giocatore *son, int *snc);
void workAnnualNet(struct Giocatore *netWork, int *krw, int *svdYear);
void college(struct Giocatore *stud, int *uniCt, int *yct, int *dipl);
void checkWork(struct Giocatore *check, int *workLife, int *probWar, int *prisionCheck, int *probEvent, int *probNuclear, int *weaponNuclearBuild, int *workProbHack);
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
void endo(struct Giocatore *endoc);
void matVen(struct Giocatore *venee);
void familyDoctor(struct Giocatore *doc);
void psyco(struct Giocatore *psy);


#endif