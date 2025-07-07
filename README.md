# Nebulark
#Not yet ready! This is just a readme file template for the near feature

![Nebulark Logo](path/to/logo.png) *(Optional - add your logo here)*

Nebulark is a modern, lightweight, and efficient game engine designed to empower developers with powerful tools to create immersive games. Started on **2025/07/05**, Nebulark focuses on flexibility, performance, and ease of use.

---

## Features

* Modular architecture for easy customization
* High-performance rendering pipeline
* Cross-platform support (Windows, macOS, Linux)
* Intuitive scripting API
* Built-in physics and collision system
* Audio management and spatial sound support
* Scene management and entity-component system (ECS)
* Active development with plans for VR and networking support

---

## Getting Started

### Prerequisites

* C++17 compatible compiler
* CMake 3.20+
* OpenGL
* Future plans for other graphics API's denpendend on platform

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/ricoleonardviviers/NebularkEngine.git
   ```

2. Build with premake:

  Simply run the GeneratProject.bat

3. Run the engine demo or integrate into your project.

---

## Usage

Here's a quick example to initialize Nebulark and create a basic window:

```cpp
#include <Nebulark/Nebulark.h>

int main() {
    Nebulark::Engine engine;
    engine.initialize();

    engine.createWindow("Nebulark Game Engine", 1280, 720);
    engine.run();

    return 0;
}
```

Check the `docs/` folder for detailed API usage and tutorials.

---

## Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository.
2. Create your feature branch: `git checkout -b feature/my-feature`
3. Commit your changes: `git commit -m 'Add my feature'`
4. Push to the branch: `git push origin feature/my-feature`
5. Open a pull request.

Please adhere to the coding style and include tests if applicable.

---

## License

This project is licensed under the APACHI License - see the [LICENSE](LICENSE) file for details.

---

## Contact

Created by Rico — feel free to reach out:

* GitHub: [RicoViviers]((https://github.com/ricoleonardviviers))
* Email: [rleonardviviers@gmail.com](mailto:rleonardviviers@example.com)

---

### Acknowledgments

Thanks to the open-source community for inspiration and support.
