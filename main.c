#include <gb/gb.h>
#include <stdio.h>
#include "sprites.c"
#include "backgrounds.c"

void main(){

    set_bkg_data(0, 16, Fase2_Sprites);
    set_bkg_tiles(0, 0, 32, 18, Fase2_BackGround);

    SHOW_BKG;
    DISPLAY_ON;

    while(1){
        scroll_bkg(1, 0);
        delay(100);
    }
}