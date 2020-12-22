#ifndef DYNAMIC_STRING_TOOLS_STRING_H
#define DYNAMIC_STRING_TOOLS_STRING_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "core.h"
#include "../stringTools.h"

// Processes argv, selects only the required strings for encryption
char *parseArgv(int n, char **argv);

#endif
