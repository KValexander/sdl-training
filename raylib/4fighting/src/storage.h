#ifndef STORAGE_H_
#define STORAGE_H_

/* Constants */
#define MAX_CHARACTERS 10
#define MAX_LOCATIONS 10

/* Include files */
#include "common.h"
#include "resources.h"
#include "storage/character.h"
// #include "storage/location.h"

/* Struct Storage */
typedef struct Storage {

	/* Characters */ 
	int count_characters; // count characters
	Character characters[MAX_CHARACTERS]; // characters

	/* Locations */
	int count_locations; // count locations

} Storage;

/* Prototypes */

/* Load storage */
extern void load_storage(Resources *resources, Storage *storage);

/* Create frame */ 
extern Frame s_create_frame(int pw, int ph, int x1, int y1, int w1, int h1, int x2, int y2, int w2, int h2);

#endif