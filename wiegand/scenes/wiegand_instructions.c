#include "../wiegand.h"

void wiegand_instructions_scene_on_enter(void* context) {
    App* app = context;
    widget_reset(app->widget);
    widget_add_string_element(app->widget, 0, 0, AlignLeft, AlignTop, FontPrimary, "Instructions");
    widget_add_text_scroll_element(
        app->widget,
        0,
        15,
        128,
        40,
        "Version 1.5\n"
        "Made with love by\n"
        "Raik Schneider\n"
        "(Einstein2150)\n"
        "Use only on devices you own!\n"
        "\nWIEGAND Replay Board:\n"
        "Connect D0, D1 and GND.\n"
        "Optional: 5V pin can power\n"
        "ESP-RFID-Tool v2 PRO.\n"
        "\nWIEGAND Replay Board\n"
        "available at:\n"
        "flipper.foto-video-it.de\n"
        "\nESP-RFID-Tool v2 PRO:\n"
        "Standalone replay tool.\n"
        "More info at:\n"
        "rfid-tool.foto-video-it.de\n");
    view_dispatcher_switch_to_view(app->view_dispatcher, WiegandWidgetView);
}
