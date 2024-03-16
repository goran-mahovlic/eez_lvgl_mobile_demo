#include "ui.h"
#include "screens.h"
#include "images.h"
#include "flow_def.h"

static int16_t currentScreen = -1;

void ui_init() {
    eez_flow_init(assets, sizeof(assets), (lv_obj_t **)&objects, sizeof(objects), images, sizeof(images));
}

void ui_tick() {
    eez_flow_tick();
    // tick_screen(g_currentScreen);
    tick_screen(currentScreen);
}
