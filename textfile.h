#ifndef TEXTFILE_H
#define TEXTFILE_H

#include <stdio.h>
#include <stdlib.h>

char *textFileRead(const char *fn);

void textFileWrite(const char *fn, const char* s);


#endif