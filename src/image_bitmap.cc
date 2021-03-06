#include "image_bitmap.h"

USING_NAMESPACE_HTML5;

ImageBitmap::ImageBitmap(emscripten::val v) :
    Object(v)
{

}

ImageBitmap::~ImageBitmap()
{

}

ImageBitmap *ImageBitmap::create(emscripten::val v)
{
    auto bitmap = new ImageBitmap(v);
    bitmap->autorelease();
    return bitmap;
}

HTML5_PROPERTY_IMPL(ImageBitmap, unsigned long, height);
HTML5_PROPERTY_IMPL(ImageBitmap, unsigned long, width);
