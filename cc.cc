#include "cc.h"

#include <iostream>
#include <fstream>

Image::Image(const std::string& name) : name_(name) {
    std::ifstream in(name_ + "_macbeth.txt"); 
    in >> width_ >> height_;    

    Point p;
    in >> p.x >> p.y;
    cc_location_.one = p;
    in >> p.x >> p.y;
    cc_location_.two = p;
    in >> p.x >> p.y;
    cc_location_.three = p;
    in >> p.x >> p.y;
    cc_location_.four = p;

    for (int i = 0; i < 24; i++) {
        Point p;
        Box b;
        in >> p.x >> p.y;
        b.one = p;
        in >> p.x >> p.y;
        b.two = p;
        in >> p.x >> p.y;
        b.three = p;
        in >> p.x >> p.y;
        b.four = p;
        patch_locations_.push_back(b);
    }
}

Box Image::ColorCheckerLocation() {
    return cc_location_;
}

Box Image::PatchLocation(int patch_number) {
    return patch_locations_[patch_number];
}
