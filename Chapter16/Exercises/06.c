struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds)
{
    struct time now;
    now.seconds = total_seconds % 60;
    now.minutes = total_seconds / 60 % 60;
    now.hours = total_seconds / 60 / 60;

    return now;
}


