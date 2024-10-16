#include <stdio.h>
#include <stdlib.h>

void addContact();
void seeAllContacts();
void openMenu();
void menuOptions(int choice);

typedef struct
{
    char name[30];
    char surname[30];
    char phone[50];
    char email[50];
    char location[50];
    char company[50];
} Contact;

void openMenu()
{
    int choice;
    do
    {
        printf("--- Contact Manager ---\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. See All Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        openMenuOptions(choice);
    } while (choice != 4);
}

void openMenuOptions(int choice)
{
    switch (choice)
    {
    case 1:
        printf("--- Add Contact Details ---\n");
        addContact();
        break;
    case 2:
        printf("--- Select the contact to delete ---\n");
        // deleteContact() function would go here
        break;
    case 3:
        printf("--- All Contacts ---\n");
        seeAllContacts();
        break;
    case 4:
        printf("--- Closing Program ---\n");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
    }
}

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

        fprintf(fp, "Name: %s\nSurname: %s\nPhone: %s\nEmail: %s\nLocation: %s\nCompany: %s\n\n", contact.name, contact.surname, contact.phone, contact.email, contact.location, contact.company);
        fclose(fp);
        printf("Contact added successfully.\n");
    }
}

int main()
{
    menu();
    return 0;
}
