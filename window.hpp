#pragma once

#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <string>

namespace window{
    class VulkanWindow{
        public:
            VulkanWindow(int w, int h, std::string name);
            ~VulkanWindow();
            bool shouldClose(){return glfwWindowShouldClose(window);};

        private:
            void initWindow();

            const int height;
            const int width;

            std::string windowName;
            GLFWwindow *window;
    };
} //namespace window
