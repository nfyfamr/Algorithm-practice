#include <cstdio>

int main(int argc, char** argv)
{
    int N;
    int teamA[2] = { 0 };
    int teamB[2] = { 0 };
    int lastSec;
    
    lastSec = 0;
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
        
        sec = min * 60 + sec;
        if (teamA[0] > teamB[0])
        {
            teamA[1] += sec - lastSec;
        }
        else if (teamA[0] < teamB[0])
        {
            teamB[1] += sec - lastSec;
        }
        lastSec = sec;
        (goal == 1) ? ++teamA[0] : ++teamB[0];
    }
    
    printf("%02d:%02d\n", teamA[1]/60, teamA[1]%60);
    printf("%02d:%02d\n", teamB[1]/60, teamB[1]%60);
    
    return 0;
}
