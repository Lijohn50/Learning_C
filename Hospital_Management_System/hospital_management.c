#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Patient information structure
typedef struct node
{
    int id;
    char name[500];
    int age;
    char birthdate[100];
    char gender[10];
    char contact[100];
    char address[500];
    char bloodgroup[20];
    struct node *next;
} node;

void patientinfo(node *phead);
void addnewpatient(node **phead);
void allpatients(node **phead, int id, char *name, int age, char *birthdate, char *gender, char *contact, char *address, char *bloodgroup);
void searchpatient(node *phead);
void deletepatient(node **phead);

//Medical report structure
typedef struct MedicalReport
{
    int patientID;
    char patientName[500];
    char reportDate[100];
    char reportType[700];
    char reportDetails[1000];
    struct MedicalReport *next;
} MedicalReport;

MedicalReport* createReport( int patientID, char *patientName, char *reportDate, char *reportType, char *reportDetails);
void addReport(MedicalReport **head, MedicalReport *newReport);
void searchByPatientName(MedicalReport *head, char *patientName);
void displayReports(MedicalReport *head);
void displayMenu();

// Define structure for billing records
struct BillingRecord {
    int patientID;
    char date[11];  // Format: "YYYY-MM-DD"
    float amount;
    struct BillingRecord* next;
};

struct BillingRecord* createRecord(int patientID, const char* date, float amount);
void insertRecord(struct BillingRecord** head, struct BillingRecord* newRecord);
void deleteRecord(struct BillingRecord** head, int patientID);
void printRecords(struct BillingRecord* head);
void sortRecordsByPatientID(struct BillingRecord** head);

//Waiting room structure
#define MAX_QUEUE_SIZE 200
typedef struct {
    char patients[MAX_QUEUE_SIZE][200];
    int front, rear;
} WaitingRoom;

void init_waiting_room(WaitingRoom* wr);
int is_full(WaitingRoom* wr);
int is_empty(WaitingRoom* wr);
void add_patient(WaitingRoom* wr, const char* name);
char* remove_patient(WaitingRoom* wr);
void print_waiting_list(WaitingRoom wr);

//node for patient info
node *phead = NULL;

