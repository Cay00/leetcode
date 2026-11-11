import pandas as pd

def double(x):
    return 2*x

def modifySalaryColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees.salary = employees.salary.apply(double)

    return employees