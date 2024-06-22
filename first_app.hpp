#pragma once
#include "pipeline.hpp"
#include "window.hpp"

class FirstApp {
public:
  void run();

  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

private:
  VulkanWindow appWindow{WIDTH, HEIGHT, "appwindow"};
  Pipeline pipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
};
