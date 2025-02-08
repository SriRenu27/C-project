#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char text[256];

    printf("Enter text to speak: ");
    fgets(text, sizeof(text), stdin);

    
    char *newline = strchr(text, '\n');
    if (newline) {
        *newline = '\0';
    }

    
    char command[300];
    snprintf(command, sizeof(command), "espeak  \"%s\"", text);

    
    int result = system(command);
    if (result != 0) {
        printf("Error: Unable to execute espeak.\n");
    }

    return 0;
}