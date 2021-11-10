#include "../main.hpp"

namespace lve {
  SimpleWindow::SimpleWindow(int w, int h, std::string name) : width {w}, height {h}, window_name {name} {
    initWindow();
  };

  SimpleWindow::~SimpleWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
  }

  void SimpleWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, window_name.c_str(), nullptr, nullptr);
  };

  bool SimpleWindow::shouldClose() {
    return glfwWindowShouldClose(window);
  }
} // namespace lve
