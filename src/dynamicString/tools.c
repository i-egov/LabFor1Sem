#include "tools.h"

char *parse_argv(int n, char* argv[]) {
    DynamicString *string = init_string();

    for (int i = 2; i < n - 1 ; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++j) {
            add_string(string, argv[i][j]);
        }
        add_string(string, *" ");
    }
    strip_end_muttable(string->string);
    
    return string->string;
}