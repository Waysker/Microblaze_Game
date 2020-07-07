/*
 * game.c
 *
 *  Created on: 18 Jun 2020
 *      Author: Waysker
 */

#include <stdint.h>
#include "../drivers/vga.h"

void drawFloor(){
	vga_draw_rect(0,70,100,2,0x0f0);
}

void update(){

}
