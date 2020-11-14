#include "Magick"

int main(int argc, char* argv[])
{
    //on run parse cla's and open image form
    if (argc!=2)
    {
        printf("illegal usage: %s\nshould be: ./pixellength [filepath]");
        return -1;
    }

    int width, height; // from image

    while (true)
    {
        //wait for click
        //onclick get position calculate value of pixel and new window

        int x, y; //from cursor location on image

        pixel = image[y][x];//
        
        op = new pixel_operator(pixel.r, pixel.g, pixel.b);

        //open smaller window with the text:
        string s = op.wavelength_str();
    }
    return 0;
}
