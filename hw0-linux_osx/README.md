

[original assignment description](https://courses.edx.org/courses/course-v1:UCSanDiegoX+CSE167x+2T2018/courseware/Unit_0/Homework_0/2?activate_block_id=block-v1%3AUCSanDiegoX%2BCSE167x%2B2T2018%2Btype%40vertical%2Bblock%40vertical_5bceb6b3fd92)
homework 0: Assignment
To make sure you can run programs for the course, please download and compile the homework 0 framework, that can be found from our our syllabus page, and reproduced below. Some of you may also wish to browse the lectures in Unit 2 which explain OpenGL and gradually build up the program used for homework 0. (However, Unit 2 is by no means required for homework 0, which just involves setup and compilation).

Homework 0 Framework
Windows 
Mac/Linux
We include complete skeletons for major platforms.  If you develop on a different platform, you may need to re-create projects and Makefiles from the source code. The next page is a FAQ detailing compilation options.

The Homework 0 program has a textured ground plane with 4 "pillars" and a teapot with lighting that moves.

On Windows, you can run the program by opening the .sln file and pressing F5. On Mac OSX or Linux, you should use the command line to cd to the directory containing the files, type make and ./mytest3.   (Please do not double click on the file using finder in MacOS; that will lead to errors, since the paths would not be set up properly.  Similarly in Windows, please use your C++ development environment for running, by pressing F5 as noted above, rather than double-clicking the executable).  Please also note that the correct way to exit is to hit the ESC key in the program.

Note for this program, the shader directories that contain glsl shaders. These are files that are loaded and compiled by the OpenGL program at runtime and therefore must exist, but need not be part of the Makefile or project.

The mouse can be used to zoom in. Look at the keyboard function in mytest3.cpp to see the keys you can press. The p key will start and stop the animation of the teapot.

Once you have the program running successfully, press i to move the teapot into the correct position for our autograder. Next, press o to output the screenshot to the program's directory. Rename it to "screenshot1.png" so it isn't overwritten by a subsequent screenshot.   Please make sure you do not zoom in or out prior to pressing i or o (if you have earlier played with the mouse, it is best to restart the program and  take the screenshot).   

Next, I want you to change the color of the red highlight on the teapot to yellow (yellow is made by mixing red and green, which are the first two elements of the color vector: the third is blue). This corresponds to a RGBA value of (1,1,0,1). The relevant colors and code are defined in the "display" function of "mytest3.cpp" where it says "add lighting effects." Note that the red highlight is originally somewhat orange with a RGBA value of (1,0.5,0,1). Once you have changed the color of the highlight from red to yellow, recompile, run, and press i then o as before to output a screenshot. Rename this screenshot to "screenshot2.png".

Future Homework Frameworks
It is a good idea to visit the course syllabus and attempt to compile the later homework frameworks, so that we can catch any compilation issues early.
