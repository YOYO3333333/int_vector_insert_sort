#include "int_vector_insert_sort.h"

static struct int_vector swap(struct int_vector vec, size_t i, size_t j)
{
    int c = vec.data[i];
    vec.data[i] = vec.data[j];
    vec.data[j] = c;
    return vec;
}
struct int_vector int_vector_insert_sort(struct int_vector vec)
{
    size_t j = vec.size;
    while (j > 0)
    {
        size_t i = 0;
        while (i < j - 1)
        {
            if (vec.data[i] > vec.data[i + 1])
            {
                vec = swap(vec, i, i + 1);
            }
            i++;
        }
        j--;
    }
    return vec;
}
