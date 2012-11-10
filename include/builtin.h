#ifndef BUILTIN_H
#define BUILTIN_H

#include <stdio.h>      /* perror() */
#include <stdlib.h>     /* exit() */
#include <string.h>
#include <errno.h>
#include <unistd.h>     /* STDIN_FILENO */

extern int isBuiltin(char*);

extern void ExecBuiltin(const char*, char* const* );

#endif


