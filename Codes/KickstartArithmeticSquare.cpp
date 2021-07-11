#include <iostream>
using namespace std;

unsigned long long int ap(unsigned long long int n1, unsigned long long int n2, unsigned long long int n3)
{
    if (n2 - n1 == n3 - n2)
        return 1;
    return 0;
}
unsigned long long int chkx(unsigned long long int i, unsigned long long int j)
{
    int x = (i + j) / 2;
    return x;
}

unsigned long long int greatest(unsigned long long int p, unsigned long long int q, unsigned long long int r, unsigned long long int t)
{
    if (p >= q && p >= r && p >= t)
    {
        return p;
    }
    if (q >= p && q >= r && q >= t)
    {
        return q;
    }
    if (r >= p && r >= q && r >= t)
    {
        return r;
    }
    if (t >= p && t >= q && t >= r)
    {
        return t;
    }
    return -1;
}

int main()
{
    unsigned long long int turn;
    cin >> turn;
    for (unsigned long long int i = 1; i <= turn; i++)
    {
        unsigned long long int a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;

        unsigned long long int halfsum = ap(a, b, c) + ap(f, g, h) + ap(a, d, f) + ap(c, e, h);

        unsigned long long int n1 = (chkx(a, h));
        unsigned long long int m1 = ap(d, n1, e) + ap(a, n1, h) + ap(c, n1, f) + ap(b, n1, g);

        unsigned long long int n2 = (chkx(c, f));
        unsigned long long int m2 = ap(d, n2, e) + ap(a, n2, h) + ap(c, n2, f) + ap(b, n2, g);

        unsigned long long int n3 = (chkx(b, g));
        unsigned long long int m3 = ap(d, n3, e) + ap(a, n3, h) + ap(c, n3, f) + ap(b, n3, g);

        unsigned long long int n4 = (chkx(d, e));
        unsigned long long int m4 = ap(d, n4, e) + ap(a, n4, h) + ap(c, n4, f) + ap(b, n4, g);
        cout << "Case #" << i << ": " << greatest(m1, m2, m3, m4) + halfsum << endl;
    }
    return 0;
}
