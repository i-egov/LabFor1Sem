#ifndef DYNAMIC_STRING_TOOLS_STRING_H
#define DYNAMIC_STRING_TOOLS_STRING_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "core.h"
#include "../stringTools.h"

// Processes argv, selects only the required strings for encryption
void parseArgv(DynamicString * string, int n, char **argv);

#endif
