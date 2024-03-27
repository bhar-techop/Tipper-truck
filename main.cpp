#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
#include <math.h>


float cameraX = 0.0f;
float cameraY = 0.0f;
float cameraZ = 5.0f;
float lookatX=0.0,lookatY=0.0,lookatZ=0.0;
bool Cargo=true;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-220, 220, -160, 160, -400, 400);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    // Set the camera positions
  gluLookAt(cameraX, cameraY, cameraZ,  // eye position
              lookatX, lookatY,lookatZ,  // center of view
              0.0, 1.0, 0.0); // up vector
    // Draw the cube
    glPushMatrix();

    glBegin(GL_QUADS);

    if(Cargo){// Front face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-30.0, 0.0, 40.0);
    glVertex3f(110.0, 0.0, 40.0);
    glVertex3f(110.0, 50.0, 40.0);
    glVertex3f(-30.0, 50.0, 40.0);

    // Back face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-30.0, 0.0, -40.0);
    glVertex3f(110.0, 0.0, -40.0);
    glVertex3f(110.0, 50.0, -40.0);
    glVertex3f(-30.0, 50.0, -40.0);

    // Left face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-30.0, 0.0, -40.0);
    glVertex3f(-30.0, 0.0, 40.0);
    glVertex3f(-30.0, 50.0, 40.0);
    glVertex3f(-30.0, 50.0, -40.0);

    // Right face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(110.0, 0.0, -40.0);
    glVertex3f(110.0, 0.0, 40.0);
    glVertex3f(110.0, 50.0, 40.0);
    glVertex3f(110.0, 50.0, -40.0);

    // Top face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-30.0, 50.0, -40.0);
    glVertex3f(-30.0, 50.0, 40.0);
    glVertex3f(110.0, 50.0, 40.0);
    glVertex3f(110.0, 50.0, -40.0);

    // Bottom face
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-30.0, 0.0, -40.0);
    glVertex3f(-30.0, 0.0, 40.0);
    glVertex3f(110.0, 0.0, 40.0);
    glVertex3f(110.0, 0.0, -40.0);

    glEnd();
}
    glPopMatrix();

    glPushMatrix();

    glBegin(GL_QUADS);

    // Front face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(120.0, -20.0, 40.0);
    glVertex3f(120.0, 0.0, 40.0);
    glVertex3f(-40.0, 0.0, 40.0);

    // Back face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(-40.0, -20.0, -40.0);
    glVertex3f(120.0, -20.0, -40.0);
    glVertex3f(120.0, 0.0, -40.0);
    glVertex3f(-40.0, 0.0, -40.0);

    // Left face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(-40.0, -20.0, -40.0);
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(-40.0, 0.0, 40.0);
    glVertex3f(-40.0, 0.0, -40.0);

    // Right face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(120.0, -20.0, -40.0);
    glVertex3f(120.0, -20.0, 40.0);
    glVertex3f(120.0, 0.0, 40.0);
    glVertex3f(120.0, 0.0, -40.0);

    // Top face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(-40.0, 0.0, -40.0);
    glVertex3f(-40.0, 0.0, 40.0);
    glVertex3f(120.0, 0.0, 40.0);
    glVertex3f(120.0, 0.0, -40.0);

    // Bottom face
    glColor3f(1.0, 1.0, 0.0); // Yellow
    glVertex3f(-40.0, -20.0, -40.0);
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(120.0, -20.0, 40.0);
    glVertex3f(120.0, -20.0, -40.0);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glBegin(GL_QUADS);

    // Front face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-100.0, -20.0, 40.0);
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-100.0, 10.0, 40.0);

    // Back face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-100.0, -20.0, -40.0);
    glVertex3f(-40.0, -20.0, -40.0);
    glVertex3f(-40.0, 10.0, -40.0);
    glVertex3f(-100.0, 10.0, -40.0);

    // Left face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-100.0, -20.0, -40.0);
    glVertex3f(-100.0, -20.0, 40.0);
    glVertex3f(-100.0, 10.0, 40.0);
    glVertex3f(-100.0, 10.0, -40.0);

    // Right face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-40.0, -20.0, -40.0);
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, -40.0);

    // Top face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-100.0, 10.0, -40.0);
    glVertex3f(-100.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, -40.0);

    // Bottom face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-100.0, -20.0, -40.0);
    glVertex3f(-100.0, -20.0, 40.0);
    glVertex3f(-40.0, -20.0, 40.0);
    glVertex3f(-40.0, -20.0, -40.0);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glBegin(GL_QUADS);

    // Front face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-90.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-40.0, 50.0, 40.0);
    glVertex3f(-90.0, 50.0, 40.0);

    // Back face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-90.0, 10.0, -40.0);
    glVertex3f(-40.0, 10.0, -40.0);
    glVertex3f(-40.0, 50.0, -40.0);
    glVertex3f(-90.0, 50.0, -40.0);

    // Left face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-90.0, 10.0, -40.0);
    glVertex3f(-90.0, 10.0, 40.0);
    glVertex3f(-90.0, 50.0, 40.0);
    glVertex3f(-90.0, 50.0, -40.0);

    // Right face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-40.0, 10.0, -40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-40.0, 50.0, 40.0);
    glVertex3f(-40.0, 50.0, -40.0);

    // Top face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-90.0, 50.0, -40.0);
    glVertex3f(-90.0, 50.0, 40.0);
    glVertex3f(-40.0, 50.0, 40.0);
    glVertex3f(-40.0, 50.0, -40.0);

    // Bottom face
    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(-90.0, 10.0, -40.0);
    glVertex3f(-90.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, 40.0);
    glVertex3f(-40.0, 10.0, -40.0);

    glEnd();

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(-70.0, -20.0, 45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(-70.0, -20.0, -45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(40.0, -20.0, 45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(40.0, -20.0, -45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(90.0, -20.0, 45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();

    glPushMatrix();

    glColor3f(0.0,0.0,0.0);
    glTranslatef(90.0, -20.0, -45.0);
    glutSolidTorus(5, 10, 50, 50);

    glPopMatrix();


    glFlush();

    glutPostRedisplay();
    glutSwapBuffers();
}


void myReshape(int w,int h) // common reshape func for all prgrms
{
glViewport(0,0,w,h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w<=h)
glOrtho(-2.0,2.0,-1.0*(GLfloat)h/(GLfloat)w,20.0*(GLfloat)h/(GLfloat)w,-1.0,100.0);
 else
 glOrtho(-2.0*(GLfloat)w/(GLfloat)h,2.0*(GLfloat)w/(GLfloat)h,-1.0,20.0,-1.0,100.0);
glMatrixMode(GL_MODELVIEW);
}
void specialKeys(int key, int x, int y) {
    float cameraSpeed = 0.1f; // Adjust the camera speed as needed

    switch (key) {
        case GLUT_KEY_UP:
            cameraY += cameraSpeed;
            break;
        case GLUT_KEY_DOWN:
            cameraY -= cameraSpeed;
            break;
        case GLUT_KEY_LEFT:
            cameraX -= cameraSpeed;
            break;
        case GLUT_KEY_RIGHT:
            cameraX += cameraSpeed;
            break;

    }

    glutPostRedisplay();
}
void menuCallback(int option) {
    float cameraSpeed = 0.1f; // Adjust the camera speed as needed

    switch (option) {
        case 1:Cargo=!Cargo;
            break;
    }

    glutPostRedisplay();
}
void createMenu() {
    // Create the menu and add options
    int menu = glutCreateMenu(menuCallback);
    glutAddMenuEntry("TOGLE Tipper",1);

    // Attach the menu to the right mouse button
    glutAttachMenu(GLUT_RIGHT_BUTTON);
}
void keyboard(unsigned char key, int x, int y) {
    float cameraSpeed = 5.0f; // Adjust the camera speed as needed

    switch (key) {
        case 'w':
        case 'W':
            cameraZ += cameraSpeed;lookatZ+= cameraSpeed;
            break;
        case 's':
        case 'S':
            cameraZ -= cameraSpeed;lookatZ-= cameraSpeed;
            break;
        case 'a':
        case 'A':
            cameraX += cameraSpeed;lookatX+= cameraSpeed;
            break;
        case 'd':
        case 'D':
            cameraX -= cameraSpeed;lookatX-= cameraSpeed;
            break;
    }

    glutPostRedisplay();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Tipper Truck");
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glutReshapeFunc(myReshape);
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);
    glutSpecialFunc(specialKeys);
    glutKeyboardFunc(keyboard);
    createMenu();
    glutMainLoop();
    return 0;
}
