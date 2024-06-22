#pragma once

#include "window.hpp"

namespace window {
class FirstApp {
public:
  void run();

  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

private:
  VulkanWindow appWindow{WIDTH, HEIGHT, "appwindow"};
};
} // namespace windowulkanWindo
