#include <Watchy.h>

#include "Tetsuo.h"
#include "Settings.h"

class TetsuoWatchy : public Watchy {
  using Watchy::Watchy;
  public:
  void drawWatchFace() override {
    display.fillScreen(GxEPD_BLACK);
    display.setTextColor(GxEPD_WHITE);
    display.drawBitmap(0, 0, tetsuo, 200, 200, GxEPD_WHITE);
  }
};

TetsuoWatchy w(settings);

void setup() {
  w.init();
}

void loop() {}
