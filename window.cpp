#include "window.hpp"
#include <GLFW/glfw3.h>
#include <cctype>

VulkanWindow::VulkanWindow(int w, int h, std::string name)
    : width(w), height(h), windowName(name) {
  initWindow();
}

VulkanWindow::~VulkanWindow() {
  glfwDestroyWindow(window);
  glfwTerminate();
}

void VulkanWindow::initWindow() {
  glfwInit();
  glfwWindowHint(GLFW_CLIENT_API,
                 GLFW_NO_API); // tells glfw to NOT create an openGL instance
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

  window =
      glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}
