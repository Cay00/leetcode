import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    answer = employees.head(3)
    return answer
