#include <stdio.h>
#include <string.h>

#define N 10
// Define structure for student
struct EMPLOYEE {
    char name[30];
    int ID;
    int age;
    char role[30];
};

// Function to find average age by job roles
int retAvgAge(struct EMPLOYEE s[], char ask_role[30]) {
    int sum = 0;
    int number = 0;
    float average;
 
	
	// extracting the ages from the desired role
    for (int i = 0; i < N; i++) {
        if (strcmp(s[i].role, ask_role) == 0){
            sum += s[i].age;  // add age if found to the annual list if found
            number += 1;
        }
    }
	average = sum / number;


    return average; // Return -1 if not found
}

int main() {
    struct EMPLOYEE Employees[N] = {
    // 3 data scientists, 2 Web developers, 1 Product Managers, 2 ML scientists
    // 3 Mobile Developers
        {"Alice", 101, 20, "Web-Developer"},
        {"Bob", 102, 21, "Data-scientist"},
        {"Charlie", 103, 29, "Mobile-Developers"},
        {"David", 104, 30, "ML-scientist"},
        {"Eve", 105, 22, "Data-scientist"},
        {"Fedrick", 106, 22, "Web-Developer"},
        {"Garland", 107, 21, "Data-scientist"},
        {"Harley", 108, 29, "Product-Manager"},
        {"Issa", 109, 30, "ML-scientist"},
        {"Jave", 110, 22, "Mobile-Developer"}
    };
    
    char ask_role[30];

    printf("Enter your job to search for the average age? : ");
    scanf("%s", ask_role);

    float want = retAvgAge(Employees, ask_role);
    printf("The average age for this job description is : %f\n", want);
    return 0;
}
