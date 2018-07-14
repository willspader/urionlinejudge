#include <iostream>
#include <algorithm>

#define MAXN 500

int id[MAXN];
int sz[MAXN];

struct aresta{
    int dis;
    int x, y;
};

int root(int);
bool comp(aresta, aresta);
int connected(int, int);
void unionn(int, int);

int main()
{
    int n, m, i, count = 0;
    std::cin >> n >> m;
    aresta l_aresta[m];
    for(i = 0; i < n; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }
    for(i = 0; i < m; i++)
    {
        std::cin >> l_aresta[i].x >> l_aresta[i].y >> l_aresta[i].dis;
    }
    std::sort(l_aresta, l_aresta+m, comp);
    for(i = 0; i < m; i++)
    {
        if(connected(l_aresta[i].x, l_aresta[i].y)) continue;
        unionn(l_aresta[i].x, l_aresta[i].y);
        count += l_aresta[i].dis;
    }
    std::cout << count << std::endl;

    return 0;
}

bool comp(aresta a, aresta b)
{
    return a.dis < b.dis;
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
