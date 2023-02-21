float paye = 0.3 * (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance);
    int nhif = 500;
    int nssf = 200;

    float totalDeductions = paye + nhif + nssf;
    float netSalary = (Employee.empBasicSal + Employee.empHseAllowance + Employee.empCommAllowance) - totalDeductions;