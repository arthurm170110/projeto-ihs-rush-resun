#include <gb/gb.h>
#include <gb/font.h>
#include <stdio.h>
#include "sprites.c"
#include "backgrounds.c"
#include "structs.c"


UINT8 x, y, a;
UINT8 tocou = 1, tocou2 = 1;
UINT8 sound_step = 0;
UINT8 delay_counter = 0;
UINT8 i = 0, j = 10, k = 10;

struct MainCaracter bus;
struct MainCaracter student;
struct SecondaryCaracter car;
struct SecondaryCaracter student2;

void hide_all_sprites() { // função para esconder sprites da fase anterior
    for (a = 0; a < 40; a++) {
        move_sprite(a, 0, 0);
    }
}
// função para movimentação de personagens principais
void moveMainCaracter(struct MainCaracter *caracter, UINT8 x, UINT8 y){ 
    move_sprite(caracter->spritids[0], x, y);
    move_sprite(caracter->spritids[1], x + 8, y);
    move_sprite(caracter->spritids[2], x, y + 8);
    move_sprite(caracter->spritids[3], x + 8, y + 8);

}
// função para movimentação de personagens secundarios
void moveSecondaryCaracter(struct SecondaryCaracter *caracter, UINT8 x, UINT8 y){ 
    move_sprite(caracter->spritids[0], x, y);
    move_sprite(caracter->spritids[1], x + 8, y);
    move_sprite(caracter->spritids[2], x, y + 8);
    move_sprite(caracter->spritids[3], x + 8, y + 8);
}

void setupBus(){
    bus.x = 20;
    bus.y = 130;
    bus.width = 16;
    bus.height = 16;

    set_sprite_tile(0, 0);
    bus.spritids[0] = 0;
    set_sprite_tile(1, 1);
    bus.spritids[1] = 1;
    set_sprite_tile(2, 2);
    bus.spritids[2] = 2;
    set_sprite_tile(3, 3);
    bus.spritids[3] = 3;

    moveMainCaracter(&bus, bus.x, bus.y);
}

void setupCar(){
    car.x = 180;
    car.y = 130;
    car.width = 16;
    car.height = 16;

    set_sprite_tile(4, 4);
    car.spritids[0] = 4;
    set_sprite_tile(5, 5);
    car.spritids[1] = 5;
    set_sprite_tile(6, 6);
    car.spritids[2] = 6;
    set_sprite_tile(7, 7);
    car.spritids[3] = 7;

    moveSecondaryCaracter(&car, car.x, car.y);
}

void setupStudent(){
    student.x = 20;
    student.y = 130;
    student.width = 16;
    student.height = 16;

    set_sprite_tile(0, 0);
    student.spritids[0] = 0;
    set_sprite_tile(1, 1);
    student.spritids[1] = 1;
    set_sprite_tile(2, 2);
    student.spritids[2] = 2;
    set_sprite_tile(3, 3);
    student.spritids[3] = 3;

    moveMainCaracter(&student, student.x, student.y);
}

void setupStudent2(){
    student2.x = 180;
    student2.y = 130;
    student2.width = 16;
    student2.height = 16;

    set_sprite_tile(4, 4);
    student2.spritids[0] = 4;
    set_sprite_tile(5, 5);
    student2.spritids[1] = 5;
    set_sprite_tile(6, 6);
    student2.spritids[2] = 6;
    set_sprite_tile(7, 7);
    student2.spritids[3] = 7;

    moveSecondaryCaracter(&student2, student2.x, student2.y);
}

void performantdelay(UINT8 numloops) // função para delay que não utiliza muita memória do emulador
{
    UINT8 ii;
    for (ii = 0; ii < numloops; ii++)
    {
        wait_vbl_done();
    }
}


// Play1 - Missão impossível
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

