#ifndef MYHEADER_H
#define MYHEADER_H

int addComplex(int complex1[], int complex2[], int result[]) {
    result[0] = complex1[0] + complex2[0]; // Sum of real parts
    result[1] = complex1[1] + complex2[1]; // Sum of imaginary parts
    return 0;
}

#endif