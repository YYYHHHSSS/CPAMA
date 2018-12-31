#define RECTANGLE 1
#define CIRCLE 0
#define PI 3.14

struct point { int x, y; };
struct shape {
    int shape_kind;         /* RECTANGLE or CIRCLE */
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

int a(struct shape s)
{
    if (s.shape_kind == RECTANGLE)
        return s.u.rectangle.height * s.u.rectangle.width;
    else if (s.shape_kind == CIRCLE)
        return s.u.circle.radius * s.u.circle.radius * PI;
}

struct shape b(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

struct shape c(struct shape s, double c)
{
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.height /= c;
        s.u.rectangle.width /= c;
    }
    else if (s.shape_kind == CIRCLE)
        s.u.circle.radius /= c;

    return s;
}
