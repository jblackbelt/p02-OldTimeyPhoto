#include <vector>
#include <string>
#include "bitmap.h"
#include <iostream>

using namespace std;

int main()
{
    int maxBorderr, maxBorderc = 15;
    string pic ;
    Bitmap image;
    for(;;)
    {
        cout << "please enter a bmp image." << endl;
        cin >> pic;
        Bitmap in;
        in.open(pic);
        if(in.isImage())
        {
            image = in;
            break;
        }
        else
        {
            cout << "Image that was input was a invalid image. Please imput a valid bmp image." << endl;
        }
    }
    vector < vector < Pixel > > bmp1;
    bmp1 = image.toPixelMatrix();
    Pixel black;
    black.red=1;
    black.green=1;
    black.blue=1;
    Pixel rgb;
    maxBorderr = bmp1.size()/138;
    maxBorderc = bmp1[0].size()/138;
    vector < vector < Pixel >  > bmp (bmp1.size() + maxBorderr*2 , vector < Pixel > ( bmp1[0].size() + maxBorderc*2));
    for ( int i = 0; i < bmp.size(); i++)
    {
        for ( int x = 0; x < bmp[i].size(); x++)
        {
            bmp[i][x] = black;
        }
    }
    for ( int i = maxBorderr; i < bmp.size() - maxBorderr; i++)
    {
        for ( int x = maxBorderc; x < bmp[i].size() - maxBorderc; x++)
        {
            bmp[i][x] = bmp1[i - maxBorderr][x - maxBorderc];
        }
    }
    for ( int i = 0; i < bmp.size(); i++)
    {
        for ( int x = 0; x < bmp[i].size(); x++)
        {
            rgb = bmp[i][x];
            rgb.red = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/3;
            rgb.green = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/3;
            rgb.blue = (bmp[i][x].red + bmp[i][x].green + bmp[i][x].blue)/3;
            bmp[i][x] = rgb;
        }
    }
    Bitmap last;
    last.fromPixelMatrix(bmp);
    last.save("oldtimey.bmp");
    // setup vector and imput var
    // ask user for a file to imput 
    // use imput to set up a bitmap
    // check and varify that bitmap is setup correctly
    // repeat (set all vars to the average of the vars ) while you go through the bitmap
    // call fuction to change to an .bmp
    // output bitmap to OldTimey.bmp
  
    return 0;
}
