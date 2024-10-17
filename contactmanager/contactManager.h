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

void addContact();
void seeAllContacts();
