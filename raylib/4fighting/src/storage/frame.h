#ifndef FRAME_H_
#define FRAME_H_

/* Include files */
#include "common.h"

/* Struct Frame */ 
typedef struct Frame {
	Rect display; // display area
	Rect hitbox; // hitbox area
} Frame;

/* Prototypes */
extern Frame create_frame(Rect frame_display, Rect frame_hitbox);

#endif