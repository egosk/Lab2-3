cmake_minimum_required(VERSION 3.12)
project(Lab2_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab2_3 main.cpp BodyPart.cpp BodyPart.h Head.cpp Head.h Leg.cpp Leg.h Arm.cpp Arm.h Torso.cpp Torso.h Processor.cpp Processor.h LeftOrRight.h BodyPartFactory.cpp BodyPartFactory.h Part.h Cyborg.cpp Cyborg.h)