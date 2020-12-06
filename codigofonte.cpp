#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <windows.h>

void inicio(){
    glClearColor(0,0,0,0);
}

void display(){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_DEPTH_TEST);
    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
    glColor3f(1.0,1.0,1.0);
    glLineWidth(5);

    //ORELHA ESQUERDA
    glTranslatef(-0.31f, 0.8f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.14*cos(theta),0.14*sin(theta));
        }
    glEnd();

    //ORELHA DIREITA
    glTranslatef(0.31f, -0.8f, 0.0f);
    glTranslatef(0.31f, 0.8f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.14*cos(theta),0.14*sin(theta));
        }
    glEnd();

    //CABEÇA
    glTranslatef(-0.31f,-0.8f,0.0f);
    glTranslatef(0.0f, 0.5f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.36*cos(theta),0.36*sin(theta));
    }
    glEnd();

    //PÉ ESQUERDO
    glTranslatef(0.0f, -0.5f, 0.0f);
    glTranslatef(-0.23f, -0.55f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.18*cos(theta),0.18*sin(theta));
    }
    glEnd();

    //PÉ DIREITO
    glTranslatef(0.23f, 0.55f, 0.0f);
    glTranslatef(0.30f, -0.55f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.2*cos(theta),0.2*sin(theta));
    }
    glEnd();

    //OLHO ESQUERDO
    glTranslatef(-0.30f, 0.55f, 0.0f);
    glTranslatef(-0.1f, 0.6f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.070*cos(theta),0.070*sin(theta));
    }
    glEnd();

    //BRANCO OLHO ESQUERDO
    glTranslatef(0.1f, -0.50f, 0.0f);
    glTranslatef(-0.1f, 0.50f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.010*cos(theta),0.010*sin(theta));
    }
    glEnd();

    //OLHO DIREITO
    glTranslatef(0.1f, -0.50f, 0.0f);
    glTranslatef(0.125f, 0.50f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.070*cos(theta),0.070*sin(theta));
    }
    glEnd();

    //BRANCO OLHO DIREITO
    glTranslatef(-0.125f, -0.50f, 0.0f);
    glTranslatef(0.125f, 0.50f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.010*cos(theta),0.010*sin(theta));
    }
    glEnd();
    //FUCINHO
    glTranslatef(-0.125f, -0.50f, 0.0f);
    glTranslatef(0.01f, 0.30f, 0.0f);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        float theta = i*3.142/180;
        glVertex2f(0.17*cos(theta),0.17*sin(theta));
    }
    glEnd();

    //CORPO
    glTranslatef(-0.01f,-0.30f, 0.0f);
    glBegin(GL_QUAD_STRIP);
    glVertex2f(-0.35f, 0.4f);
    glVertex2f(0.35f, 0.4f);
    glVertex2f(-0.35f, -0.7f);
    glVertex2f(0.35f, -0.7f);
    glEnd();

    //BRAÇO ESQUERDO
    glBegin(GL_QUADS);
    glVertex2f(-0.35, 0.15);
    glVertex2f(-0.15, 0.15);
    glVertex2f(-0.15 - 0.10, -0.35);
    glVertex2f(-0.35 - 0.10, -0.35);
    glEnd();

    //BRAÇO DIREITO
    glBegin(GL_QUADS);
    glVertex2f(0.35, 0.15);
    glVertex2f(0.15, 0.15);
    glVertex2f(0.15 + 0.10, -0.35);
    glVertex2f(0.35 + 0.10, -0.35);
    glEnd();

    //MÃO DIREITA
    glTranslatef(0.06f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.25, -0.25);
    glVertex2f(0.45, -0.25);
    glVertex2f(0.45, -0.45);
    glVertex2f(0.25, -0.45);
    glEnd();

    //MÃO ESQUERDA
    glTranslatef(-0.06f, 0.0f, 0.0f);
    glTranslatef(0.07f,0.0f,0.0f);
    glScalef(1.2f, 1.2f, 1.0f);
    glBegin(GL_QUADS);
    glVertex2f(-0.25, -0.25);
    glVertex2f(-0.45, -0.25);
    glVertex2f(-0.45, -0.45);
    glVertex2f(-0.25, -0.45);
    glEnd();

    //NARINHA
    glTranslatef(-0.07f,0.0f,0.0f);
    glRotatef(180.0f,0.0,0.0,1.0);
    glTranslatef(-0.01f, -0.55f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.1,0.25);
    glVertex2f(0.1,0.25);
    glVertex2f(0.0,0.40);
    glEnd();

    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    glFlush();
}
int main(int argc, char** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(680,680);
    glutCreateWindow("URSO");
    inicio();
    glutDisplayFunc(display);
    glutMainLoop();
}
