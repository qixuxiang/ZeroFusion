# ZeroFusion
Real-time 3D Reconstruction with Senmatic Segmentation
Build steps:

1. Build [libzmq](https://github.com/zeromq/libzmq) via cmake. 
```
   - git clone https://github.com/zeromq/libzmq.git
   - cd libzmq
   - mkdir build
   - cd build
   - cmake ..
   - sudo make -j4 install
   
```

2. Build [cppzmq](https://github.com/zeromq/cppzmq) via cmake. 
```
   - git clone https://github.com/zeromq/cppzmq.git
   - mkdir build
   - cd build
   - cmake ..
   - sudo make -j4 install
```