int main ()
{
    printf("\n*****************************Welcome to our Hospital Management Project****************************\n");

    //static data for patient info
    allpatients(&phead, 203, "John Smith", 12, "March 12, 1985", "Male", "01873645274", "Gulshan-1, Dhaka 1212", "A+");
    allpatients(&phead, 205, "Alice Johnson", 30, "February 15, 1993", "Female", "01812345678", "Dhanmondi, Dhaka 1209", "B-");
    allpatients(&phead, 201, "Mohammad Rahman", 45, "June 22, 1978", "Male", "01898765432", "Gulshan-2, Dhaka 1213", "O+");
    allpatients(&phead, 204, "Fatima Ahmed", 27, "January 5, 1996", "Female", "01823456789", "Banani, Dhaka 1213", "A+");
    allpatients(&phead, 203, "Rafiq Hossain", 52, "November 30, 1971", "Male", "01834567890", "Shahbag, Dhaka 1000", "AB-");

    //medical report variables
    MedicalReport *head = NULL;
    int patientID;
    char patientName[500], reportDate[100], reportType[700], reportDetails[1000];

    //billing record variables
    struct BillingRecord* invoices = NULL;
    int bpatientID;
    float amount;
    char date[11];

    //waiting room variables
    WaitingRoom wr;
    init_waiting_room(&wr);
    int choice;
    char name[50];

    //menu
    int userchoice = 0;
    while(userchoice != 5)
        {
            printf("\nYour options are:\n");
            printf("*******************\n");
            printf("\n1.Patient Information.\n");
            printf("2.Medical Records.\n");
            printf("3.Billing Records.\n");
            printf("4.Wainting Room.\n");
            printf("5.Exit.\n");
            printf("\nEnter Your choice:\n");
            scanf("%d", &userchoice);
            switch(userchoice)
                {
                    case 1:
                        {
                            int pchoice;
                            while (pchoice != 5)
                                {
                                    printf("Your Options Are\n");
                                    printf("******************\n");
                                    printf("\n1.Show Patient Information.\n");
                                    printf("2.Add New patient\n");
                                    printf("3.Search patient with id.\n");
                                    printf("4.Remove a patient using id.\n");
                                    printf("5.Exit.\n");
                                    printf("\nEnter Your Choice: \n");
                                    scanf("%d", &pchoice);
                                    switch(pchoice)
                                        {
                                            case 1:
                                                {
                                                    patientinfo(phead);
                                                    break;
                                                }
                                            case 2:
                                                {
                                                    addnewpatient(&phead);
                                                    break;
                                                }
                                            case 3:
                                                {
                                                    searchpatient(phead);
                                                    break;
                                                }
                                            case 4:
                                                {
                                                    deletepatient(&phead);
                                                    break;
                                                }
                                            case 5:
                                                {
                                                    break;
                                                }
                                        }
                                }
                            break;
                        }
                    case 2:
                        {
                            int mchoice = 0;
                            while (mchoice != 4)
                                {
                                    displayMenu();
                                    printf("Enter your choice: ");
                                    scanf("%d", &mchoice);
                                    getchar();
                                    switch (mchoice)
                                    {
                                    case 1:
                                        printf("Enter patient ID: ");
                                        scanf("%d", &patientID);

                                        printf("Enter patient name : ");
                                        scanf(" %[^\n]", patientName);
                                        
                                        printf("Enter report date (YYYY-MM-DD): ");
                                        scanf(" %[^\n]", reportDate);
                            
                                        printf("Enter report type: ");
                                        scanf(" %[^\n]", reportType);
                            
                                        printf("Enter report details: ");
                                        scanf(" %[^\n]", reportDetails);
                            
                                        MedicalReport *newReport = createReport( patientID,patientName, reportDate, reportType, reportDetails);
                                        addReport(&head, newReport);
                                        printf("Medical report added successfully\n");
                                        break;
                            
                                    case 2:
                                        printf("Enter patient name to search : \n");
                                        scanf(" %[^\n]", patientName);
                                        searchByPatientName(head, patientName);
                                        break;
                            
                                    case 3:
                                        displayReports(head);

                                        break;
                            
                                    case 4:
                                        printf("Exiting...\n");
                                        break;
                            
                                    default:
                                        printf("Invalid choice! Please try again.\n");
                                    }
                                }
                                break;
                            }
                        case 3:
                            {
                                int bchoice = 0;
                                while (bchoice != 5)
                                {
                                    printf("\nYour options are:\n");
                                    printf("******************\n");
                                    printf("\n1. Add Billing Record\n2. Delete Billing Record\n3. Display Billing Records\n4. Sort Billing Records by Patient ID\n5. Exit\n");
                                    printf("Enter your choice: ");
                                    scanf("%d", &bchoice);

                                    switch (bchoice)
                                    {
                                        case 1:
                                            printf("Enter Patient ID: ");
                                            scanf("%d", &bpatientID);
                                            if (patientID <= 0) {
                                                printf("Invalid Patient ID. Please enter a positive number.\n");
                                                break;
                                            }
                                            printf("Enter Date (YYYY-MM-DD): ");
                                            scanf("%s", date);
                                            printf("Enter Amount: ");
                                            scanf("%f", &amount);
                                            insertRecord(&invoices, createRecord(bpatientID, date, amount));
                                            break;
                                        case 2:
                                            printf("Enter Patient ID to delete: ");
                                            scanf("%d", &patientID);
                                            if (bpatientID <= 0) {
                                                printf("Invalid Patient ID. Please enter a positive number.\n");
                                                break;
                                            }
                                            deleteRecord(&invoices, bpatientID);
                                            break;
                                        case 3:
                                            printf("Billing Records:\n");
                                            printRecords(invoices);
                                            break;
                                        case 4:
                                            sortRecordsByPatientID(&invoices);
                                            printf("Billing Records sorted by Patient ID:\n");
                                            printRecords(invoices);
                                            break;
                                        case 5:
                                            break;
                                        default:
                                            printf("Invalid choice. Please try again.\n");
                                    }
                                }
                                break;
                            }
                        case 4:
                            {
                                do {
                                        printf("\nYour options are:\n");
                                        printf("******************\n");
                                        printf("1. Add Patient\n2. Remove Patient\n3. Print Waiting List\n4. Exit\n");
                                        printf("Enter your choice:\n");
                                        scanf("%d", &choice);
                                        switch (choice)
                                        {
                                            case 1:
                                                printf("Enter patient name: ");
                                                scanf(" %[^\n]", name);
                                                add_patient(&wr, name);
                                                break;
                                            case 2: {
                                                char* patient = remove_patient(&wr);
                                                if (patient) {
                                                    printf("Removed: %s\n", patient);
                                                    free(patient);
                                                } else {
                                                    printf("No patients to remove.\n");
                                                }
                                                break;
                                            }
                                            case 3:
                                                printf("\nWaiting List:\n");
                                                printf("**************\n");
                                                print_waiting_list(wr);
                                                break;
                                            case 4:
                                                printf("Exiting..\n");
                                                break;
                                            default:
                                                printf("Wrong choice. Please try again.\n");
                                        }
                                    } while (choice != 4);
                                break;
                            }
                        case 5:
                            {
                                break;
                            }
                }

        }
}

