//https://community.home-assistant.io/t/pass-an-object-to-script/373061/4

#include "disp_utility.h"

void drawHeader(esphome::display::DisplayBuffer& it) {
    it.rectangle(0,  0, it.get_width(), it.get_height(), RGB(255,255,255));
    it.rectangle(0, 20, it.get_width(), it.get_height(), RGB(255,255,255));
}