// PLay2 - Música de abertura de Game of Thrones
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
            NR13_REG = 0xC5;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x84;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x9D;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
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
            NR13_REG = 0xC5;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x84;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Mi3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xA6;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
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
            NR13_REG = 0xC5;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x84;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x9D;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 4:
            NR10_REG = 0x00; // Sol3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xC5;
            NR14_REG = 0x80;
            delay_counter = 8;
            sound_step++;
            break;

        case 5:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x84;
            NR14_REG = 0x80;
            delay_counter = 8;
            sound_step++;
            break;

        case 6:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x9D;
            NR14_REG = 0x20;
            delay_counter = 2;
            sound_step++;
            break;

        case 7:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
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
            NR13_REG = 0x94;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Sol2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x63;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x75;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 3:
            NR10_REG = 0x00; // Do3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x84;
            NR14_REG = 0x80;
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
            NR13_REG = 0x94;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 1:
            NR10_REG = 0x00; // Sol2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x63;
            NR14_REG = 0x80;
            delay_counter = 4;
            sound_step++;
            break;

        case 2:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x94;
            NR14_REG = 0x80;
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
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 5:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x75;
            NR14_REG = 0x80;
            delay_counter = 12;
            sound_step++;
            break;

        case 6:
            NR10_REG = 0x00; // Re# 3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x9D;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 7:
            NR10_REG = 0x00; // Re3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x94;
            NR14_REG = 0x80;
            delay_counter = 2;
            sound_step++;
            break;

        case 8:
            NR10_REG = 0x00; // Fa3
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0xB0;
            NR14_REG = 0x80;
            delay_counter = 8;
            sound_step++;
            break;

        case 9:
            NR10_REG = 0x00; // La# 2
            NR11_REG = 0x81;
            NR12_REG = 0x4B;
            NR13_REG = 0x75;
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

// Função para limpar background de uma fase para outra
void limpar_tela(UINT8 tile){
    for (y = 0; y < 18; y++) {
        for (x = 0; x < 32; x++) {
            set_bkg_tiles(x, y, 1, 1, &tile);
        }
    }
}


void tela_inicial(){

    // Iniciando caracteres do Window
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

    set_sprite_data(0, 4, Bus_Sprite);
    set_sprite_data(4, 4, Car_Sprite);
    setupCar();
    setupBus();

    SHOW_WIN;
    SHOW_BKG;
    SHOW_SPRITES;
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

        if(joypad() == J_START){// Mudando de fase pressionando start
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

        switch(joypad()){
            case J_UP:
                bus.y -= 2;
                moveMainCaracter(&bus, bus.x, bus.y);
                break;
            case J_DOWN:
                bus.y += 2;
                moveMainCaracter(&bus, bus.x, bus.y);
                break;
                
        }
        car.x -= 5;
        if(car.x <= 0){
            car.x = 180;
            car.y = bus.y;
        }
        moveSecondaryCaracter(&car, car.x, car.y);
    }
}

void fase2(){
    
    limpar_tela(0);
    set_bkg_data(97, 16, Fase2_Sprites);
    set_bkg_tiles(0, 0, 32, 18, Fase2_BackGround);

    set_sprite_data(0, 4, Student_Sprite);
    set_sprite_data(4, 4, Student2_Sprite);
    setupStudent();
    setupStudent2();

    SHOW_BKG;
    SHOW_SPRITES;
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

        if(joypad() == J_START){ // Termina o jogo pressionando start
            hide_all_sprites();
            NR10_REG = 0x00; //Muta
            NR11_REG = 0x00;
            NR12_REG = 0x00;
            NR13_REG = 0x00;
            NR14_REG = 0x80;
            sound_step = 0;
            
            limpar_tela(0);
            set_win_tiles(0, 0, 10, 1, end_mensage);
            move_win(60, 60);;
            break;
        }

        switch(joypad()){
            case J_UP:
                student.y -= 2;
                moveMainCaracter(&student, student.x, student.y);
                break;
            case J_DOWN:
                student.y += 2;
                moveMainCaracter(&student, student.x, student.y);
                break;      
        }

        student2.x -= 5;
        if(student2.x <= 0){
            student2.x = 180;
            student2.y = student.y;
        }
        moveSecondaryCaracter(&student2, student2.x, student2.y);
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