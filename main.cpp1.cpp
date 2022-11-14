
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
int posx=0,posy=0;
int day = 1;



void tree()
{

    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);

    glVertex3i(50, 350, 0);
    glVertex3i(70, 350, 0);


    glVertex3i(70, 500, 0);
    glVertex3i(50, 500, 0);

    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



    glEnd();



    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



    glEnd();

    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

    glEnd();


}

void river()
{
    glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);
    glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


    glEnd();



}

void land()
{
    glColor3f(0.5,1.0,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


    glEnd();

}





void house()
{

    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


    glEnd();

    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);

    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


    glEnd();

    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    glBegin(GL_POLYGON);

    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);


    glEnd();

    glColor3f(1.444, .5, 0);
    glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



    glEnd();


    glColor3f(1,1,0);
    glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


    glEnd();

}




int rad,x,y,a,b,h;
bool SE,E;

void sun()
{

    glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
    a=1000;
    b=1000;
    x=0;
    rad=50;
    y=rad;
    h=1-rad;
    glBegin(GL_POLYGON);

    glVertex3i(x+b,y+b,0);


    if(h>=0)
    {
        SE=true;
        E=false;
    }
    else

    {
        E=true;
        SE=false;

    }

    while(y>=x)
    {

        if(SE)
        {

            h=h+5+2*(x-y);


            if(h>=0)
            {
                SE=true;
                E=false;
            }
            else

            {
                E=true;
                SE=false;

            }

            x++;
            y--;
            glVertex3f(x+a, y+b,0.0);

            glVertex3f(y+a, x+b, 0.0);
            glVertex3f(-y+a, x+b, 0.0);
            glVertex3f(-x+a, -y+b, 0.0);
            glVertex3f(-y+a, -x+b, 0.0);
            glVertex3f(y+a,-x+b, 0.0);
            glVertex3f(x+a, -y+b, 0.0);
            glVertex3f(x+a, y+b, 0.0);
            glVertex3f(-x+a, y+b, 0.0);
        }



        if(E)
        {

            h=h+3+2*x;
            if(h>=0)
            {
                SE=true;
                E=false;
            }
            else

            {
                E=true;
                SE=false;

            }
            x++;
            glVertex3f(x+a, y+b,0.0);

            glVertex3i(y+a, x+b, 0.0);
            glVertex3i(-y+a, x+b, 0.0);
            glVertex3i(-x+a, -y+b, 0.0);
            glVertex3i(-y+a, -x+b, 0.0);
            glVertex3i(y+a,-x+b, 0.0);
            glVertex3i(x+a, -y+b, 0.0);
            glVertex3i(x+a, y+b, 0.0);
            glVertex3i(-x+a, y+b, 0.0);
        }




    }




    glEnd();

    glColor3f(0.9764705882352941, 0.4705882352941176, 0.0196078431372549);
    glBegin(GL_LINES);
    glVertex3i(1000,1000,0);
    glVertex3i(1000,950,0);


    glEnd();



}




void boat()
{

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(10,150,0);
    glVertex3i(150+50,150,0);
    glVertex3i(120+50,100,0);
    glVertex3i(30,100,0);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);


    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();
}



void draw_object()
{
        land();
        tree();
        river();
        house();
        sun();



        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();

}


void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);



    draw_object();

    glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'n':
        day=0;
        display();
        break;
    case 'd':
        day=1;
        display();
        break;
    case 'N':
        day=0;
        display();
        break;
    case 'D':
        day=1;
        display();
        break;
    }

}
void update(int value)
{


    if(posx>=1200)
    {
        posx=0;
    }
    else
    {
        posx++;
    }
    glutPostRedisplay();
    glutTimerFunc(10, update, 0);
}
void init(void)
{

    glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1000, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Village Scenario");


    glutDisplayFunc(display);
    glutKeyboardFunc(keyboardFunc);

    init();
    glutTimerFunc(25, update, 0);
    glutMainLoop();
    return 0;
}


