#include <iostream>
#include <fstream>
#include <string>

#include <string.h>

int replace(int argc, char **argv){
  if(argc % 2){
    return 0;
  }
  std::ofstream output;
  std::ifstream input;
  input.open(argv[1]);

  std::string outName = "CB3mod.net";

  output.open(outName);

  std::string buffer;

  int i = 2;

  while(std::getline(input, buffer)){
    std::string line;
    line = buffer;

    int index = -1;
    if(i < argc){
      index = line.find(argv[i]);
    }

    if(index >= 0){
      line.erase(line.begin()+index+strlen(argv[i]), line.end());
      line += ' ';
      line.append(argv[i+1]);
      i+=2;
      std::cout << line << std::endl;
    }
    output << line << std::endl;
  }

  std::cout << "Done.\n";
  output.close();
  input.close();
  return 0;

}

int main(int argc, char **argv){
  replace(argc, argv);

  return 0;
}
