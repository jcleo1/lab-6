int my_comparer(const void *this, const void *that)
{
    const Process *p1 = (const Process *)this;
    const Process *p2 = (const Process *)that;

    // 1. Higher priority first (descending order)
    if (p1->priority != p2->priority) {
        return p2->priority - p1->priority;
    }

    // 2. Tie-breaker: earlier arrival time first (ascending order)
    return p1->arrival_time - p2->arrival_time;
}