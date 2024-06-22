#include "first_app.hpp"
#include <GLFW/glfw3.h>

void FirstApp::run() {
  while (!appWindow.shouldClose()) {
    glfwPollEvents();
  }
}
