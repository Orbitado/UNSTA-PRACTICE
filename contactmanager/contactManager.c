#include "contactManager.h"
#include <stdio.h>
#include <stdlib.h>

void addContact()
{
    FILE *fp = fopen("contacts.txt", "a+");
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

        fprintf(fp, "--- Contact Details ---\nName: %s\nSurname: %s\nPhone: %s\nEmail: %s\nLocation: %s\nCompany: %s\n\n", contact.name, contact.surname, contact.phone, contact.email, contact.location, contact.company);
        fclose(fp);
        printf("Contact added successfully.\n");
    }
}

void seeAllContacts()
{
    FILE *fp = fopen("contacts.txt", "r");
    if (fp == NULL)
    {
        printf("No contacts available.\n");
        return;
    }
    else
    {

        char line[1024];

        while (fgets(line, sizeof(line), fp))
        {
            printf("%s", line);
        }
        fclose(fp);
    }
}
