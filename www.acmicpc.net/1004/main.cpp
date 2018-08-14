#include <cstdio>

int main(int argc, char** argv)
{
    int T;
    
    scanf("%d", &T);
    while (T-- > 0)
    {
        int x1, y1;
        int x2, y2;
        int n;
        int cx, cy, r;
        bool fromA, fromB;
        
        int count;
        
        count = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);
        while (n-- > 0)
        {
            scanf("%d %d %d", &cx, &cy, &r);
            fromA = (x1 - cx)*(x1 - cx) + (y1 - cy)*(y1 - cy) < r*r;
            fromB = (x2 - cx)*(x2 - cx) + (y2 - cy)*(y2 - cy) < r*r;
            
            if ((fromA && !fromB) || (!fromA && fromB))
            {
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
