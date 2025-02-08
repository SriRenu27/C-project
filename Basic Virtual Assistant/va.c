#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void greet();
void systemInfo();
void openFile(char *fileName);
void trimNewline(char *str);
int main() {
    char command[100];
    printf("Basic Virtual Assistant\n");
    printf("Type 'exit' to quit.\n");
    while (1) {
        printf("\nYou: ");
        fgets(command, sizeof(command), stdin);
        trimNewline(command); 
        if (strcmp(command, "exit") == 0) {
            printf("Goodbye!\n");
            break;
        } else if (strcmp(command, "greet") == 0) {
            greet();
        } else if (strcmp(command, "info") == 0) {
            systemInfo();
        } else if (strncmp(command, "open ", 5) == 0) {
            openFile(command + 5); 
        } else {
            printf("Unknown command. Try 'greet', 'info', or 'open <file>'.\n");
        }
    }

    return 0;
}

void greet() {
    printf("Hello! How can I assist you today?\n");
}

void systemInfo() {
    printf("This is a basic virtual assistant running in C.\n");
}

void openFile(char *fileName) {
    if (fileName && strlen(fileName) > 0) {
        char trimmedFileName[150];
        snprintf(trimmedFileName, sizeof(trimmedFileName), "%s", fileName);
        trimNewline(trimmedFileName);  
        printf("Attempting to open file: %s\n", trimmedFileName);
        char command[150];
        snprintf(command, sizeof(command), "notepad \"%s\"", trimmedFileName); 
        system(command);
    } else {
        printf("Please specify a file to open.\n");
    }
}
void trimNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}
