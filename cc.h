#include <string>
#include <vector>

struct Point {
    double x, y;
};

struct Box {
    Point one, two, three, four;
};

class Image {

 public:
   Image(const std::string& name);

   Box ColorCheckerLocation();

   // 0 <= patch_number <= 23, as there are 24 patches
   Box PatchLocation(int patch_number);

 private:
   std::string name_;

   int width_, height_;

    Box cc_location_;

    std::vector<Box> patch_locations_;

};
