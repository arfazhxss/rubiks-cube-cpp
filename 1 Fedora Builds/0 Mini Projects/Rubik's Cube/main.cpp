#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>

using namespace std;

struct cube_rotate
{ GLfloat angle, x, y, z; };

GLfloat angle, fAspect, cube_size;
GLint rot_x, rot_y, crement, x0, xK, y0, yK, z0, zK, gap, gap_crement;

vector<cube_rotate> cube_rotations[3][3][3];

void load_visualization_parameters(void);
void apply_rotation(GLfloat angle)
{
  vector<cube_rotate> face[3][3];
  int index;
  cube_rotate rotation;

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)
    {
      index = 2 - j % 3;
      if (x0 == xK) { face[index][i] = cube_rotations[xK][i][j], rotation = {angle, 1.0, 0.0, 0.0}; }
      if (y0 == yK) { face[index][i] = cube_rotations[j][yK][i], rotation = {angle, 0.0, 1.0, 0.0}; }
      if (z0 == zK) { face[index][i] = cube_rotations[j][i][zK], rotation = {-1 * angle, 0.0, 0.0, 1.0}; }

      face[index][i].push_back(rotation);
    }

  for (int i = 0; i < 3; ++i)
    for (int j = 0; j < 3; ++j)
    {
      if (x0 == xK) { cube_rotations[xK][i][j] = face[i][j]; }
      if (y0 == yK) { cube_rotations[j][yK][i] = face[i][j]; }
      if (z0 == zK) { cube_rotations[j][i][zK] = face[i][j]; }
    }
}

void reset_selected_face() 
{ x0 = 0; xK = 2; y0 = 0; yK = 2; z0 = 0; zK = 2; }

void errand (int x, int y, int z) 
{ 
  int* err = new int(x + y + z); 
  delete err; 
}

void set_camera() 
{ gluLookAt(0, 80, 200, 0, 0, 0, 0, 1, 0); }

