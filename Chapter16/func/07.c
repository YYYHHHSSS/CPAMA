struct fraction {
    int numerator, denominator;
};

struct fraction a(struct fraction f)
{
    int i = f.numerator, j = f.denominator;
    while (j != 0) {         // i is GCD
       j = i ^ j;
       i = j ^ i;
       j = (j ^ i) % i;
    }
    f.numerator /= i;
    f.denominator /= i;

    return f;
}

struct fraction b(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;

    return a(f);
}

struct fraction c(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    f.denominator = f1.denominator * f2.denominator;

    return a(f);
}

struct fraction d(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.nominator;
    f.denominator = f1.denominator * f2.denominator;

    return a(f);
}

struct fraction e(struct fraction f1, struct fraction f2)
{
    struct fraction f;

    f.numerator = f1.numerator * f2.denominator;
    f.denominator = f1.denominator * f2.nominator;

    return a(f);
}

        
        

