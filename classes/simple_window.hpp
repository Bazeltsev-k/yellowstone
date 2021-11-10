#pragma once

namespace lve
{
  class SimpleWindow {
    public:
      SimpleWindow(int w, int h, std::string name);

      //Destructors
      ~SimpleWindow();
      SimpleWindow(const SimpleWindow &) = delete;
      SimpleWindow &operator=(const SimpleWindow &) = delete;

      bool shouldClose();
    private:
      void initWindow();

      const int width;
      const int height;

      std::string window_name;
      GLFWwindow *window;
  };
} // namespace lve
