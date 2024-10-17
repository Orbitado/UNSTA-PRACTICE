#include "crudContact.h"
#include <stdio.h>
#include <stdlib.h>

int doesContactExist(const char *name, const char *surname, const char *phone, const char *email, const char *location, const char *company)
{
    FILE *fp = openFile("contacts.dat", "rb");

    Contact contact;
    while (fread(&contact, sizeof(Contact), 1, fp))
    {
        if (contact.isActive == 1 && strcmp(contact.name, name) == 0 && strcmp(contact.surname, surname) == 0 && strcmp(contact.phone, phone) == 0 && strcmp(contact.email, email) == 0 && strcmp(contact.location, location) == 0 && strcmp(contact.company, company) == 0)
        {
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);
    return 0;
}

int compareContacts(const void *a, const void *b, char option)
{
    const Contact *contact1 = (const Contact *)a;
    const Contact *contact2 = (const Contact *)b;

    switch (option)
    {
    case '1':
        return strcmp(contact1->name, contact2->name);
    case '2':
        return strcmp(contact1->surname, contact2->surname);
    case '3':
        return strcmp(contact1->company, contact2->company);
    default:
        return 0;
    }
}

// void sortContacts()
// {
//     FILE *fp = openFile("contacts.dat", "r+b");

//     qsort(fp, sizeof(Contact), sizeof(Contact), compareContacts);
// }