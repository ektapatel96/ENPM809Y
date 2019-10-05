#include <iostream>

int Findpath(int x1, int y1, int x2, int y2){
    bool size;
	if ((x1>45 || y1>30) && (x2>45 || y2>30) )
     size = false;   
    else if (x1==x2 && y1==y2)
     size = false;
    // else (x1  )
}

int main()
{
    int x1,x2,y1,y2;
    std::cout<<"Enter the start and goal position: "<<std::endl;
    std::cin>> x1>>y1>>x2>>y2;
    Findpath();
	return 0;
}
