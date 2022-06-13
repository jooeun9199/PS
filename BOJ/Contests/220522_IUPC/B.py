point_sum = 0
score_sum = 0

for i in range(20):
    _, point, score = input().split()
    point = int(point[0])
    point_sum += point

    
    if score == 'A+':
        score_sum += 4.5 * point
    elif score == 'A0':
        score_sum += 4.0 * point
    elif score == 'B+':
        score_sum += 3.5 * point
    elif score == 'B0':
        score_sum += 3.0 * point
    elif score == 'C+':
        score_sum += 2.5 * point
    elif score == 'C0':
        score_sum += 2.0 * point
    elif score == 'D+':
        score_sum += 1.5 * point
    elif score == 'D0':
        score_sum += 1.0 * point
    elif score == 'F':
        score_sum += 0.0 * point
    elif score == 'P':
        point_sum -= point
            
print(score_sum / point_sum)