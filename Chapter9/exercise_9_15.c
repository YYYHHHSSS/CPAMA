double median(double x, double y, double z)
{
    double m;

    if (x < y) 
    {
        if (z > y)
            m = y;
        else if (z < x)
            m = x;
        else
            m = z;
    }
    else
    {
        if (y >= z)
            m = y;
        else if (x >= z)
            m = z;
        else
            m = x;
    }

    return m;
}
          
      

