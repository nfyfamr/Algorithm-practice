#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int teamA[3] = { 0 };    // [point, winningMinuate, winningSecond]
    int teamB[3] = { 0 };
    unsigned char lastMin, lastSec;
    
    lastMin = lastSec = 0;
    scanf("%d", &N);
    while (N-- >= 0)
    {
        int goal, min, sec;
        
        if (N != -1)
        {
            scanf("%d %d:%d", &goal, &min, &sec);
        }
        else
        {
            min = 48;
            sec = 0;
        }
        
        if (teamA[0] > teamB[0])
        {
            teamA[1] += min - lastMin;
            teamA[2] += sec - lastSec;
        }
        else if (teamA[0] < teamB[0])
        {
            teamB[1] += min - lastMin;
            teamB[2] += sec - lastSec;
        }
        lastMin = min;
        lastSec = sec;
        (goal == 1) ? ++teamA[0] : ++teamB[0];
    }
    if (teamA[2] < 0)
    {
        --teamA[1];
        teamA[2] += 60;
    }
    else if (teamA[2] > 59)
    {
        ++teamA[1];
        teamA[2] -= 60;
    }
    if (teamB[2] < 0)
    {
        --teamB[1];
        teamB[2] += 60;
    }
    else if (teamB[2] > 59)
    {
        ++teamB[1];
        teamB[2] -= 60;
    }
    
    printf("%02d:%02d\n", teamA[1], teamA[2]);
    printf("%02d:%02d\n", teamB[1], teamB[2]);
    
    return 0;
}
