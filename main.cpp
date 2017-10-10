#include <vector>
#include <string>
#include "bitmap.h"
#include <iostream>

using namespace std;


int main()
{
    string pic = "machupicchu.bmp";
    Bitmap image;
    vector < vector < Pixel > > bmp;
    image.open(pic);
    bmp = image.toPixelMatrix();
    for ( int i = 0; i < bmp.size(); i++)
    {
        for ( int x = 0; x < bmp[0].size(); x++)
        {
            Pixel rgb = bmp[i][x];
            rgb.red = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/2;
            rgb.green = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/2;
            rgb.blue = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/2;
            bmp[i][x] = rgb;
        }
    }
    image.save("oldtimey.bmp");
    // setup vector and imput var
    // ask user for a file to imput 
    // use imput to set up a bitmap
    // check and varify that bitmap is setup correctly
    // repeat (set all vars to the average of the vars ) while you go through the bitmap
    // call fuction to change to an .bmp
    // output bitmap to OldTimey.bmp
  
    return 0;
}
