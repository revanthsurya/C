emp_id=1001
basic_salary=15000.00
allowances=6000.00
Gross_Salary = basic_salary + allowances
if Gross_Salary<5000:
    income_tax=0
    net_Salary = Gross_Salary - income_tax
elif Gross_Salary>=5001 and Gross_Salary<=10000:
    income_tax=(Gross_Salary/100)*10
    net_Salary = Gross_Salary - income_tax
elif Gross_Salary>=10001 and Gross_Salary<=20000:
    income_tax=(Gross_Salary/100)*20
    net_Salary = Gross_Salary - income_tax
else:
    income_tax=(Gross_Salary/100)*30
    net_Salary = Gross_Salary - income_tax
        
    
print("the employee id is :",emp_id)
print("the basic salray of the employee is : ",basic_salary)
print("the allowances are : ",allowances)
print("the income tax is : ",income_tax)
print("the gross salray of the employee is : ",Gross_Salary)
print("the net salray of the employee is : ",net_Salary)
