#include <iostream>
#include <cstring>

int main() {
  
  int n, i, x, y;
  bool matriz[501][501];
  bool find = false;
  std::memset(matriz, false, sizeof(matriz[0][0]) * 501 * 501);
  std::cin >> n;
  for(i = 0; i < n; i++)
  {
    std::cin >> x >> y;
    if(!matriz[x][y]) matriz[x][y] = true;
    else {find=true; break;}
  }
  if(find) std::cout << 1 << std::endl;
  else std::cout << 0 << std::endl;
  
  return 0;
}

