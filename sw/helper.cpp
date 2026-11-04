// C++ demo linked into the RV32 image (built with -fno-exceptions -fno-rtti,
// no libstdc++ / no heap available).

extern "C" int cpp_sum_of_squares(const int *values, int count)
{
    struct Accum
    {
        int total { 0 };
        void add(int x) { total += x * x; }
    };

    Accum a;
    for (int i = 0; i < count; i++)
        a.add(values[i]);

    return a.total;
}
