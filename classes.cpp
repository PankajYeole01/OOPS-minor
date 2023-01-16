#include <iostream>
using namespace std;
class weight{
    private:
     int kg;
    public:
     int  showWeight(){
        return kg; 
     }
     void setWeight(int w){
         kg=w;
     }
};
int main() {
    // Write C++ code here
    weight w1;
    w1.setWeight(12);
    cout<<w1.showWeight();

    return 0;
}