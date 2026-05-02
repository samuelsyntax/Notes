#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "db.h"


void help(void){
    printf("Notes Manager CLI\n");
    printf("Usage:\n");
    printf("  notes add <title> <content>   - Add a new note\n");
    printf("  notes list                     - List all notes\n");
    printf("  notes view <id>                - View a note by ID\n");
    printf("  notes delete <id>              - Delete a note by ID\n");
    printf("  notes help                     - Show this help message\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        help();
        return 1;
    }
}
    