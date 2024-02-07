#include <iostream>

using namespace std;
  
#define PI 3.14159
  
int main(){
    float radius, area;
    
    cout << "Enter radius of circle:\n";
    
    cin >> radius;
    area = PI*(radius*radius);
    cout << "The area of circle is equal to: " << area;
      
    return 0;
}
