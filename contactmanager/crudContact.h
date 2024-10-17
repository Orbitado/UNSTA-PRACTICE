#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[30];
    char surname[30];
    char phone[50];
    char email[50];
    char location[50];
    char company[50];
    int isActive;
} Contact;

FILE *openFile(const char *fileName, const char *mode);
void createContact();
int doesContactExist();
void readContacts();
void updateContact();
void deleteContact();
void sortContacts();
