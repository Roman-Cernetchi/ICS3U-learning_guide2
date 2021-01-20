// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Roman Cernetchi
// Created on: January 2021
// This program moves a sprite on the gameboy

#include <stdio.h>
#include <gb/gb.h>

#include "Smiler.h"


void main() {
	// This function moves a smiley face

	set_sprite_data(0, 2, TileData);
	set_sprite_tile(0, 1);
	move_sprite(0, 88, 78);
	SHOW_SPRITES;

	while(1) {
		switch(joypad()) {
			case J_LEFT: 
                scroll_sprite(0,-1,0);
                break;
            case J_RIGHT: 
                scroll_sprite(0,1,0);
                break;  
            case J_UP: 
                scroll_sprite(0,0,-1);
                break; 
            case J_DOWN: 
                scroll_sprite(0,0,1);
                break; 
		}
		delay(100);
	}
}
