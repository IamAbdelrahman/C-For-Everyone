/******************************************************************************
 * Copyright (C) 2024 by Abdelrahman Kamal - C-For-Everyone
 *****************************************************************************/
/**
 * @file Struct_Social_Science.c
 * @program: 	Write a struct that has a member that is the name of a business department:
 *              HR, Sales, Research, Software, and Executive.
 *              A second member that is an annual salary as an int.
 *              A third member that is a social security number(unsigned).
 *              Generate 10 employees with different social security numbers.
 *              Invent a salary generator for each department.
 *              Print out the 10 employees and their values to the screen-one line at a time.
 *
 * @author Abdelrahman Kamal
 * @date 01/01/2024
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
typedef enum business_dep
{
    HR = 1,
    SALES,
    RESEARCH,
    SOFTWARE,
    EXECUTIVE,
} BUSINESS_DEP_t;

typedef struct employee
{
    BUSINESS_DEP_t name;
    int salary;
    unsigned int security_number;
} SEmployee_t;

void inventSalary(SEmployee_t *Ps)
{
    switch (Ps->name)
    {
    case HR:
        Ps->salary = 1000 + rand() % 1500;
        break;
    case SALES:
        Ps->salary = 1000 + rand() % 2000;
        break;
    case RESEARCH:
        Ps->salary = 1000 + rand() % 3000;
        break;
    case SOFTWARE:
        Ps->salary = 1000 + rand() % 5000;
        break;
    case EXECUTIVE:
        Ps->salary = 1000 + rand() % 10000;
        break;
    default:
        break;
    }
}

void generateSecurityNum(SEmployee_t *Ps)
{
    static unsigned int count = 0;
    Ps->security_number = count++;
}

void generateEmployees(SEmployee_t employee[])
{
    void printEmployees(SEmployee_t *);
    int i = 0;
    for (i = 0; i < SIZE; i++)
    {
        employee[i].name = 1 + rand() % 4;
        inventSalary(&employee[i]);
        generateSecurityNum(&employee[i]);
        printEmployees(&employee[i]);
        printf("--------\n");
    }
}

void printEmployees(SEmployee_t *Ps)
{
    static int number = 0;
    switch (Ps->name)
    {
    case HR:
        printf("Employee Number %d:\n", ++number);
        printf("Business department: %s\t", "HR");
        printf("Salary: %d\t", Ps->salary);
        printf("Security Number: %d\n", Ps->security_number);
        break;
    case SALES:
        printf("Employee Number %d:\n", ++number);
        printf("Business department: %s\t", "Sales");
        printf("Salary: %d\t", Ps->salary);
        printf("Security Number: %d\n", Ps->security_number);
        break;
    case SOFTWARE:
        printf("Employee Number %d:\n", ++number);
        printf("Business department: %s\t", "Software");
        printf("Salary: %d\t", Ps->salary);
        printf("Security Number: %d\n", Ps->security_number);
        break;
    case RESEARCH:
        printf("Employee Number %d:\n", ++number);
        printf("Business department: %s\t", "Research");
        printf("Salary: %d\t", Ps->salary);
        printf("Security Number: %d\n", Ps->security_number);
        break;
    case EXECUTIVE:
        printf("Employee Number %d:\n", ++number);
        printf("Business department: %s\t", "Executive");
        printf("Salary: %d\t", Ps->salary);
        printf("Security Number: %d\n", Ps->security_number);
        break;
    default:
        break;
    }
}
int main(void)
{
    SEmployee_t employee[SIZE];
    srand(time(NULL));
    printf("The employees: \n");
    generateEmployees(employee);
    return 0;
}