//function to show the patient infos
void patientinfo(node *phead)
    {
        node *current = phead;
        int i = 1;
        while(current != NULL)
            {
               if(i < 10)
                    {
                        printf(" %d.Patient Id: %d\n", i, current->id);
                        printf("   Patient Name: %s\n", current->name);
                        printf("   Age: %d\n", current->age);
                        printf("   Date of Birth: %s\n", current->birthdate);
                        printf("   Gender: %s\n", current->gender);
                        printf("   Contact: %s\n", current->contact);
                        printf("   Address: %s\n", current->address);
                        printf("   Blood Type: %s\n", current->bloodgroup);
                        printf("\n");
                    }
                else 
                    {
                        printf(" %d.Patient Id: %d\n", i, current->id);
                        printf("   Patient Name: %s\n", current->name);
                        printf("   Age: %d\n", current->age);
                        printf("   Date of Birth: %s\n", current->birthdate);
                        printf("   Gender: %s\n", current->gender);
                        printf("   Contact: %s\n", current->contact);
                        printf("   Address: %s\n", current->address);
                        printf("   Blood Type: %s\n", current->bloodgroup);
                        printf("\n");
                    }
                current = current->next;
                i++;
            }
    }

//function to add user input values to new node
void allpatients(node **phead, int id, char *name, int age, char *birthdate, char *gender, char *contact, char *address, char *bloodgroup)
    {
        node *newnode = malloc(sizeof(node));
        newnode->id = id;
        strcpy(newnode->name,name);
        newnode->age = age;
        strcpy(newnode->birthdate,birthdate);
        strcpy(newnode->gender,gender);
        strcpy(newnode->contact, contact);
        strcpy(newnode->address,address);
        strcpy(newnode->bloodgroup,bloodgroup);
        newnode->next = NULL;

        if(*phead == NULL)
            {
                *phead = newnode;
            }
        else
            {
                node *current = *phead;
                while(current->next != NULL)
                    {
                        current = current->next;
                    }
                current->next = newnode;
            }
    }

