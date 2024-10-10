#include <gb/gb.h>
#include <stdio.h>
#include <string.h>
#include "sprites.c"
#include "backgrounds.c"
#include <gb/font.h>

UINT8 x, y;
UINT8 tocou = 1, tocou2 = 1;
UINT8 sound_step = 0;
UINT8 delay_counter = 0;
UINT8 i = 0, j = 10, k = 10;



void performantdelay(UINT8 numloops)
{
    UINT8 ii;
    for (ii = 0; ii < numloops; ii++)
    {
        wait_vbl_done();
    }
}


// Função que processa uma nota do som por vez
void play1_first_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Sol5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x17;
            NR14_REG = 0x83;
            delay_counter = 2;
            sound_step++;
            break;
        
        case 1:
            NR10_REG = 0x00; // Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            delay_counter = 1;
            sound_step++;
            break;
        
        case 2:
            NR10_REG = 0x00; // Sol5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x17;
            NR14_REG = 0x83;
            delay_counter = 3;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Si5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xE5;
            NR14_REG = 0x83;
            delay_counter = 2;
            sound_step++;
            break;

        case 4:
            NR10_REG = 0x00; // Dó6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x20;
            NR14_REG = 0x84;
            delay_counter = 2;
            sound_step++;
            break;

        case 5:
            NR10_REG = 0x00; // Sol5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x17;
            NR14_REG = 0x83;
            delay_counter = 2;
            sound_step++;
            break;

        case 6:
            NR10_REG = 0x00; // Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            delay_counter = 1;
            sound_step++;
            break;

        case 7:
            NR10_REG = 0x00; // Sol5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x17;
            NR14_REG = 0x83;
            delay_counter = 3;
            sound_step++;
            break;

        case 8:
            NR10_REG = 0x00; // Fá5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xC1;
            NR14_REG = 0x82;
            delay_counter = 2;
            sound_step++;
            break;

        case 9:
            NR10_REG = 0x00; // Fá#5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xEA;
            NR14_REG = 0x82;
            delay_counter = 2;
            sound_step++;
            break;
        case 10:
            NR10_REG = 0x00; // Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            sound_step = 0;
            if(i == 1){
                tocou = 0;
            }
            i++;
            break;
    }
}

void play1_second_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00;//Lá#6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x59;
            NR14_REG = 0x87;
            delay_counter = 2;
            sound_step++;
            break;
        case 1:
            NR10_REG = 0x00;//Sol6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x2E;
            NR14_REG = 0x86;
            delay_counter = 2;
            sound_step++;
            break;
        case 2:
            NR10_REG = 0x00;//Ré6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xA1;
            NR14_REG = 0x84;
            delay_counter = 10;
            sound_step++;
            break;
        case 3:
            NR10_REG = 0x00;//Lá#6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x59;
            NR14_REG = 0x87;
            delay_counter = 2;
            sound_step++;
            break;
        case 4:
            NR10_REG = 0x00;//Sol6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x2E;
            NR14_REG = 0x86;
            delay_counter = 2;
            sound_step++;
            break;
        case 5:
            NR10_REG = 0x00;//Dó#5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x2F;
            NR14_REG = 0x82;
            delay_counter = 10;
            sound_step++;
            break;
        case 6:
            NR10_REG = 0x00;//Lá#6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x59;
            NR14_REG = 0x87; 
            delay_counter = 2;
            sound_step++;
            break;
        case 7:
            NR10_REG = 0x00;//Sol6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x2E;
            NR14_REG = 0x86;
            delay_counter = 2;
            sound_step++;
            break;
        case 8:
            NR10_REG = 0x00;//Dó6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x20;
            NR14_REG = 0x84;
            delay_counter = 10;
            sound_step++;
            break;
        case 9:
            NR10_REG = 0x00;//Si5
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xE5;
            NR14_REG = 0x83;
            delay_counter = 2;
            sound_step++;
            break;
        case 10:
            NR10_REG = 0x00;//Dó6
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x20;
            NR14_REG = 0x84;
            delay_counter = 2;
            sound_step++;
            break;
        case 11:
            NR10_REG = 0x00; //Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            delay_counter = 5;
            sound_step++;
            break;
        case 12:
            sound_step = 0;
            tocou = 1;
            i = 0;
            break;
        
    }
}

void play2_first_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Sol3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x87;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x05;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x37;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step = 0;
            if(i == 3){
                j = 0;
            }
            i++;
            break;

    }
}

void play2_second_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Sol3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x87;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x05;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Mi3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x49;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step = 0;
            if(j == 3){
                tocou = 0;
            }
            j++;
            break;
    }
}

void play2_thirt_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Sol3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x87;
            NR14_REG = 0x81;
            delay_counter = 12;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x05;
            NR14_REG = 0x81;
            delay_counter = 12;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x37;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 4:
            NR10_REG = 0x00; // Sol3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x87;
            NR14_REG = 0x81;
            delay_counter = 8;
            sound_step++;
            break;

        case 5:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x05;
            NR14_REG = 0x81;
            delay_counter = 8;
            sound_step++;
            break;

        case 6:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x37;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 7:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step = 0;
            tocou = 1;
            k = 0;
            break;  
    }
}

void play2_fourth_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x25;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Sol2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xC3;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xE9;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x05;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step = 0;
            if(k == 2){
                tocou2 = 0;
            }
            k++;
            break;

    }
}

void play2_fifth_part() {
    if (delay_counter > 0) {
        delay_counter--;
        return; // Aguardando o delay entre as notas
    }

    switch(sound_step) {
        case 0:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x25;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Sol2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xC3;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x25;
            NR14_REG = 0x81;
            delay_counter = 4;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; //Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            sound_step++;
            break;

        case 4:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 12;
            sound_step++;
            break;

        case 5:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xE9;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 6:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x37;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 7:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x25;
            NR14_REG = 0x81;
            delay_counter = 2;
            sound_step++;
            break;

        case 8:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x5D;
            NR14_REG = 0x81;
            delay_counter = 8;
            sound_step++;
            break;

        case 9:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xE9;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 10:
            NR10_REG = 0x00; //Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            tocou2 = 1;
            sound_step = 0;
            i = 0;
            break;
    }
}

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
        scroll_bkg(3, 0);
        performantdelay(5);

        
        if(i < 2){
            play1_first_part();
        }
        if(tocou == 0){
            play1_second_part();
        }
        

        if(joypad()){
            NR10_REG = 0x00; //Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            sound_step = 0;
            i = 0;
            tocou = 1;
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
        scroll_bkg(6, 0);
        performantdelay(5);

        if(i < 4){
            play2_first_part();
        }
        
        if(j < 4){
            play2_second_part();
        }
        if(tocou == 0){
            play2_thirt_part();
        }
        if(k < 3){
            play2_fourth_part();
        }
        if(tocou2 == 0){
            play2_fifth_part();
        }
        

        if(joypad()){
            
            limpar_tela(0);
            set_win_tiles(0, 0, 10, 1, end_mensage);
            move_win(60, 60);;
            break;
        }
    }
}

void main(){

    // Inicialização do sistema de som
    NR52_REG = 0x80; // Liga o som
    NR50_REG = 0x77; // Volume máximo para os canais esquerdo e direito
    NR51_REG = 0xFF; // Ativa todos os canais de som
    
    tela_inicial();
    fase1();
    fase2(); 
}