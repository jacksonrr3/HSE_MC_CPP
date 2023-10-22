## HSE CPP cource

Final cource project

### Description

Implemented basic class Shape, and subclasses: Rectangle, Triangle, Circle.
Implemented void draw(const Shape& s) method, which fill matrix by shape's pixels.
If shape's pixel is out of the matrix bound, this pixel is skipping while drawing shape at the matrix.

### Requirements

- compiler with C++14 features
- cmake
- OpenCV

### Building

```bash
$ mkdir build && cd build
$ cmake ..
$ make -j4
```

### Project structure

- `include` - contains classes definitions.
- `images` - contains sample images.
- `src` - contains classes implementations.
- main.cpp - contains main function

### Run the programs

Program runs without any attributes.
Program draws pictures: bw mashroom, bw house, color house and color car.
Drawn pictures can be stretched.
Program writes execution time to terminal.

Example of execution program with command line:
```bash
./build/bin/runner
```

### Examples

Picture appears in small size, you can stretch it.
After run programm you can see first picture:
![Alt text](images/bw_mashroom.png)

Press any button and see next picture:
![color logo](images/color_house.png)

Press any button and see next picture:
![color logo](images/bw_house.png)

Press any button and see next picture:
![color logo](images/color_car.png)

Then you can see perfomance in the terminal:
![color logo](images/perfomance.png)
