#include "contactManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addContact()
{
    FILE *fp = fopen("contacts.dat", "ab");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
    {
        Contact contact;
        printf("Enter name: ");
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

        fwrite(&contact, sizeof(Contact), 1, fp);
        fclose(fp);
        printf("Contact added successfully.\n");
    }
}

void seeAllContacts()
{
    FILE *fp = fopen("contacts.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
    {
        Contact contact;
        while (fread(&contact, sizeof(Contact), 1, fp))
        {
            if (contact.isActive == 0)
            {
                continue;
            }
            printf("Name: %s\n", contact.name);
            printf("Surname: %s\n", contact.surname);
            printf("Phone number: %s\n", contact.phone);
            printf("Email address: %s\n", contact.email);
            printf("Location: %s\n", contact.location);
            printf("Company: %s\n\n", contact.company);
        }
        fclose(fp);
    }
}

void deleteContact()
{
    FILE *fp = fopen("contacts.dat", "r+b");
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    else
    {
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
}