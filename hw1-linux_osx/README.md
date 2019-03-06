[original hw1 description](https://courses.edx.org/courses/course-v1:UCSanDiegoX+CSE167x+2T2018/courseware/Unit_1/Homework_1/2?activate_block_id=block-v1%3AUCSanDiegoX%2BCSE167x%2B2T2018%2Btype%40vertical%2Bblock%40vertical_618b5e61d030)
Homework 1: Transformations
Assignment Specification
You will be implementing a classic crystal ball interface. This simulates a world in which the viewer is glued to the outside of a transparent sphere, looking in. The sphere is centered at the origin, and that is the direction towards which your eye is always pointing. At the origin, there is something interesting to look at, in this case, a teapot.

You can change the viewpoint by rotating the crystal ball in any direction about the origin. In this case, the rotation will be controlled by keyboard input. You must think about how the position of the eye and direction of the up vector change with left-right or up-down rotations.

Fill in the parts of Transform.cpp that say "//FILL IN YOUR CODE HERE". First, you should fill in left() and up(). Once these are working, fill in lookAt(). You must also fill in the helper function rotate() and you can use it in your code (this function simply sets up the rotation matrix for rotation about a given axis; you can use the Rodriguez formula from the lectures). Do not modify any files except for Transform.cpp.

Please see the images below (originally courtesy of "JenkinSD" refined by Jcoppens) for a visual explanation. The first (left) image clarifies which direction each keyboard key rotates (doesn't correspond exactly to function names in the code). It doesn't matter if you think left/right or up/down are swapped; your sign convention must simply match the images from the reference solution. The right image shows an incorrect result: the teapot should never rotate in the manner shown.

￼ ￼

Helper Functions and Restrictions
You may use glm::dot, glm::cross, glm::transpose and glm::normalize to operate on vectors for standard dot-products, cross-products, matrix transposes and normalization. You do not strictly need to, but you may also use glm::radians and matrix-vector or matrix-matrix multiplication from the glm library (via overloaded operators). You may not use other glm or OpenGL functions, except for overloaded operators for arithmetic operations and array subscripting.

Submission
For submission, you will run your HW1 assignment with "input.txt" as its first command line argument. Once the program is running, press i. This will generate screenshots of your program, such as "input.txt.001.png", which you will submit in a zip file named "hw1.zip".  This file must also include the source of your program, that is Transform.cpp  While grading is based on images, we require you to submit the source, since we have a beta version of code grading, based on source code that we will be testing and verifying.

On OSX, a zip file can be made by selecting the files, right clicking and selecting "Compress". On Linux, this can be achieved using the zip program. On Windows, you may download WinZip to make a zip file (select "Download Trial").

In Visual Studio skeletons, the command line argument is already specified (under Projects -> Properties -> Configuration Properties -> Debugging -> Debugging -> Command Arguments). On OSX/Linux, this can be done by running ./transforms input.txt in the homework directory.
