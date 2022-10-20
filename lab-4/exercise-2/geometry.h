#ifndef GEOMETRY_H
#define GEOMETRY_H


bool pointInRect(float x, float y, float rx, float ry, float rw, float rh){
    bool value;
    if (((x > rx && x < rx + rw) && (y > ry && y < ry + rh))){
        value = true;
    }
    return value;
}


#endif

