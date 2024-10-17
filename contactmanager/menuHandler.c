#include "menuHandler.h"
#include <stdio.h>
#include "crudContact.h"

void openMenu()
{
    int choice;
    do
    {
        printf("--- Contact Manager ---\n\n");
        printf("1. Add Contact\n");
        printf("2. See All Contacts\n");
        printf("3. Delete Contact\n");
        printf("4. Modify Contact\n");
        printf("5. Sort Contact\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        openMenuOptions(choice);
    } while (choice != 6);
}

void openMenuOptions(int choice)
{
    switch (choice)
    {
    case 1:
        printf("--- Add Contact Details ---\n\n");
        createContact();
        break;
    case 2:
        printf("--- All Contacts ---\n\n");
        readContacts();
        break;
    case 3:
        printf("--- Select the contact to delete ---\n\n");
        deleteContact();
        break;
    case 4:
        printf("--- Select the contact to update ---\n");
        updateContact();
        break;
    case 5:
        printf("--- Sort Contacts ---\n");
        printf("This feature will be added soon...\n");
        // sortContacts();
        break;
    case 6:
        printf("--- Closing Program ---\n");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
    }
}

void openMenuSortOptions()
{
    int choice;
    printf("--- Select a sort option ---\n\n");
    printf("1. Sort by First Name\n");
    printf("2. Sort by Surname\n");
    printf("3. Sort by Company\n");
    scanf("%d", &choice);
    openMenuOptions(choice);
}
