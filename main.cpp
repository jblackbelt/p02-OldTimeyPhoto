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
    cout << "row# " << bmp.size() << "  col# " << bmp[0].size() << endl; 
    for ( int i = 0; i < bmp.size(); i++)
    {
        for ( int x = 0; x < bmp[0].size(); x++)
        {
            
        }
    }
    // setup vector and imput var
    // ask user for a file to imput 
    // use imput to set up a bitmap
    // check and varify that bitmap is setup correctly
    // repeat (check to see which value (R,G,B) is the highest & set all vars to the highest var) while you go through the bitmap
    // call fuction to change to an .bmp
    // output bitmap to OldTimey.bmp
  
    return 0;
}
