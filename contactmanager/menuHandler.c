#include "menuHandler.h"
#include <stdio.h>
#include "contactManager.h"

void openMenu()
{
    int choice;
    do
    {
        printf("--- Contact Manager ---\n\n");
        printf("1. Add Contact\n");
        printf("2. Delete Contact\n");
        printf("3. See All Contacts\n");
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
        addContact();
        break;
    case 2:
        printf("--- Select the contact to delete ---\n\n");
        deleteContact();
        break;
    case 3:
        printf("--- All Contacts ---\n\n");
        seeAllContacts();
        break;
    case 4:
        printf("--- Modify Contacts ---\n");
        // modifyContact();
        break;
    case 5:
        printf("--- Sort Contacts ---\n");
        // sortContacts();
        break;
    case 6:
        printf("--- Closing Program ---\n");
        break;
    default:
        printf("Invalid choice. Please try again.\n");
    }
}
