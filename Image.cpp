
#include "Image.h"

Image::Image(unsigned int _width, unsigned int _height, unsigned int _channels)
{
    m_width=_width;
    m_height=_height;
    m_channels=_channels;
    m_pixels= std::make_unique<unsigned char []>(m_width);
}

unsigned char * Image::pixels()
{
    return m_pixels.get();

}

unsigned int Image::width() const noexcept
{

    return m_width;

}

unsigned int Image::height() const noexcept
{

    return m_height;
}

unsigned int Image::channels() const noexcept
{

    return m_channels;
}
