#ifndef MYHEADER_H
#define MYHEADER_H

int dot(int *array1, int *array2, int size)
{
    int i, result = 0;
    for(i = 0; i < size; i++)
    {
    	result += array1[i] * array2[i];
    }
    return result;
}


#endif
