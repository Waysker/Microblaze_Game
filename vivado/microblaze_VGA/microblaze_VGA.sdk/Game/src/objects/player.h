/*
 * player.h
 *
 *  Created on: 20 Jun 2020
 *      Author: Waysker
 */

#ifndef SRC_OBJECTS_PLAYER_H_
#define SRC_OBJECTS_PLAYER_H_

enum MovePlayer{
	LEFT,
	RIGHT,
	NONE
};

struct PlayerPosition{
	int8_t x;
	int8_t y;
};


void playerInit();

void playerUpdate(enum MovePlayer*);

struct PlayerPosition* GetPlayerPosition();

#endif /* SRC_OBJECTS_PLAYER_H_ */
