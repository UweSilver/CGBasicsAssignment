#define FREEGLUT_STATIC

#include <GL/glut.h>
#include <iostream>


void display(void) {
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glClear (GL_COLOR_BUFFER_BIT );

    glFlush();
}

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;

    glutInit(&argc, argv);
    glutInitWindowSize(400, 400);
    glutCreateWindow(argv[0]);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}