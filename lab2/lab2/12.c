#define _CRT_SECURE_NO_WARNINGS
#define MAX_LENGTH_FILE_NAME 200
#include <stdio.h>

int read_txt(FILE** start_file, FILE** result_file);
int encryption_data(FILE* start_file, FILE* result_file, char key);

int main1() {
    while (1) {
        char key;
        FILE* start_file;
        FILE* result_file;
        read_txt(&start_file, &result_file);
        printf("Enter key: ");
        scanf(" %c", &key);
        encryption_data(start_file, result_file, key);
        fclose(start_file);
        fclose(result_file);
        printf("File was encrypted/decrypted successfully\nPress any key to resume\n");
        _getch();
        system("cls");
    }
    return 0;
}

int read_txt(FILE** start_file, FILE** result_file) {
    char filename[MAX_LENGTH_FILE_NAME];
    char result_filename[MAX_LENGTH_FILE_NAME];
    printf("Enter data file name (max length of name 200 chars): ");
    scanf("%200s", &filename);

    *start_file = fopen(filename, "r");

    if (*start_file == NULL)
    {
        printf("Error: could not open file %s\n", filename);
        return 1;
    }

    printf("Enter result file name (max length of name 200 chars): ");
    scanf("%s", &result_filename);
    *result_file = fopen(result_filename, "w");

    return 0;
}

int encryption_data(FILE* start_file, FILE* result_file, char key) {
    char c, res;

    while ((c = fgetc(start_file)) != EOF) {
        res = c ^ key;
        fputc(res, result_file);
    }
    return 0;
}