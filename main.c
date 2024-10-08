#include <gb/gb.h>
#include <stdio.h>
#include <string.h>
#include "sprites.c"
#include "backgrounds.c"
#include <gb/font.h>

UINT8 x, y;


void limpar_tela(UINT8 tile){
    for (y = 0; y < 18; y++) {
        for (x = 0; x < 32; x++) {
            set_bkg_tiles(x, y, 1, 1, &tile);
        }
    }
}


void tela_inicial(){

    font_init();
    font_set(font_load(font_spect));
    

    printf("\n \n \n     RUSH RESUN\n\n\n");
    printf("PRESS ENTER TO START\n");

    waitpad(J_START); // Espera até que a tecla Enter seja pressionada


}

void fase1(){
    
    limpar_tela(0);
    set_bkg_data(97, 20, Fase1_Sprites);
    set_bkg_tiles(0, 0, 32, 18, Fase1_BackGround);

    set_win_tiles(0, 0, 10, 1, timemap);
    move_win(80, -120);

    SHOW_BKG;
    SHOW_WIN;
    DISPLAY_ON;

    while(1){
        scroll_bkg(2, 0);
        delay(100);

        if(joypad()){
            break;
        }
    }
}

void fase2(){

    limpar_tela(0);
    set_bkg_data(97, 16, Fase2_Sprites);
    set_bkg_tiles(0, 0, 32, 18, Fase2_BackGround);

    SHOW_BKG;
    DISPLAY_ON;

    while(1){
        scroll_bkg(4, 0);
        delay(100);
        

        if(joypad()){
            
            limpar_tela(0);
            set_win_tiles(0, 0, 10, 1, end_mensage);
            move_win(60, 60);;
            break;
        }
    }
}

void main(){
    tela_inicial();
    fase1();
    fase2(); 
}