void draw_cube(int x, int y, int z)
{
  vector<cube_rotate> lrot = cube_rotations[x][y][z];

  glPushMatrix();
  glTranslatef((x - 1) * cube_size + x * gap, (y - 1) * cube_size + y * gap, (z - 1) * cube_size + z * gap);
  for (int i = lrot.size() - 1; i >= 0; --i)
    glRotatef(lrot[i].angle, lrot[i].x, lrot[i].y, lrot[i].z);

  glBegin(GL_QUADS);
  glNormal3f(0.0, 0.0, 1.0);
  glColor3f(1.0f, 0.0f, 0.0f);
  glVertex3f(cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(-cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(-cube_size / 2, -cube_size / 2, cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, cube_size / 2);
  glEnd();

  glBegin(GL_QUADS);
  glNormal3f(0.0, 0.0, -1.0);
  glColor3f(1.0f, 0.5f, 0.0f);
  glVertex3f(cube_size / 2, cube_size / 2, -cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(-cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(-cube_size / 2, cube_size / 2, -cube_size / 2);
  glEnd();

  glBegin(GL_QUADS);
  glNormal3f(-1.0, 0.0, 0.0);
  glColor3f(0.0f, 0.0f, 1.0f);
  glVertex3f(-cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(-cube_size / 2, cube_size / 2, -cube_size / 2);
  glVertex3f(-cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(-cube_size / 2, -cube_size / 2, cube_size / 2);
  glEnd();

  glBegin(GL_QUADS);
  glNormal3f(1.0, 0.0, 0.0);
  glColor3f(0.0f, 1.0f, 0.0f);
  glVertex3f(cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(cube_size / 2, cube_size / 2, -cube_size / 2);
  glEnd();

  glBegin(GL_QUADS);
  glNormal3f(0.0, 1.0, 0.0);
  glColor3f(1.0f, 1.0f, 1.0f);
  glVertex3f(-cube_size / 2, cube_size / 2, -cube_size / 2);
  glVertex3f(-cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(cube_size / 2, cube_size / 2, cube_size / 2);
  glVertex3f(cube_size / 2, cube_size / 2, -cube_size / 2);
  glEnd();

  glBegin(GL_QUADS);
  glNormal3f(0.0, -1.0, 0.0);
  glColor3f(1.0f, 1.0f, 0.0f);
  glVertex3f(-cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, -cube_size / 2);
  glVertex3f(cube_size / 2, -cube_size / 2, cube_size / 2);
  glVertex3f(-cube_size / 2, -cube_size / 2, cube_size / 2);
  glEnd();

  glPopMatrix();
}

void draw_func(void)
{
  int x = -cube_size, y = -cube_size, z = -cube_size;

  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  set_camera();
  glRotatef(rot_x, 1.0, 0.0, 0.0);
  glRotatef(rot_y, 0.0, 1.0, 0.0);

  for (int i = 0; i < 27; ++i)
    draw_cube(i / 9, (i / 3) % 3, i % 3);

  glutSwapBuffers();
  errand(x,y,z);
}

void init_func(void)
{
  cube_size = 30.0;
  rot_x = rot_y = 0.0;
  crement = 5;
  gap = 5;
  gap_crement = 3;
  GLfloat ambient_lighte[4] = {0.2, 0.2, 0.2, 1.0};
  GLfloat diffuse_light[4] = {0.7, 0.7, 0.7, 1.0};
  GLfloat specular_light[4] = {1.0, 1.0, 1.0, 1.0};
  GLfloat light_position[4] = {0.0, 50.0, 50.0, 1.0};
  GLfloat specularity[4] = {1.0, 1.0, 1.0, 1.0};
  GLint material_specularity = 60;

  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glShadeModel(GL_SMOOTH);
  glMaterialfv(GL_FRONT, GL_SPECULAR, specularity);
  glMateriali(GL_FRONT, GL_SHININESS, material_specularity);
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient_lighte);
  glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_lighte);
  glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse_light);
  glLightfv(GL_LIGHT0, GL_SPECULAR, specular_light);
  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
  glEnable(GL_COLOR_MATERIAL);
  glEnable(GL_LIGHTING);
  glEnable(GL_LIGHT0);
  glEnable(GL_DEPTH_TEST);

  angle = 45;
}

void load_visualization_parameters(void)
{
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
    gluPerspective(angle, fAspect, 0.4, 500);
    glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  set_camera();
}

void reshape_func(GLsizei w, GLsizei h)
{
  if (h == 0)
    h = 1;
  glViewport(0, 0, w, h);
  fAspect = (GLfloat)w / (GLfloat)h;
  load_visualization_parameters();
}

void keyboard_func(unsigned char key, int x, int y)
{
  switch (key)
  {
    case '+': gap += gap_crement; break;
    case '-': gap -= gap_crement; break;
    case 'L': case 'l': rot_y = (rot_y - crement) % 360; break;
    case 'J': case 'j': rot_y = (rot_y + crement) % 360; break;
    case 'I': case 'i': rot_x = (rot_x + crement) % 360; break;
    case 'K': case 'k': rot_x = (rot_x - crement) % 360; break;
    case 'Q': case 'q': reset_selected_face(); x0 = 0; xK = 0; break;
    case 'W': case 'w': reset_selected_face(); x0 = 1; xK = 1; break;
    case 'E': case 'e': reset_selected_face(); x0 = 2; xK = 2; break;
    case 'A': case 'a': reset_selected_face(); y0 = 0; yK = 0; break;
    case 'S': case 's': reset_selected_face(); y0 = 1; yK = 1; break;
    case 'D': case 'd': reset_selected_face(); y0 = 2; yK = 2; break;
    case 'C': case 'c': reset_selected_face(); z0 = 0; zK = 0; break;
    case 'X': case 'x': reset_selected_face(); z0 = 1; zK = 1; break;
    case 'Z': case 'z': reset_selected_face(); z0 = 2; zK = 2; break;
    case 'U': case 'u': apply_rotation(-90); break; 
    case 'O': case 'o': apply_rotation(90); break;
  }
  glutPostRedisplay();
  errand(x, y, 0);
}

void mouse_func(int b, int s, int x, int y)
{
  if (b == 0 && s == 0 && angle >= 10)
    angle -= 5;
  if (b == 2 && s == 0 && angle <= 130)
    angle += 5;
  load_visualization_parameters();
  glutPostRedisplay();
  errand(x, y, 0);
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(400, 350);
  glutCreateWindow("Rubik's Cube!");
  glutDisplayFunc(draw_func);
  glutReshapeFunc(reshape_func);
  glutMouseFunc(mouse_func);
  glutKeyboardFunc(keyboard_func);
  init_func();
  glutMainLoop();
} // main
