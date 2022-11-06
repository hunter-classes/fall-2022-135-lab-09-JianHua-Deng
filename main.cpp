#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  std::cout << length(&pointP) << std::endl;
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
  std::cout << "Address of pointP: " << &pointP << "\n" << "Adress of pointQ: " << &pointQ << "\n" << "Answer: " << ans << "\n";

  move(&pos, &vel, 2.0);
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;


  return 0;
}//end main
