#ifndef _GLHELPERS_H_
#define _GLHELPERS_H_


// Includes
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#ifdef __APPLE__
  #include <OpenGL/gl3.h>
  #include <OpenGL/glu.h> 
  #include <GLUT/glut.h>
  #include <OpenGL/CGLCurrent.h>
  #include <OpenGL/CGLTypes.h>
  #include <OpenGL/CGLDevice.h>
#else
  #include <GL/glew.h>
  #include <GL/freeglut.h>
#endif

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

GLuint makeBO(GLenum type, void* data, GLsizei size, int accessFlags);
GLuint makeTextureBuffer(int w, int h, GLenum format, GLint internalFormat);
GLuint loadShader(GLenum type, char *file);
GLuint makeShaderProgram(GLuint vertexShader, GLuint fragmentShader);
GLuint loadTexture(const char *filename);
void registerGlDebugLogger(unsigned int logLevel);
char* loadFile(char* name);
// Matrix lookatMatrix(Vector eye, Vector center, Vector up);
GLuint genFloatTexture(float *data, int width, int height);

std::string getOpenGLInfo();
int checkGLErrors();
std::string glEnumToString(GLenum e);

#endif