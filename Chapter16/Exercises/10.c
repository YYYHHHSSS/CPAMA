#include <stdbool>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int a(struct rectangle r)
{
    return (r.lower_right.x - r.upper_left.x) * (r.upper_left.y - r.lower_right.y);
}

struct point b(struct rectangle r)
{
    struct point temp;
    temp.x = (r.lower_right.x - r.upper_left.x) / 2;
    temp.y = (r.upper_left.y - r.lower_right.y) / 2;
    return temp;
}

struct rectangle c(struct rectangle c, int x, int y)
{
    r.lower_right.x += x;
    r.upper_left.x += x;
    r.lower_right.y += y;
    r.upper_left.y += y;

    return r;
}

bool d(struct rectangle c, struct point p)
{
    return (p.x >= c.upper_left.x && p.x <= c.lower_right.x) && (p.y >= c.lower_right.y && p.y <= c.upper_left.y);
}
