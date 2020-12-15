/*1.Write a program that will input the ITEM CODE and the OLD PRICE. Test and compute the NEW PRICE
        ITEM CODE           ITEM                % OF INCREASE/DECREASE
        1                   WOMEN'S WEAR        10% INCREASE
        2                   MEN'S WEAR          20% INCREASE
/*Programmer: HARVY JONES PONTILLAS DICT 1-2*/
#include <stdio.h>
#define p printf
#define s scanf

int main()
{   int itmcd;
    float oldprc, newprc;
    char item[20];

    p("\n\n\tENTER THE ITEM CODE(1 THOUGH 3): ");
    s("%d",&itmcd);
    p("\tOLD PRICE: ");
    s("%f",&oldprc);

    if(itmcd==1){
        newprc=oldprc+(oldprc*.10);
        p("\n\n\tITEM: WOMEN'S WEAR");
        p("\n\tNEW PRICE: %.2f", newprc);}
    else if(itmcd==2){
        newprc=oldprc+(oldprc*.20);
        p("\n\n\tITEM: MEN'S WEAR");
        p("\n\tNEW PRICE: %.2f", newprc);}
    else if(itmcd==3){
        newprc=oldprc-(oldprc*.10);
        p("\n\n\tITEM: CHILDREN'S WEAR");
        p("\n\tNEW PRICE: %.2f", newprc);}
    getch();
}
