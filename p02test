#include <vector>
#include "bitmap.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pic;
    Bitmap image;
    vector <vector <Pixle>> bmp;
    int loop = 0;
    while(loop == 0)
    { 
        cout<<"please imput a 24 bit depth Windows BMP file of a picture." << endl;
        cin >> pic;
        image.open(pic);
        bmp = image.toPixelMatrix();
        if (bmp.isImage())
        {
            loop = 1;
        }
        else
        {
            cout << "Error ";
        }
    }
    
    return 0;
}
