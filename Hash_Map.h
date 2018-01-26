#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include "Linked_list.h"



/*
	Hash Map Entry
*/
typedef struct Entry{
	char key[10];
	int  value;
	int  hash;
} Entry;