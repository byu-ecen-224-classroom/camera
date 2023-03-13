#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "camera.h"

/*
Takes a picture with the included libcamera-ecen224 binary
uint8_t * buf: a buffer where the image data of the photo taken will be stored
size_t bufsize: integer that holds the size of the buffer. The size of the photo
being taken is found as a #DEFINEd variable in "camera.h"
*/
void camera_capture_data(uint8_t * buf, size_t bufsize)
{
    system("./libcamera-ecen224");

    FILE *fp;

    fp = fopen("ecen224-lab-camera.bmp", "rb");

    fread(buf, sizeof(uint8_t), bufsize, fp);

    fclose(fp);

    system("rm -f ecen224-lab-camera.bmp");
}

/*
Takes the photo data retrieved from the previous function and saves it to a file
uint8_t * buf: a buffer where the image data of the photo taken is stored
size_t bufsize: integer that holds the size of the buffer. The size of the photo
being taken is found as a #DEFINEd variable in "camera.h"
char * filename: name of the file that is being saved
*/
void camera_save_to_file(uint8_t * buf, size_t bufsize, char * filename)
{
    /*
    YOUR CODE HERE
    */
}