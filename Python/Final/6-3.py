def pay(salary_per_hour, hours):
    cnt = 0.0
    if hours <= 0:
        return 0
    if hours <= 40:
        cnt += hours * salary_per_hour
    elif hours <= 60:
        cnt = 40 * salary_per_hour + (hours-40) * 1.5 * salary_per_hour
    else:
        cnt = 40 * salary_per_hour + 20 * 1.5 * salary_per_hour + (hours-60) * salary_per_hour * 2
    return cnt
salary_per_hour = int(input())
hours = int(input())
print(pay(salary_per_hour, hours))