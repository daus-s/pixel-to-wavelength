#include "selection.cpp"
#include "pixel_operator.h"
#include <string>


float pixel_operator::wavelength()
{
    float w = 0f;

    //function of r,g,b
    short q = max(r, g, b); //largest pixel value
    short s = mid(r, g, b); //2nd largest pixel value

    //determine which r, g,b values are the largest
    char l = key("rgb", q, r, g, b);
    char m = key("rgb", s, r, g, b);

    float c1 = wavelength_from_rv(l);
    float c2 = wavelength_from_rv(m);

    w = .5*(c1*((float)q/255.0) + c2*((float)s/255.0));

    wavelength=w;
    return w;
}

string pixel_operator::wavelength_str()
{
    if (wavelength==-1)
    {
        wavelength();
    }
    char str[64];
    sprintf(str, "the wavelength of specified pixel(%d,%d,%d) is %f nm\n", r, g, b, wavelength);

    return str;
}

pixel_operator::pixel_operator(short r1, short g1, short b1)
{
    r = r1;
    g = g1;
    b = b1;
    wavelength = -1;
}
