#include <cstdio>
#include <cstring>
#include <cstdlib>

int main (int argc, char** argv)
{
    char s[1024];
    char out[2048];
    int len_s;
    int n, m;
    scanf("%s %d", s, &m);
    
    n = atoi(s);
    len_s = strlen(s);
    
    int i=0;
    for (; i<m && i/len_s < n; ++i)
    {
        out[i] = s[ i % len_s ];
    }
    out[i] = '\0';
    
    printf("%s", out);
}
