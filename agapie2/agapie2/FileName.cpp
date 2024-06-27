

#include <GL/glut.h>


// Function to handle the drawing of the scene
void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set the camera
    gluLookAt(0.0f, 9.0f, 50.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    //glColor3i(1, 0, 0);

    glPushMatrix();
    // Draw ground
    glScalef(2, 1.5, 1.5);
    glColor3f(0.5f, 0.35f, 0.05f); // Brown color for the ground
    glBegin(GL_QUADS);
    glVertex3f(-20.0f, -1.0f, 20.0f);
    glVertex3f(20.0f, -1.0f, 20.0f);
    glVertex3f(20.0f, -1.0f, -20.0f);
    glVertex3f(-20.0f, -1.0f, -20.0f);
    glEnd();

    // Draw road

    glPushMatrix();
    glTranslatef(0, 0, 15);
    glColor3f(0.3f, 0.3f, 0.3f); // Dark gray color for the road
    glBegin(GL_QUADS);
    glVertex3f(-20.0f, -0.99f, 5.0f);
    glVertex3f(20.0f, -0.99f, 5.0f);
    glVertex3f(20.0f, -0.99f, -5.0f);
    glVertex3f(-20.0f, -0.99f, -5.0f);
    glEnd();
    glPopMatrix();
    // Draw house base
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the house base
    glBegin(GL_QUADS);
    // Front face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Back face
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    // Left face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);

    // Top face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);

    glVertex3f(-4.0f, 3.0f, -4.0f);
    glEnd();
    
    // Draw house roof
    glColor3f(0.3f, 0.0f, 0.0f); // Red color for the roof
    glBegin(GL_TRIANGLES);
    // Front face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Back face
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Left face
    glPushMatrix();
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glPopMatrix();
    // Right face
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glEnd();
    //////////////////////
    //outer
    glPushMatrix();
    glTranslatef(-4, 0, 0);
    glScalef(0.8, 0.8, 0.8);
    // Draw house base
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the house base
    glBegin(GL_QUADS);
    // Front face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Back face
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    // Left face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);


    // Right face
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    // Top face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);

    glVertex3f(-4.0f, 3.0f, -4.0f);
    glEnd();
    glPopMatrix();
    ///////////////////////
    //outer roof
    glPushMatrix();
    glTranslatef(-4,0.4,0);
    glScalef(0.8, 0.8, 0.8);

    glColor3f(0.3f, 0.0f, 0.0f); // Red color for the roof
    glBegin(GL_TRIANGLES);
    // Front face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Back face
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Left face
    glPushMatrix();
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glPopMatrix();
    // Right face
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glEnd();

    glPopMatrix();
    /////////////////
    glColor3f(0.0f, 0.0f, 0.0f); // Brown color for the door
    glBegin(GL_QUADS);
    // Front face of the door
    glVertex3f(-1.0f, 2.0f, 5.0f);
    glVertex3f(1.0f, 2.0f, 5.0f);
    glVertex3f(1.0f, 0.0f, 5.0f);
    glVertex3f(-1.0f, 0.0f, 5.0f);
    glEnd();
    glPopMatrix();    
    /////////////////////back house

    glPushMatrix();
    glScalef(3, 1.5, 1.5);
    glTranslatef(6, -0.5, -20);
    // Draw house base
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the house base
    glBegin(GL_QUADS);
    // Front face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Back face
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    // Left face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Right face
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    // Top face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);

    glVertex3f(-4.0f, 3.0f, -4.0f);
    glEnd();

    // Draw house roof
    glColor3f(0.3f, 0.0f, 0.0f);  // Red color for the roof
    glBegin(GL_TRIANGLES);
    // Front face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Back face
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Left face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Right face
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glEnd();
    //
    glColor3f(0.6f, 0.4f, 0.2f); // Brown color for the door
    glBegin(GL_QUADS);
    // Front face of the door
    glVertex3f(-1.0f, 0.0f, 4.0f);
    glVertex3f(1.0f, 0.0f, 4.0f);
    glVertex3f(1.0f, 2.0f, 4.0f);
    glVertex3f(-1.0f, 2.0f, 4.0f);
    glEnd();
    glPopMatrix();
    /////////////////cllinic

    glPushMatrix();
    glScalef(2, 1.5, 1.5);
    glTranslatef(-13, 0, -1);
    // Draw house base
    glColor3f(0.8f, 0.8f, 0.8f); // Light gray color for the house base
    glBegin(GL_QUADS);
    // Front face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Back face
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    // Left face
    glVertex3f(-4.0f, 0.0f, 4.0f);
    glVertex3f(-4.0f, 0.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(-4.0f, 3.0f, 4.0f);
    // Right face
    glVertex3f(4.0f, 0.0f, 4.0f);
    glVertex3f(4.0f, 0.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    // Top face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);

    glVertex3f(-4.0f, 3.0f, -4.0f);
    glEnd();

    // Draw house roof
    glColor3f(0.3f, 0.0f, 0.0f);  // Red color for the roof
    glBegin(GL_TRIANGLES);
    // Front face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Back face
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Left face
    glVertex3f(-4.0f, 3.0f, 4.0f);
    glVertex3f(-4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    // Right face
    glVertex3f(4.0f, 3.0f, 4.0f);
    glVertex3f(4.0f, 3.0f, -4.0f);
    glVertex3f(0.0f, 6.0f, 0.0f);
    glEnd();
    //
    glColor3f(0.6f, 0.4f, 0.2f); // Brown color for the door
    glBegin(GL_QUADS);
    // Front face of the door
    glVertex3f(-1.0f, 0.0f, 4.0f);
    glVertex3f(1.0f, 0.0f, 4.0f);
    glVertex3f(1.0f, 2.0f, 4.0f);
    glVertex3f(-1.0f, 2.0f, 4.0f);
    glEnd();
    glPopMatrix();

    ////////////////////////////////////////trees
    glPushMatrix();
    glTranslated(0, -2, 6);
    glScaled(2, 2, 2);
    glColor3f(0.0f, 0.5f, 0.0f); // Green color for trees
    // Tree 1
    glBegin(GL_QUADS);
    // Trunk
    glColor3f(0.55f, 0.27f, 0.07f); // Brown color for the trunk
    glVertex3f(-10.0f, 0.0f, 0.0f);
    glVertex3f(-9.5f, 0.0f, 0.0f);
    glVertex3f(-9.5f, 3.0f, 0.0f);
    glVertex3f(-10.0f, 3.0f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    // Leaves
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex3f(-10.75f, 3.0f, 0.0f);
    glVertex3f(-8.75f, 3.0f, 0.0f);
    glVertex3f(-9.75f, 6.0f, 0.0f);
    glEnd();

    // Tree 2 (similar to Tree 1, but positioned differently)
    glBegin(GL_QUADS);
    // Trunk
    glColor3f(0.55f, 0.27f, 0.07f); // Brown color for the trunk
    glVertex3f(9.5f, 0.0f, 0.0f);
    glVertex3f(10.0f, 0.0f, 0.0f);
    glVertex3f(10.0f, 3.0f, 0.0f);
    glVertex3f(9.5f, 3.0f, 0.0f);
    glEnd();
    glBegin(GL_TRIANGLES);
    // Leaves
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex3f(8.75f, 3.0f, 0.0f);
    glVertex3f(10.75f, 3.0f, 0.0f);
    glVertex3f(9.75f, 6.0f, 0.0f);
    glEnd();

    glutSwapBuffers();
    glPopMatrix();


}

// Function to handle window resizing
void reshape(int w, int h) {
    if (h == 0) h = 1;
    float ratio = 1.0f * w / h;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glViewport(0, 0, w, h);

    gluPerspective(45, ratio, 1, 1000);
    glMatrixMode(GL_MODELVIEW);
}
// Initialization function
void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.5f, 0.7f, 1.0f, 1.0f); // Sky blue background
}

// Main function
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Simple 3D Scene with House and Road");

    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}