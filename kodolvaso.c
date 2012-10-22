/* 
 * File:   main.c
 * Author: mogyula
 *
 * Created on 2012. október 21., 0:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <cdk/cdk.h>
#include <ncurses.h>

/*
 * 
 */
int main(int argc, char** argv) {
    CDKSCREEN *cdkscreen;
    WINDOW *curseswin;
    curseswin = initscr();
    cdkscreen = initCDKScreen(curseswin);
    initCDKColor();
    char a[15];
      
    //ide jön a jóság.
    CDKLABEL *label;
    char *asd[2];
    asd[0] = "Olvasott kód:";
    asd[1] = "";
    label = newCDKLabel(cdkscreen,CENTER,CENTER,asd,2,0,0);   
    
    while (1){
        scanf("%s", &a);
        asd[1] = a;
        setCDKLabel(label,asd,2,0);
        refreshCDKScreen(cdkscreen);
    }
    
    //waitCDKLabel(label,' ');
    destroyCDKScreen(cdkscreen);
    endCDK();
    return (EXIT_SUCCESS);
}
