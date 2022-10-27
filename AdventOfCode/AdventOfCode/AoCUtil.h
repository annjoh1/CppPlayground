#include <fstream>
#include <vector>

std::vector<int> getIntsFromFile(const std::string& path)
{
  std::ifstream in(path);
  auto valuesFromFile = std::vector<int>();
  int tmp; 
  while (in >> tmp)
  {
    valuesFromFile.push_back(tmp);
  }
  return valuesFromFile;
}

int countIncrements(const std::vector<int>& inputVector)
{
  int counter = 0;
  for(int i = 1 ; i <  inputVector.size() ; ++i)
  {
    if(inputVector[i] > inputVector[i-1])
    {
      ++counter;
    }
  }
  return counter;
}
