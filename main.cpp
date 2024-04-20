#include "include/app.h"
#include "include/window.h"

int main() {
  App app{};
  Window window{};

  while(app.isRunning) {
    window.render();
    break;
  }

  return 0;
}
