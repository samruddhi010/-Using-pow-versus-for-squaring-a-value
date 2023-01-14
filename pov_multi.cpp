
// timing comparison of using the C pow function to square two values versus using simple multiplication//

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <dirent.h>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <string>
#include <iostream>
#include <stdio.h>
#include <sys/time.h>
#include <math.h>


using namespace std;
using namespace cv;

double getTime() {
  struct timeval cur;

  gettimeofday( &cur, NULL );
  return( cur.tv_sec + cur.tv_usec / 1000000.0 );
}


int main(int argc, const char * argv[]) {
 
    double x = 100;
    double y = 100;
    
    
//******************calculations for multiplication function************************//

    //before multiplcation
    double time_multi_before = getTime(); 
    for(double i=0;i<1000000000;i++){
        x = x*x;
    }

    //after multiplication
    double time_multi_after = getTime(); 

    //time for multiplication
    double time_multi = time_multi_after-time_multi_before; 

    cout << "required time for multiplication= " << time_multi << endl;

    //******************calculations for pow function************************//

    //before pow
    double time_pow_before = getTime(); 
    for(double i=0;i<1000000000;i++){
        y = pow(y,2);
    }

    //after pow
    double time_pow_after = getTime(); 

    //time taken by multiplication
    double time_pow = time_pow_after-time_pow_before; 

    cout << "required time for pow function = " << time_pow << endl;
    
    // Relative computaionl cost
    
    double computational = time_pow/time_multi;
    cout << "Relative cost for computation= " << computational << endl;

    return 0;
}