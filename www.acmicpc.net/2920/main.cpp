#include <cstdio>

int main(int argc, char** argv)
{
    int oct[8] = { 0 };
    bool asc, dsc;
    
    asc = dsc = true;
    scanf("%d", &oct[0]);
    for (int i = 1; i < 8; ++i)
    {
        scanf("%d", &oct[i]);
        asc = oct[i] > oct[i - 1] ? asc : false;
        dsc = oct[i] < oct[i - 1] ? dsc : false;
    }
    if (asc)
    {
        printf("ascending\n");
    }
    else if (dsc) {
        printf("descending\n");
    }
    else {
        printf("mixed\n");
    }
    
    return 0;
}
