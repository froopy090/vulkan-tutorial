#include "first_app.hpp"
#include <GLFW/glfw3.h>

namespace window {
void FirstApp::run() {
  while (!appWindow.shouldClose()) {
    glfwPollEvents();
  }
}
} // namespace window
