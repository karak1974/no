#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool startsWith(const char *pre, const char *str)
{
    size_t lenpre = strlen(pre),
           lenstr = strlen(str);
    return lenstr < lenpre ? false : memcmp(pre, str, lenpre) == 0;
}

int main( int argc, char *argv[]) {
	if (argc == 2) {
		if (strcmp(argv[1], "--help") == 0) {
			printf("Usage: no [STRING]...\nor:  no OPTION\nRepeatedly output a line with all specified STRING(s), or 'n'.\n\n\t--help     display this help and exit\n\t--version  output version information and exit\n");
			exit(0);
		} else if (strcmp(argv[1], "--version") == 0) {
			printf("no (GNU) 1.0\nCopyright (C) 2021 Free Software Foundation, Inc.\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\nWritten by Wolfy.\n");
			exit(0);
		} else if (startsWith("-", argv[1])) {
			printf("no: invalid option %s\nTry 'no --help' for more information.\n", argv[1]);
			exit(0); 
		}else {
			if ( argc > 1) {
				while(1) {
					for (int i = 1; i < argc; i++) {
						printf("%s ", argv[i]);
					}
					printf("\n");
				}
			} else {
				while(1){
					printf("n\n");
				}
			}
		}
	} else { 
		if ( argc > 1) {
			while(1) {
				for (int i = 1; i < argc; i++) {
					printf("%s ", argv[i]);
				}
				printf("\n");
			}
		} else {
			while(1){
				printf("n\n");
			}
		}
		return 0;
	}
}