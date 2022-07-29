Wrapper for the *"C++ API for Moteus BLDC controller"* for Embedded Coder Target for Linux
=====================
- Author: Loi Do, doloi@fel.cvut.cz

This is a **wrapper** for the API <https://github.com/sinaaghli/moteusapi> (see information below) so the API can be used with the **ERT** Library <https://github.com/aa4cc/ert_linux>. 

The ERT library allows to generate a code from a **Simulink block diagram** that runs in real-time on Linux machine.
The **Moteus API** is included into the Simulink diagram through a **System Objects** block <https://www.mathworks.com/help/matlab/system-objects.html>. 

- In the folder **./moteusapi/**, there are three additional files (compared to the original repository):
    - MoteusAPI_ERT.cpp
    - MoteusAPI_ERT.h
    - rtwtypes.h

    The first two files extend (wraps) the Moteus API with function that are called in the Simulink block diagram.
    The third file allows using Matlab data types.


# Instructions
- First, follow the instructions for the C++ API and make sure, that the API is working.

- Build and try the examples in the folder [examples_MoteusAPI_ERT](examples_MoteusAPI_ERT/).

- Copy the folder into the Matlab path.
    - **Important note**: do not include the file **rtwtypes.h**. The header file is in the folder only for the examples. Matlab has its own **rtwtypes.h** in a path.

- Write a *m-file* for the **System Objects** block. 


C++ API for Moteus BLDC controller through fdcanusb
=====================
- Author: *https://github.com/sinaaghli/*


This is a c++ API to communicate with [MJBOT](https://mjbots.com/)'s [Moteus](https://github.com/mjbots/moteus) brushless dc motor driver through [fdcanusb](https://mjbots.com/collections/accessories/products/fdcanusb) connected to a Mac or Linux PC.

## To try the API without system wide installation?
Compile and run the examples at [example_internal](example_internal/) folder

to compile try

    > cd build
    > cmake ..
    > make
    > sudo ./example_internal/positioncmd


## Compile and install in your system

You can install moteusapi on your system and then have a copy of the folder [example_external](example_external/) somewhere on your system. running cmake on example_external would be able to find the library on your system.

first compile and install

    > cd build
    > cmake ..
    > make install 

then compile example_external

    > cp -r moteusapi/example_external /your/code/folder/
    > cd /your/code/folder/example_external
    > mkdir build
    > cd build
    > cmake ..
    > make
    > sudo ./positioncmd


Uninstall library:

    > make uninstall

## How to use the library (as dependency) in an external project?

here is a snippet for your cmake project,

    > cmake_minimum_required(VERSION 3.0)
    > project(foo)
    > find_package(MoteusAPI REQUIRED)
    > include_directories(${MOTEUSAPI_INCLUDE_DIRS})
    > add_executable(foo foo.cpp)
    > target_link_libraries(foo ${MOTEUSAPI_LIBRARIES})

See the [example of external project](example_external/).

## LICENSE
All files contained in this repository, unless otherwise noted, are available under an Apache 2.0 License: https://www.apache.org/licenses/LICENSE-2.0

