
#include "Image.h"

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
