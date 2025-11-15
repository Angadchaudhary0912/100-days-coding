//Search for an element in an array using linear search.
#include <stdio.h>
#include <string.h>
#define max_employes 100
struct Employee {
    char name[50];
    int id;
    float salary;
};
void searchEmployeeById(struct Employee employees[], int count, int id) {
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Employee Found: Name: %s, ID: %d, Salary: %.2f\n", employees[i].name, employees[i].id, employees[i].salary);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}
int main() {
    struct Employee employees[max_employes];
    int count, idToSearch;

    printf("Enter number of employees: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("Enter details for employee %d (Name ID Salary): ", i + 1);
        scanf("%s %d %f", employees[i].name, &employees[i].id, &employees[i].salary);
    }

    printf("Enter Employee ID to search: ");
    scanf("%d", &idToSearch);

    searchEmployeeById(employees, count, idToSearch);

    return 0;
}
