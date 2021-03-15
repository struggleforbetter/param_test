#include "ros/ros.h"
#include <string> 

int main(int argc, char** argv)
{
    ros::init(argc, argv, "param_test");
    ros::NodeHandle nh("~");
    std::cout << "argc: " << argc << std::endl;
    std::string boy;
    nh.getParam("boy",boy);
    std::cout << "boy: " << boy << std::endl;
    std::string global_girl;
    nh.getParam("/global_girl",global_girl);
    std::cout << "global_girl: " << global_girl << std::endl;
    if(argc > 1)
    {
        for(int i=1; i<argc; i++)
        {
            std::cout<<"argv["<<i<<"] "<<argv[i]<<std::endl;
        }
    }
    return 0;
}