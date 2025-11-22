/*
Name :Ayesha Ilias Shaikh 
UIN :251M024
Class : Mechanical
Div : F
Rollno: 21
*/
#include <stdio.h>

void addEmployee() {
    FILE *fp = fopen("employee.txt", "a");
    int id;
    char name[50];
    float salary;

    printf("Enter ID:\n");
    scanf("%d", &id);
    printf("Enter Name:\n");
    scanf("%s", name);
    printf("Enter Salary:\n");
    scanf("%f", &salary);

    fprintf(fp, "%d %s %.2f\n", id, name, salary);
    fclose(fp);
}

void displayEmployees() {
    FILE *fp = fopen("employee.txt", "r");
    int id;
    char name[50];
    float salary;
 
 
  

    fclose(fp);
}

int main() {
    int choice;

    while (1) {
        printf("\n1.Add Employee\n2.Display Employees\n3.Exit\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1) addEmployee();
        else if (choice == 2) displayEmployees();
        else if (choice == 3) break;
        else printf("Invalid choice\n");
    }

    return 0;
}

