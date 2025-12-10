// Example main for Daisy ST7735 display
#include "daisy_seed.h"
#include "st7735.h"

using namespace daisy;

OledDisplay<ST7735_4WireSpi128x160Driver> display;

int main(void)
{
    daisy::DaisySeed seed;
    seed.Configure();
    OledDisplay<ST7735_4WireSpi128x160Driver>::Config display_cfg;
    display_cfg.driver_config.transport_config.Defaults();
    display.Init(display_cfg);
    while(1)
    {
        display.Fill(false);
        display.DrawRect(2, 2, 125, 157, true);
        display.SetCursor(10, 20);
        display.WriteString("ST7735 + Oopsy", Font_6x8, true);
        display.Update();
    }
}
