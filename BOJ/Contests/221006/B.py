num = int(input())

for i in range(num):
    year, month = [int(x) for x in input().split()]
    
    if month == 1:
        print(year-1, 12, 31)
    elif month == 3:
        if (year%100 != 0 and year%4 == 0) or (year%400 == 0):
            print(year, 2, 29)
        else:
            print(year, 2, 28)
    elif month == 5 or month == 7 or month == 10 or month == 12:
        print(year, month-1, 30)
    else:
        print(year, month-1, 31)