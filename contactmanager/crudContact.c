#include "crudContact.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createContact()
{
    FILE *fp = openFile("contacts.dat", "ab");

    Contact contact;
    printf("Enter first name: ");
    scanf("%s", contact.name);
    printf("Enter surname: ");
    scanf("%s", contact.surname);
    printf("Enter phone number: ");
    scanf("%s", contact.phone);
    printf("Enter email address: ");
    scanf("%s", contact.email);
    printf("Enter location: ");
    scanf("%s", contact.location);
    printf("Enter company: ");
    scanf("%s", contact.company);
    contact.isActive = 1;

    if (doesContactExist(contact.name, contact.surname, contact.phone, contact.email, contact.location, contact.company))
    {
        printf("\nContact already exists.\n\n");
        fclose(fp);
        return;
    }

    fwrite(&contact, sizeof(Contact), 1, fp);
    fclose(fp);
    printf("Contact added successfully.\n");
}

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

void readContacts()
{
    FILE *fp = openFile("contacts.dat", "rb");

    Contact contact;
    while (fread(&contact, sizeof(Contact), 1, fp))
    {
        if (contact.isActive == 0)
        {
            continue;
        }
        printf("First Name: %s\n", contact.name);
        printf("Surname: %s\n", contact.surname);
        printf("Phone number: %s\n", contact.phone);
        printf("Email address: %s\n", contact.email);
        printf("Location: %s\n", contact.location);
        printf("Company: %s\n\n", contact.company);
    }

    fclose(fp);
}

void updateContact()
{
    FILE *fp = openFile("contacts.dat", "r+b");

    char nameToModify[30];
    printf("Enter name to modify: ");
    scanf("%s", nameToModify);

    Contact contact;
    int found = 0;

    while (fread(&contact, sizeof(Contact), 1, fp))
    {
        if (strcmp(contact.name, nameToModify) == 0)
        {
            found = 1;

            printf("Enter new first name: ");
            scanf("%s", contact.name);
            printf("Enter new surname: ");
            scanf("%s", contact.surname);
            printf("Enter new phone number: ");
            scanf("%s", contact.phone);
            printf("Enter new email address: ");
            scanf("%s", contact.email);
            printf("Enter new location: ");
            scanf("%s", contact.location);
            printf("Enter new company: ");
            scanf("%s", contact.company);

            fseek(fp, -(long)sizeof(Contact), SEEK_CUR);

            fwrite(&contact, sizeof(Contact), 1, fp);

            printf("\nContact modified successfully.\n");
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found.\n");
    }

    fclose(fp);
}

void deleteContact()
{
    FILE *fp = openFile("contacts.dat", "r+b");

    char nameToDelete[30];
    printf("Enter name of contact to delete: ");
    scanf("%s", nameToDelete);

    Contact contact;
    int found = 0;

    while (fread(&contact, sizeof(Contact), 1, fp))
    {
        if (strcmp(contact.name, nameToDelete) == 0 && contact.isActive == 1)
        {
            found = 1;
            contact.isActive = 0;

            fseek(fp, -(long)sizeof(Contact), SEEK_CUR);

            fwrite(&contact, sizeof(Contact), 1, fp);

            printf("Contact deleted successfully.\n");
            break;
        }
    }

    if (!found)
    {
        printf("Contact not found.\n");
    }

    fclose(fp);
}

void sortContacts()
{
    FILE *fp = openFile("contacts.dat", "r+b");
}
