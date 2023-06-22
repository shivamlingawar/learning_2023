#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LOGS 100
#define MAX_LENGTH 100

typedef struct {
    char timestamp[MAX_LENGTH];
    char message[MAX_LENGTH];
} LogEntry;

LogEntry logs[MAX_LOGS];
int numLogs = 0;

void extractLogsFromFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return;
    }

    char line[MAX_LENGTH];
    while (fgets(line, sizeof(line), file) != NULL) {
        char* token;
        token = strtok(line, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }

        strcpy(logs[numLogs].timestamp, token);
        token = strtok(NULL, ",");
        if (token == NULL) {
            printf("Invalid line format: %s\n", line);
            continue;
        }

        strcpy(logs[numLogs].message, token);

        numLogs++;
        if (numLogs >= MAX_LOGS) {
            break; // Reached the maximum number of logs
        }
    }

    fclose(file);
}

void displayLogs() {
    printf("Log Entries:\n");
    for (int i = 0; i < numLogs; i++) {
        printf("Timestamp: %s", logs[i].timestamp);
        printf("Message: %s", logs[i].message);
        printf("\n");
    }
}

int main() {
    const char* filename = "data.csv";
    extractLogsFromFile(filename);
    displayLogs();

    return 0;
}
