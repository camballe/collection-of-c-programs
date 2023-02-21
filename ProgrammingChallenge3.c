#include <stdio.h>
#include <string.h>

typedef struct
{
    char empName[100];
    int empPayrollNo;
    int empBasicSal;
    int empHseAllowance;
    int empCommAllowance;
} employee;

employee Employee;

int createPaySlip()
{

    printf("==========CREATE PAYSLIP==========\n");
    printf("Enter employee's name:\t");
    fgets(Employee.empName, 100, stdin);
    printf("Enter employee's payroll number:\t");
    scanf("%d", &Employee.empPayrollNo);
    printf("Enter employee's basic salary:\t");
    scanf("%d", &Employee.empBasicSal);
    printf("Enter employee's house allowance:\t");
    scanf("%d", &Employee.empHseAllowance);
    printf("Enter employee's commuter allowance:\t");
    scanf("%d", &Employee.empCommAllowance);

    // Deductions
    float paye = 0.3 * (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance);
    int nhif = 500;
    int nssf = 200;
    float totalDeductions = paye + nhif + nssf;
    float netSalary = (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance) - totalDeductions;

    FILE *payslip;
    payslip = fopen("payslips.txt", "a");

    fprintf(payslip, "=========PAYSLIP=========\nNAME:\t%s\nPAYROLL NO:\t%d\nBASIC SALARY:\tKshs.%d\nHOUSE ALLOWANCE:\tKshs.%d\nCOMMUTER ALLOWANCE:\tKshs.%d\n\n=====DEDUCTIONS=====\nPAYE:\tKshs.%f\nNHIF:\tKshs.%d\nNSSF:\tKshs.%d\n\n\nNET SALARY:\tKshs.%f\n\n\n\n\n", Employee.empName, Employee.empPayrollNo, Employee.empBasicSal, Employee.empHseAllowance, Employee.empCommAllowance, paye, nhif, nssf, netSalary);

    printf("\n\nPayslip created successfully!!\n\n");
    printf("=========PAYSLIP=========\nNAME:\t%s\nPAYROLL NO:\t%d\nBASIC SALARY:\tKshs.%d\nHOUSE ALLOWANCE:\tKshs.%d\nCOMMUTER ALLOWANCE:\tKshs.%d\n\n=====DEDUCTIONS=====\nPAYE:\tKshs.%f\nNHIF:\tKshs.%d\nNSSF:\tKshs.%d\n\n\nNET SALARY:\tKshs.%f\n\n\n\n\n", Employee.empName, Employee.empPayrollNo, Employee.empBasicSal, Employee.empHseAllowance, Employee.empCommAllowance, paye, nhif, nssf, netSalary);

    fclose(payslip);
}

int main()
{
    float paye = 0.3 * (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance);
    int nhif = 500;
    int nssf = 200;

    float totalDeductions = paye + nhif + nssf;
    float netSalary = (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance) - totalDeductions;

    FILE *readPayslips;
    int choiceOfOperation, payslipFound;
    char name[100];
    printf("\n\n1. Create Payslip\n2. View a given employee's payslip\n\nPLEASE CHOOSE AN OPERATION\n");
    scanf("%d", &choiceOfOperation);
    getchar();

    switch (choiceOfOperation)
    {
    case 1:
        createPaySlip();
        break;
    case 2:

        printf("Enter the name of the employee:\t");
        // fgetc(stdin);
        fgets(name, 50, stdin);
        readPayslips = fopen("payslips.txt", "r");
        while (fread(&Employee, sizeof(employee), 1, readPayslips))
        {
            if (strcmp(Employee.empName, name))
            {
                printf("=========PAYSLIP=========\nNAME:\t%s\nPAYROLL NO:\t%d\nBASIC SALARY:\tKshs.%d\nHOUSE ALLOWANCE:\tKshs.%d\nCOMMUTER ALLOWANCE:\tKshs.%d\n\n=====DEDUCTIONS=====\nPAYE:\tKshs.%f\nNHIF:\tKshs.%d\nNSSF:\tKshs.%d\n\n\nNET SALARY:\tKshs.%f\n\n\n\n\n", Employee.empName, Employee.empPayrollNo, Employee.empBasicSal, Employee.empHseAllowance, Employee.empCommAllowance, paye, nhif, nssf, netSalary);
                payslipFound = 1;
            }
            else
            {
                payslipFound = 0;
            }
        }
        if (payslipFound = 0)
        {
            printf("Sorry the payslip for %s does not exist", name);
        }
        fclose(readPayslips);
        break;
    }
}