//function to take user input values for patient info
void addnewpatient(node **phead)
    {
        int id;
        char name[500];
        int age;
        char birthdate[100];
        char gender[100];
        char contact[100];
        char address[100];
        char bloodgroup[100];

        printf("Enter a Id > 205(i.e 206,207):\n");
        scanf("%d", &id);
        printf("Enter Patient Name:\n");
        scanf(" %[^\n]", name);
        printf("Enter Patient Age:\n");
        scanf("%d", &age);
        getchar();
        printf("Enter Date of Birth (e.g., March 12, 1985):\n");
        scanf(" %[^\n]", birthdate);
        printf("Enter Gender:\n");
        scanf(" %[^\n]", gender);
        printf("Enter Contact Number:\n");
        scanf(" %[^\n]", contact);
        printf("Enter Address:\n");
        scanf(" %[^\n]", address);
        printf("Enter Blood Type:\n");
        scanf(" %[^\n]", bloodgroup);
        allpatients(phead, id, name, age, birthdate, gender, contact, address, bloodgroup);

        int choice;
        while(choice != 2)
            {
                printf("Your Choices: \n");
                printf("*************\n");
                printf("\n1,Show Patient Information.\n");
                printf("2.Exit.\n");
                printf("Enter Your Choice: \n");

                scanf("%d", &choice);
                switch (choice)
                    {
                        case 1:
                            {
                                patientinfo(*phead);
                                break;
                            }
                        case 2:
                            {
                                return;
                            }
                    }
            }
    }

//function to search a patient by id
void searchpatient(node *phead)
    {
        int id;
        int flag = 0;
        printf("Enter an id(i.e. 201, 203...) to search: \n");
        scanf("%d", &id);
        node *current = phead;
        while(current->next != NULL)
            {
                if(current->id == id)
                    {
                        printf("\nPatient Id: %d\n", current->id);
                        printf("Patient Name: %s\n", current->name);
                        printf("Age: %d\n", current->age);
                        printf("Date of Birth: %s\n", current->birthdate);
                        printf("Gender: %s\n", current->gender);
                        printf("Contact: %s\n", current->contact);
                        printf("Address: %s\n", current->address);
                        printf("Blood Type: %s\n", current->bloodgroup);
                        flag = 1;
                        break;
                    }
                current = current->next;
            }
        if(flag == 0)
            {
                printf("\nPatient not found!!\n\n");
            }
        return;
    }
    
//function to delete a patient by id
void deletepatient(node **phead)
    {
        int id;
        printf("Enter an Id(i.e. 201, 203, 204.....) to delete: \n");
        scanf("%d", &id);
        node *current = *phead;
        node *previous = NULL;

        if(current != NULL && current->id == id)
            {
                *phead = current->next;
                free(current);
            }
        while (current != NULL)
            {
                if(current->id == id)
                    {
                        previous->next = current->next;
                        free(current);
                        break;
                    }
                previous = current;
                current = current->next;
            }


    }

MedicalReport* createReport( int patientID, char *patientName, char *reportDate, char *reportType, char *reportDetails)
{
    MedicalReport *newReport = (MedicalReport*)malloc(sizeof(MedicalReport));
    newReport->patientID = patientID;
    strcpy(newReport->patientName, patientName);
    strcpy(newReport->reportDate, reportDate);
    strcpy(newReport->reportType, reportType);
    strcpy(newReport->reportDetails, reportDetails);
    newReport->next = NULL;
    return newReport;
}

void addReport(MedicalReport **head, MedicalReport *newReport)
{
    newReport->next = *head;
    *head = newReport;
}

void searchByPatientName(MedicalReport *head, char *patientName)
{
    MedicalReport *current = head;
    int found = 0;
    printf("Search results for patient: %s\n", patientName);
    while (current != NULL)
    {
        if (strcmp(current->patientName, patientName) == 0)
        {
            printf("Date: %s, Type: %s, Details: %s\n", current->reportDate, current->reportType, current->reportDetails);
            found = 1;
        }
        current = current->next;
    }
    if (found  == 0)
    {
        printf("No records found for patient: %s\n", patientName);
    }
}

