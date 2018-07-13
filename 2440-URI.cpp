#include <stdio.h>

#define MAX 50000

int id[MAX];
int sz[MAX];
int count;

int root(int);
int connected(int , int);
void unionn(int, int);

int main()
{
    int n, m, p, q, i;
    scanf("%d %d", &n, &m);
    count = n;
    for(i = 0; i < n; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d %d", &p, &q);
        unionn(p, q);
    }
    printf("%d\n", count);

    return 0;
}

int root(int i)
{
    while(i != id[i])
    {
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

int connected(int p, int q)
{
    return root(p) == root(q);
}

void unionn(int p, int q)
{
    int i = root(p);
    int j = root(q);
    if(i == j) return;
    --count;
    if(sz[i] < sz[j])
    {
        id[i] = j;
        sz[j] += sz[i];
    }
    else
    {
        id[j] = i;
        sz[i] += sz[j];
    }
}
