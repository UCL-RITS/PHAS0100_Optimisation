#ifndef KAHAN_H
#define KAHAN_H

template<typename T>
T Kahan_sum(const T &val, const long N)
{
    T sum = 0;
    T c = 0;
    T y, t;
    for (long i = 0; i < N; i++)
    {
        y = val - c;
        t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }

    return sum;
}

template<typename T>
T trivial_sum(const T &val, const long N)
{
    T sum = 0;
    for(long i = 0; i < N; i++)
    {
        sum = sum + val;
    }
    return sum;
}

#endif