void displayReports(MedicalReport *head)
{
    MedicalReport *current = head;
    if (current == NULL)
    {
        printf("No reports available.\n");
        return;
    }
    while (current != NULL)
    {
        printf("Patient ID: %d\nPatient Name: %s\nDate: %s\nType: %s\nDetails: %s\n",
               current->patientID, current->patientName, current->reportDate, current->reportType, current->reportDetails);
        current = current->next;
    }
}

void displayMenu()
{
    printf("\nYour options are:\n");
    printf("******************\n");
    printf("\n1. Add a new medical report\n");
    printf("2. Search by patient name\n");
    printf("3. Display all reports\n");
    printf("4. Exit\n");
}

// Function to create a new billing record
struct BillingRecord* createRecord(int patientID, const char* date, float amount) {
    struct BillingRecord* newRecord = (struct BillingRecord*)malloc(sizeof(struct BillingRecord));
    newRecord->patientID = patientID;
    strcpy(newRecord->date, date);
    newRecord->amount = amount;
    newRecord->next = NULL;
    return newRecord;
}

// Function to insert a record into the linked list (invoices list)
void insertRecord(struct BillingRecord** head, struct BillingRecord* newRecord) {
    newRecord->next = *head;
    *head = newRecord;
}

// Function to delete a record from the linked list
void deleteRecord(struct BillingRecord** head, int patientID) {
    struct BillingRecord* temp = *head;
    struct BillingRecord* prev = NULL;

    while (temp != NULL && temp->patientID != patientID) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid Patient ID: %d\n", patientID);
        return;
    }

    if (prev == NULL)
        *head = temp->next;
    else
        prev->next = temp->next;

    free(temp);
}

// Function to print all records
void printRecords(struct BillingRecord* head) {
    while (head != NULL) {
        printf("Patient ID: %d, Date: %s, Amount: %.2f\n", head->patientID, head->date, head->amount);
        head = head->next;
    }
}

// Functions to sort the linked list based on different criteria
void sortRecordsByPatientID(struct BillingRecord** head) {
    if (*head == NULL) return;
    struct BillingRecord* sorted = NULL;
    struct BillingRecord* current = *head;

    while (current != NULL) {
        struct BillingRecord* next = current->next;

        if (sorted == NULL || sorted->patientID >= current->patientID) {
            current->next = sorted;
            sorted = current;
        } else {
            struct BillingRecord* temp = sorted;
            while (temp->next != NULL && temp->next->patientID < current->patientID) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
        current = next;
    }
    *head = sorted;
}

// Initialize the waiting room
void init_waiting_room(WaitingRoom* wr) {
    wr->front = 0;
    wr->rear = 0;
}

// Check if queue is full
int is_full(WaitingRoom* wr) {
    return (wr->rear + 1) % MAX_QUEUE_SIZE == wr->front;
}

// Check if queue is empty
int is_empty(WaitingRoom* wr) {
    return wr->front == wr->rear;
}

// Add a patient
void add_patient(WaitingRoom* wr, const char* name) {
    if (is_full(wr)) {
        printf("Waiting room is full!\n");
        return;
    }
    strcpy(wr->patients[wr->rear], name);
    wr->rear = (wr->rear + 1) % MAX_QUEUE_SIZE;
}

// Remove a patient
char* remove_patient(WaitingRoom* wr) {
    if (is_empty(wr)) return NULL;
    char* name = malloc(50);
    strcpy(name, wr->patients[wr->front]);
    wr->front = (wr->front + 1) % MAX_QUEUE_SIZE;
    return name;
}

// Print the patient list
void print_waiting_list(WaitingRoom wr) {
    int i = wr.front;
    while (i != wr.rear) {
        printf("%d.%s\n", i + 1, wr.patients[i]);
        i = (i + 1) % MAX_QUEUE_SIZE;
    }
}
