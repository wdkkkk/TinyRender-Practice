#include "tgaimage/tgaimage.hpp"

const TGAColor white = TGAColor{255,255,255,255,TGAImage::RGBA};
const TGAColor red   = TGAColor{0, 0, 255, TGAImage::RGBA};

int main()
{
    TGAImage img(100,100,TGAImage::RGB);
    img.set(10,20,red);
    img.flip_vertically();
    img.write_tga_file("output.tga");
    return 0;
}
