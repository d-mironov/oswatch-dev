#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

#include <Arduino_GFX_Library.h>
#include "types.h"

class Framebuffer {
public:
    Framebuffer(Arduino_GFX* buf, u32 width, u32 height);
    ~Framebuffer() = default;
private:
    Arduino_GFX* buf;
    u32 width;
    u32 height;

};

#endif /* ifndef FRAMEBUFFER_H */
