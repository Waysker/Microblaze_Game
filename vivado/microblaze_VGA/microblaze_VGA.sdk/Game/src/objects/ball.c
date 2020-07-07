#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include "../drivers/vga.h"
#include "ball.h"
#include "player.h"
#include "../screen/font.h"

struct Velocity {
	int16_t x;
	int16_t y;
};

struct Position {
	int16_t x;
	int16_t y;
};
char scoreString[3];
uint16_t score;
uint8_t h;
uint8_t w;
int8_t xs;
int8_t ys;
struct Velocity v;
struct Position p;

void ballInit(){
	score = 0;
	h = 48+rand()%5;
	w = 48+rand()%5;
	xs = -1;
	ys = -1;
	v.x = 0;
	v.y = 50;
	p.x = 5000;
	p.y = 5000;
	circleBresenham(w,Y_MAX-h,2,BALL_COLOR);
}
uint8_t ballUpdate(struct PlayerPosition *playerPosition){
	if(h>=9){
		v.y--;
		p.y = (p.y + v.y);
		p.x = (p.x + v.x);

		if((p.y/100)!=h || (p.x/100)!=w){

			if(abs((playerPosition->x+1)-(p.x/100))<=2 && (Y_MAX-p.y/100)>=63){
				v.x=((p.x/100)-(playerPosition->x+1))*8;
				v.y=40+rand()%15;
				ScoreUpdate();
				return 1;
			} else {
				circleBresenham(w,Y_MAX-h,2,BG_COLOR);
				h=(p.y/100);
				w=(p.x/100);
				circleBresenham(w,Y_MAX-h,2,BALL_COLOR);
				return 1;
			}
		}
		else return 1;
		}else{
		return 0;
		//circleBresenham(w,Y_MAX-h,2,BALL_COLOR);
	}
}
char* GetScore(){
	return scoreString;
}
void ScoreUpdate(){
	score++;
	font_write_digits(scoreString,80,10,BG_COLOR);
	sprintf(scoreString,"%d",score);
	font_write_digits(scoreString,80,10,0xfff);
}
