// TODO: Contact Manager Project in C.

// ! Core Functionalities:
// ? Basic Storage: Store essential contact details, including:

// * Name
// * Phone Number
// * (Optional) Email Address, Location, and Company
// * File Management (CRUD Operations):
// * Implement file handling mechanisms to manage contacts, allowing users to:

// * Create: Add a new contact to the file.
// * Read: Display contact information from the file.
// * Update: Modify existing contact details.
// * Delete: Remove a contact from the file.
// * Search and Filter:
// * Allow users to search and filter contacts based on specific criteria such as:

// * Name
// * Location
// * Company
// * Additionally, implement sorting functionality by:
// * Name (Alphabetical Order)
// * Date Added (Chronologically)

#include <stdio.h>

typedef struct
{
    char name[20];
    char surname[100];
    char phone[20];
    char email[100];
    char location[100];
    char company[100];
} Contact;

void addContact()
{
    Contact contact;
    printf("Enter First Name: ");
    scanf("%s", contact.name);
    printf("Enter Surname: ");
    scanf("%s", contact.surname);
    printf("Enter Phone Number: ");
    scanf("%s", contact.phone);
    printf("--- Optional (You can avoid this section. Press enter if you want it) ---\n");
    printf("Enter Email Address: ");
    scanf("%s", contact.email);
    printf("Enter Location: ");
    scanf("%s", contact.location);
    printf("Enter Company: ");
    scanf("%s", contact.company);
    printf("Contact added successfully!\n");
}

int main()
{
    int choice;
    printf("--- Contact Manager ---\n");
    printf("1. Add Contact\n");
    printf("2. Delete Contact\n");
    printf("3. See All Contacts\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("--- Add Contact Details ---\n");
        break;
    case 2:
        printf("--- Select the contact to delete ---\n");
        break;
    case 3:
        printf("--- You are seeing all contacts ---\n");
        break;
    case 4:
        printf("--- Closing Program ---\n");
        break;
    default:
        printf("--- Your choice is invalid ---\n");
    }

    return 0;
}