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

// FILE MANAGER
FILE *openFile(const char *fileName, const char *mode);
// CRUD CONTACT
void createContact();
void readContacts();
void updateContact();
void deleteContact();
// CONTACT HANDLERS
void sortContacts(int choice);
int doesContactExist(const char *name, const char *surname, const char *phone, const char *email, const char *location, const char *company);
