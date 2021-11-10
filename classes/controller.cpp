#include "../main.hpp"

namespace lve {
  void Controller::run() {
    while(!simpleWindow.shouldClose()) {
      glfwPollEvents();
    }
  };
} // namespace lve