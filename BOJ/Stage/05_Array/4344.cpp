#include <stdio.h>

int main()
{
    int n,students, sum, avg, cnt;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        sum = 0, cnt = 0;
        scanf("%d", &students);
        int score[students];
        for (int i = 0; i < students; i++)
        {
            scanf("%d", &score[i]);
            sum += score[i];
        }

        avg = sum / students;

        for(int i = 0 ; i<students; i++)
            if(avg<score[i]) cnt++;
        printf("%.3f%%\n", (float)cnt/students*100);
    }

    return 0;
}