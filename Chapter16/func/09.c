#include <stdbool>

struct color {
    int red;
    int green;
    int blue;
};

int set_color(int x)
{
    if (x < 0) return 0;
    else if (x > 255) return 255;
    else return x;
}

struct color make_color(int red, int green, int blue)
{
    struct color the_color;

    the_color.red = set_color(red);
    the_color.green = set_color(green);
    the_color.blue = set_color(blue);

    return the_color;
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue;
}

struct color brighter(struct color c)
{
    make_color(c.red, c.green, c.blue);
    
    if (c.red == 0 && c.green == 0 && c.blue == 0) {
        c.red = 3;
        c.green = 3;
        c.blue = 3;
        return c;
    }

    if (c.red < 3) c.red = 3 * 10 / 7;
    else if (c.green < 3) c.green = 3 * 10 / 7;
    else if (c.blue < 3) c.blue = 3 * 10 / 7;

    make_color(c.red, c.green, c.blue);

    return c;
}

struct color darker(struct color c)
{
    c.red = c.red * 7 / 10;
    c.green = c.green * 7 / 10;
    c.blue = c.blue * 7 / 10;

    return c;
}



