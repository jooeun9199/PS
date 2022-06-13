num = int(input())

for i in range(num):
    height, weight = [int(x) for x in input().split()]
    BMI = weight / (height/100) / (height/100)
        
    if height < 140.1:
        print(6)
    elif height < 146:
        print(5)
    elif height < 159:
        print(4)
    elif height < 161:
        if BMI >= 16.0 and BMI < 35.0:
            print(3)
        else:
            print(4)
    elif height < 204:
        if BMI >= 20.0 and BMI < 25.0:
            print(1)
        elif (BMI >= 18.5 and BMI < 20.0) or (BMI >= 25.0 and BMI < 30.0):
            print(2)
        elif (BMI >= 16.0 and BMI < 18.5) or (BMI >= 30.0 and BMI < 35.0):
            print(3)
        else:
            print(4)
    else:
        print(4)