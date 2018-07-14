#include <iostream>

#define MAX 100000

int id[MAX];
int sz[MAX];

int root(int);
int connected(int , int);
void unionn(int, int);

int main()
{
    int i, n, b, c1, c2;
    char c;
    std::cin >> n >> b;
    for(i = 0; i < n; i++)
    {
        id[i] = i;
        sz[i] = 1;
    }
    for(i = 0; i < b; i++)
    {
        std::cin >> c >> c1 >> c2;
        if(c == 'F') unionn(c1, c2);
        else
        {
            if(connected(c1, c2)) std::cout << "S" << std::endl;
            else std::cout << "N" << std::endl;
        }
    }

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
