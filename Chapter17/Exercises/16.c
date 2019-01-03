int sum(int (*f)(int), int start, int end) {
    int i, sum = 0;

    for (i = start; i < end + 1; i++)
        sum += f(i);
}
        
