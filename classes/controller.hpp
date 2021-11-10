#pragma once

namespace lve {
  class Controller {
    public:
      static constexpr int WIDTH = 800;
      static constexpr int HEIGHT = 600;

      void run();
    private:
      SimpleWindow simpleWindow{WIDTH, HEIGHT, "First Vulkan Window"};

  };
} // namespace lve